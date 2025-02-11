#include "common.h"
#include "hud_element.h"

#define NAMESPACE action_command_07

extern s32 D_80294280;
extern s32 D_802A9620;
extern HudScript HES_BlueMeter;
extern HudScript HES_AButton;
extern HudScript HES_MashAButton;
extern HudScript HES_RunAwayOK;

s32 func_8024FAFC(s32);

ApiStatus func_802A9000_425B50(Evt* script, s32 isInitialCall) {
    ActionCommandStatus* actionCommandStatus = &gActionCommandStatus;
    BattleStatus* battleStatus = &gBattleStatus;
    Bytecode* args = script->ptrReadPos;
    s32 hudElement;
    s32 hudElementTemp;

    battleStatus->unk_82 = 5;
    battleStatus->unk_434 = &D_80294280;

    actionCommandStatus->autoSucceed = 0;
    actionCommandStatus->actionCommandID = 7;
    actionCommandStatus->state = 0;
    actionCommandStatus->unk_60 = 0;
    actionCommandStatus->barFillLevel = evt_get_variable(script, *args);
    actionCommandStatus->hudElementX = -48;
    actionCommandStatus->unk_48 = 0;
    D_802A9620 = 0;
    actionCommandStatus->hudElementY = 80;

    hudElement = hud_element_create(&HES_AButton);
    actionCommandStatus->hudElements[0] = hudElement;
    hud_element_set_flags(hudElement, HUD_ELEMENT_FLAGS_80 | HUD_ELEMENT_FLAGS_DISABLED);
    hud_element_set_render_pos(hudElement, actionCommandStatus->hudElementX,
        actionCommandStatus->hudElementY);
    hud_element_set_render_depth(hudElement, 0);

    // Weird use of an extra temp settles regalloc here.
    hudElementTemp = hud_element_create(&HES_BlueMeter);
    hudElement = hudElementTemp;
    actionCommandStatus->hudElements[1] = hudElement;
    hud_element_set_render_pos(hudElement, actionCommandStatus->hudElementX,
        actionCommandStatus->hudElementY + 28);
    hud_element_set_render_depth(hudElement, 0);
    hud_element_set_flags(hudElement, HUD_ELEMENT_FLAGS_80 | HUD_ELEMENT_FLAGS_DISABLED);

    hudElement = hud_element_create(&HES_RunAwayOK);
    actionCommandStatus->hudElements[2] = hudElement;
    hud_element_set_render_pos(hudElement, actionCommandStatus->hudElementX,
        actionCommandStatus->hudElementY + 28);
    hud_element_set_render_depth(hudElement, 0);
    hud_element_set_flags(hudElement, HUD_ELEMENT_FLAGS_80 | HUD_ELEMENT_FLAGS_DISABLED);

    battleStatus->flags1 &= ~0x8000;

    return ApiStatus_DONE2;
}

ApiStatus func_802A916C_425CBC(Evt* script, s32 isInitialCall) {
    ActionCommandStatus* actionCommandStatus = &gActionCommandStatus;
    BattleStatus* battleStatus = &gBattleStatus;
    s32* args = script->ptrReadPos;
    s32 mask;

    actionCommandStatus->autoSucceed = 0;
    actionCommandStatus->unk_4E = evt_get_variable(script, *args++);
    actionCommandStatus->unk_52 = evt_get_variable(script, *args++);
    actionCommandStatus->unk_50 = evt_get_variable(script, *args++);
    actionCommandStatus->unk_50 = func_80268224(actionCommandStatus->unk_50);

    actionCommandStatus->unk_60 = 0;
    battleStatus->actionSuccess = 0;
    battleStatus->unk_86 = 0;

    battleStatus->flags1 &= ~0x8000;
    func_8024FAFC(battleStatus->flags1);
    actionCommandStatus->state = 10;

    return ApiStatus_DONE2;
}

