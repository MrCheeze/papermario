#include "dead.h"
#include "common.h"

#define NAMESPACE EB5130

#include "world/common/atomic/TexturePan.inc.c"

ApiStatus func_8024030C_EB543C(Evt* script, s32 isInitialCall) {
    Bytecode* args = script->ptrReadPos;

    evt_set_variable(script, *args++, gCollisionStatus.currentFloor);
    return ApiStatus_DONE2;
}
