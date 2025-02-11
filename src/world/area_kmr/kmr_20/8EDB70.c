#include "kmr_20.h"

#define NAMESPACE dup2_kmr_20
#include "world/common/atomic/Pipe.inc.c"
#define NAMESPACE kmr_20

INCLUDE_ASM(s32, "world/area_kmr/kmr_20/8EDB70", func_80242030_8EDE50);

INCLUDE_ASM(s32, "world/area_kmr/kmr_20/8EDB70", func_80242084_8EDEA4);

ApiStatus func_802420EC_8EDF0C(Evt* script, s32 isInitialCall) {
    if (isInitialCall) {
        script->functionTemp[1] = 255;
    }

    script->functionTemp[1] -= 16;
    if (script->functionTemp[1] <= 0) {
        script->functionTemp[1] = 0;
        return ApiStatus_DONE2;
    }

    set_screen_overlay_params_front(0, script->functionTemp[1]);
    return ApiStatus_BLOCK;
}

ApiStatus func_80242144_8EDF64(Evt* script, s32 isInitialCall) {
    au_ambience_set_volume(0, 1000, 0x3F);
    return ApiStatus_DONE2;
}

ApiStatus func_8024216C_8EDF8C(Evt* script, s32 isInitialCall) {
    au_ambience_set_volume(0, 1000, 0x7F);
    return ApiStatus_DONE2;
}
