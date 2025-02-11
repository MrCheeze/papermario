#include "common.h"
#include "effects_internal.h"

void fx_46_appendGfx(void* effect);

INCLUDE_ASM(s32, "effects/effect_46", fx_46_main);

void fx_46_init(void) {
}

INCLUDE_ASM(s32, "effects/effect_46", fx_46_update);

void fx_46_render(EffectInstance* effect) {
    RenderTask renderTask;
    RenderTask* retTask;

    renderTask.appendGfx = fx_46_appendGfx;
    renderTask.appendGfxArg = effect;
    renderTask.distance = 0;
    renderTask.renderMode = RENDER_MODE_2D;

    retTask = shim_queue_render_task(&renderTask);
    retTask->renderMode |= RENDER_TASK_FLAG_2;
}

INCLUDE_ASM(s32, "effects/effect_46", fx_46_appendGfx);