void func_802A9228_425D78(void) {
    ActionCommandStatus* actionCommandStatus = &gActionCommandStatus;
    BattleStatus* battleStatus = &gBattleStatus;
    s32 id;

    switch (actionCommandStatus->state) {
        case 0:
            btl_set_popup_duration(99);

            id = actionCommandStatus->hudElements[0];
            if (actionCommandStatus->unk_61 != 0) {
                hud_element_clear_flags(id, 2);
            }
            hud_element_set_alpha(id, 255);

            id = actionCommandStatus->hudElements[1];
            hud_element_set_alpha(id, 255);
            if (actionCommandStatus->unk_61 != 0) {
                hud_element_clear_flags(id, 2);
            }

            id = actionCommandStatus->hudElements[2];
            hud_element_set_alpha(id, 255);
            if (actionCommandStatus->unk_61 != 0) {
                hud_element_clear_flags(id, 2);
            }

            actionCommandStatus->state = 1;
            break;
        case 1:
            btl_set_popup_duration(99);

            actionCommandStatus->hudElementX += 20;
            if (actionCommandStatus->hudElementX > 50) {
                actionCommandStatus->hudElementX = 50;
            }

            hud_element_set_render_pos(actionCommandStatus->hudElements[0], actionCommandStatus->hudElementX, actionCommandStatus->hudElementY);
            hud_element_set_render_pos(actionCommandStatus->hudElements[1], actionCommandStatus->hudElementX, actionCommandStatus->hudElementY + 28);
            hud_element_set_render_pos(actionCommandStatus->hudElements[2], actionCommandStatus->hudElementX + 31, actionCommandStatus->hudElementY + 14);
            break;
        case 10:
            btl_set_popup_duration(99);

            if (actionCommandStatus->unk_4E != 0) {
                actionCommandStatus->unk_4E--;
                return;
            }

            hud_element_set_script(actionCommandStatus->hudElements[0], &HES_MashAButton);
            battleStatus->actionSuccess = 0;
            D_802A9620 = 1;
            actionCommandStatus->unk_5D = 0;
            actionCommandStatus->state = 0xB;
            actionCommandStatus->unk_54 = actionCommandStatus->unk_52;
            // fallthrough
        case 11:
            btl_set_popup_duration(99);

            if (battleStatus->currentButtonsPressed & BUTTON_A) {
                s32 fillAmt = battleStatus->unk_434[actionCommandStatus->unk_50] * 6;

                if (actionCommandStatus->unk_5D == 0) {
                    actionCommandStatus->barFillLevel += fillAmt;
                }
            }

            if (actionCommandStatus->barFillLevel > 10000) {
                actionCommandStatus->barFillLevel = 10000;
                actionCommandStatus->unk_5D = 3;
            }

            if (actionCommandStatus->unk_5D != 0) {
                actionCommandStatus->unk_5D--;
                if (actionCommandStatus->unk_5D == 0) {
                    actionCommandStatus->barFillLevel = 0;
                    battleStatus->actionSuccess++;
                }
            }

            battleStatus->unk_84 = actionCommandStatus->barFillLevel / 100;

            if (actionCommandStatus->unk_54 != 0) {
                actionCommandStatus->unk_54--;
                return;
            }
            btl_set_popup_duration(0);
            actionCommandStatus->unk_54 = 5;
            actionCommandStatus->state = 0xC;
            break;
        case 12:
            if (actionCommandStatus->unk_54 != 0) {
                actionCommandStatus->unk_54--;
                return;
            }
            func_80268C9C();
            break;
    }
}

void N(draw_hud_elements)(void) {
    ActionCommandStatus* actionCommandStatus = &gActionCommandStatus;
    s32 hudX;
    s32 hudY;
    s32 hudElement1;

    hud_element_draw_clipped(actionCommandStatus->hudElements[0]);
    hudElement1 = actionCommandStatus->hudElements[1];
    hud_element_draw_clipped(hudElement1);
    hud_element_get_render_pos(hudElement1, &hudX, &hudY);

    if (D_802A9620 == 0) {
        func_80268798(hudX, hudY, actionCommandStatus->barFillLevel / 100, 1);
    } else {
        func_80268798(hudX, hudY, actionCommandStatus->barFillLevel / 100, 2);
    }

    hud_element_draw_clipped(actionCommandStatus->hudElements[2]);
}

#include "common/free_hud_elements.inc.c"
