#include "common.h"
#include "animation_script.h"

extern Gfx Entity_HitYellowBlock_RenderBlock2[];
extern Gfx Entity_HitYellowBlock_RenderBlock1[];

StaticAnimatorNode Entity_HitYellowBlock_NodeBlock2 = {
    .displayList = Entity_HitYellowBlock_RenderBlock2,
    .pos = { 0.0f, 25.0f, 0.0f },
    .sibling = ANIM_NULL,
    .child = ANIM_NULL,
};

StaticAnimatorNode Entity_HitYellowBlock_NodeBlock1 = {
    .displayList = Entity_HitYellowBlock_RenderBlock1,
    .sibling = &Entity_HitYellowBlock_NodeBlock2,
    .child = ANIM_NULL,
};

StaticAnimatorNode Entity_HitYellowBlock_NodeMain = {
    .displayList = ANIM_NULL,
    .sibling = ANIM_NULL,
    .child = &Entity_HitYellowBlock_NodeBlock1,
};

StaticAnimatorNode* Entity_HitYellowBlock_Mesh[] = {
    &Entity_HitYellowBlock_NodeMain,
    &Entity_HitYellowBlock_NodeBlock1,
    &Entity_HitYellowBlock_NodeBlock2,
    ANIM_NULL,
};

AnimScript Entity_HitYellowBlock_AnimationHit = {
    as_SetRotation(1, 0.0, 0.0, 0.0)
    as_SetPos(1, 0, 0, 0)
    as_SetScale(1, 1.0, 1.0, 1.0)
    as_SetRotation(2, 0.0, 0.0, 0.0)
    as_SetPos(2, 0, 0, 0)
    as_SetScale(2, 1.0, 1.0, 1.0)
    as_SetRotation(3, 0.0, 0.0, 0.0)
    as_SetPos(3, 0, 25, 0)
    as_SetScale(3, -1.0, -1.0, -1.0)
    as_Wait(1)
    as_SetPos(2, 0, 25, 0)
    as_SetScale(2, 2.0, 0.0, 2.0)
    as_SetScale(3, -2.0, 0.0, -2.0)
    as_Wait(1)
    as_SetPos(2, 0, 40, 0)
    as_SetScale(2, 1.62, -0.62, 1.62)
    as_SetScale(3, -1.62, 0.62, -1.62)
    as_Wait(1)
    as_SetPos(2, 0, 50, 0)
    as_SetScale(2, -1.0, -1.0, -1.0)
    as_SetScale(3, 1.0, 1.0, 1.0)
    as_Wait(1)
    as_SetPos(2, 0, 43, 0)
    as_SetScale(2, -1.36, -0.885, -1.36)
    as_SetPos(3, 0, 21, 0)
    as_SetScale(3, 1.36, 0.885, 1.36)
    as_Wait(1)
    as_SetPos(2, 0, 35, 0)
    as_SetScale(2, -1.245, -0.745, -1.245)
    as_SetPos(3, 0, 16, 0)
    as_SetScale(3, 1.245, 0.745, 1.245)
    as_Wait(1)
    as_SetPos(2, 0, 30, 0)
    as_SetScale(2, -1.18, -0.815, -1.18)
    as_SetPos(3, 0, 9, 0)
    as_SetScale(3, 1.18, 0.815, 1.18)
    as_Wait(1)
    as_SetPos(2, 0, 26, 0)
    as_SetScale(2, -1.06, -0.935, -1.06)
    as_SetPos(3, 0, 3, 0)
    as_SetScale(3, 1.06, 0.935, 1.06)
    as_Wait(1)
    as_Loop
        as_SetPos(2, 0, 25, 0)
        as_SetScale(2, -1.0, -1.0, -1.0)
        as_SetPos(3, 0, 0, 0)
        as_SetScale(3, 1.0, 1.0, 1.0)
        as_Wait(1)
    as_EndLoop
    as_End
};

AnimScript Entity_HitYellowBlock_AnimationIdle = {
    as_SetRotation(1, 0.0, 0.0, 0.0)
    as_SetPos(1, 0, 0, 0)
    as_SetScale(1, 1.0, 1.0, 1.0)
    as_SetRotation(2, 0.0, 0.0, 0.0)
    as_SetPos(2, 0, 0, 0)
    as_SetScale(2, 1.0, 1.0, 1.0)
    as_SetRotation(3, 0.0, 0.0, 0.0)
    as_SetPos(3, 0, 25, 0)
    as_SetScale(3, -1.0, -1.0, -1.0)
    as_Wait(1)
    as_Restart
    as_End
};
