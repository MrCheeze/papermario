#ifndef _SCRIPT_API_COMMON_H_
#define _SCRIPT_API_COMMON_H_

#include "common_structs.h"
#include "si.h"

ApiStatus FadeBackgroundToBlack(ScriptInstance* script, s32 isInitialCall);
ApiStatus UnfadeBackgroundFromBlack(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetCamLookAtObjVector(ScriptInstance* script, s32 isInitialCall);
ApiStatus HasMerleeCasts(ScriptInstance* script, s32 isInitialCall);
ApiStatus OnDefeatEnemy(ScriptInstance* script, s32 isInitialCall);
ApiStatus OnFleeBattleDrops(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetEncounterStatusFlags(ScriptInstance* script, s32 isInitialCall);
ApiStatus LoadDemoBattle(ScriptInstance* script, s32 isInitialCall);
ApiStatus RemoveNpc(ScriptInstance* script, s32 isInitialCall);
ApiStatus RemoveEncounter(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetBattleOutcome(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetOwnerEncounterTrigger(ScriptInstance* script, s32 isInitialCall);
ApiStatus DoNpcDefeat(ScriptInstance* script, s32 isInitialCall);
ApiStatus StartBattle(ScriptInstance* script, s32 isInitialCall);
ApiStatus StartBattleWith(ScriptInstance* script, s32 isInitialCall);
ApiStatus StartBossBattle(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetBattleMusic(ScriptInstance* script, s32 isInitialCall);
ApiStatus BindNpcAI(ScriptInstance* script, s32 isInitialCall);
ApiStatus BindNpcIdle(ScriptInstance* script, s32 isInitialCall);
ApiStatus RestartNpcAI(ScriptInstance* script, s32 isInitialCall);
ApiStatus EnableNpcAI(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetNpcAux(ScriptInstance* script, s32 isInitialCall);
ApiStatus BindNpcAux(ScriptInstance* script, s32 isInitialCall);
ApiStatus RestartNpcAux(ScriptInstance* script, s32 isInitialCall);
ApiStatus EnableNpcAux(ScriptInstance* script, s32 isInitialCall);
ApiStatus BindNpcInteract(ScriptInstance* script, s32 isInitialCall);
ApiStatus BindNpcHit(ScriptInstance* script, s32 isInitialCall);
ApiStatus BindNpcDefeat(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetSelfVar(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetSelfVar(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetNpcVar(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetNpcVar(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetSelfRotation(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetSelfEnemyFlags(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetSelfEnemyFlagBits(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetSelfNpcID(ScriptInstance* script, s32 isInitialCall);
ApiStatus ClearDefeatedEnemies(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetEnemyFlagBits(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetSelfAnimationFromTable(ScriptInstance* script, s32 isInitialCall);
ApiStatus ShowCoinCounter(ScriptInstance* script, s32 isInitialCall);
ApiStatus MakeEntity(ScriptInstance* script, s32 isInitialCall);
ApiStatus AssignScript(ScriptInstance* script, s32 isInitialCall);
ApiStatus AssignAreaFlag(ScriptInstance* script, s32 isInitialCall);
ApiStatus AssignFlag(ScriptInstance* script, s32 isInitialCall);
ApiStatus AssignBlockFlag(ScriptInstance* script, s32 isInitialCall);
ApiStatus AssignPanelFlag(ScriptInstance* script, s32 isInitialCall);
ApiStatus AssignCrateFlag(ScriptInstance* script, s32 isInitialCall);
ApiStatus DeleteTrigger(ScriptInstance* script, s32 isInitialCall);
ApiStatus TranslateModel(ScriptInstance* script, s32 isInitialCall);
ApiStatus RotateModel(ScriptInstance* script, s32 isInitialCall);
ApiStatus ScaleModel(ScriptInstance* script, s32 isInitialCall);
ApiStatus CloneModel(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetModelIndex(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetModelCenter(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetTexPanner(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetModelFlag10(ScriptInstance* script, s32 isInitialCall);
ApiStatus EnableTexPanning(ScriptInstance* script, s32 isInitialCall);
ApiStatus EnableModel(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetGroupEnabled(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetTexPanOffset(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetModelFlags(ScriptInstance* script, s32 isInitialCall);
ApiStatus TranslateGroup(ScriptInstance* script, s32 isInitialCall);
ApiStatus RotateGroup(ScriptInstance* script, s32 isInitialCall);
ApiStatus ScaleGroup(ScriptInstance* script, s32 isInitialCall);
ApiStatus EnableGroup(ScriptInstance* script, s32 isInitialCall);
ApiStatus ModifyColliderFlags(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetColliderCenter(ScriptInstance* script, s32 isInitialCall);
ApiStatus ParentColliderToModel(ScriptInstance* script, s32 isInitialCall);
ApiStatus UpdateColliderTransform(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetZoneEnabled(ScriptInstance* script, s32 isInitialCall);
ApiStatus GotoMap(ScriptInstance* script, s32 isInitialCall);
ApiStatus GotoMapSpecial(ScriptInstance* script, s32 isInitialCall);
ApiStatus GotoMapByID(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetEntryID(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetMapID(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetLoadType(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetRenderMode(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlaySoundAtModel(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlaySoundAtCollider(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamEnabled(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamFlag80(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamPerspective(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamViewport(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamBGColor(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamTarget(ScriptInstance* script, s32 isInitialCall);
ApiStatus ShakeCam(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamLeadPlayer(ScriptInstance* script, s32 isInitialCall);
ApiStatus PanToTarget(ScriptInstance* script, s32 isInitialCall);
ApiStatus UseSettingsFrom(ScriptInstance* script, s32 isInitialCall);
ApiStatus LoadSettings(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamType(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamPitch(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamDistance(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamPosA(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamPosB(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamPosC(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetPanTarget(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamSpeed(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetCamType(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetCamPitch(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetCamDistance(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetCamPosA(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetCamPosB(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetCamPosC(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetCamPosition(ScriptInstance* script, s32 isInitialCall);
ApiStatus WaitForCam(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetCamProperties(ScriptInstance* script, s32 isInitialCall);
ApiStatus AdjustCam(ScriptInstance* script, s32 isInitialCall);
ApiStatus ResetCam(ScriptInstance* script, s32 isInitialCall);
ApiStatus LoadModelAnimation(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlayModelAnimation(ScriptInstance* script, s32 isInitialCall);
ApiStatus ChangeModelAnimation(ScriptInstance* script, s32 isInitialCall);
ApiStatus DeleteNpc(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetNpcPointer(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetNpcPos(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetNpcRotation(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetNpcScale(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetNpcCollisionSize(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetNpcSpeed(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetNpcJumpscale(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetNpcAnimation(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetNpcAnimation(ScriptInstance* script, s32 isInitialCall);
ApiStatus NpcMoveTo(ScriptInstance* script, s32 isInitialCall);
ApiStatus NpcJump0(ScriptInstance* script, s32 isInitialCall);
ApiStatus NpcJump1(ScriptInstance* script, s32 isInitialCall);
ApiStatus NpcFlyTo(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetNpcYaw(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetNpcYaw(ScriptInstance* script, s32 isInitialCall);
ApiStatus InterpNpcYaw(ScriptInstance* script, s32 isInitialCall);
ApiStatus NpcFacePlayer(ScriptInstance* script, s32 isInitialCall);
ApiStatus NpcFaceNpc(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetNpcFlagBits(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetNpcPos(ScriptInstance* script, s32 isInitialCall);
ApiStatus EnableNpcShadow(ScriptInstance* script, s32 isInitialCall);
ApiStatus EnableNpcBlur(ScriptInstance* script, s32 isInitialCall);
ApiStatus ClearPartnerMoveHistory(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetPartnerPos(ScriptInstance* script, s32 isInitialCall);
ApiStatus DisablePartnerAI(ScriptInstance* script, s32 isInitialCall);
ApiStatus EnablePartnerAI(ScriptInstance* script, s32 isInitialCall);
ApiStatus BringPartnerOut(ScriptInstance* script, s32 isInitialCall);
ApiStatus PutPartnerAway(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetCurrentPartnerID(ScriptInstance* script, s32 isInitialCall);
ApiStatus IsCurrentPartnerFlying(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetNpcEffect(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlaySoundAtNpc(ScriptInstance* script, s32 isInitialCall);
ApiStatus SpeakToPlayer(ScriptInstance* script, s32 isInitialCall);
ApiStatus EndSpeech(ScriptInstance* script, s32 isInitialCall);
ApiStatus ContinueSpeech(ScriptInstance* script, s32 isInitialCall);
ApiStatus SpeakToNpc(ScriptInstance* script, s32 isInitialCall);
ApiStatus ShowMessageAtScreenPos(ScriptInstance* script, s32 isInitialCall);
ApiStatus ShowMessageAtWorldPos(ScriptInstance* script, s32 isInitialCall);
ApiStatus CloseMessage(ScriptInstance* script, s32 isInitialCall);
ApiStatus SwitchMessage(ScriptInstance* script, s32 isInitialCall);
ApiStatus ShowChoice(ScriptInstance* script, s32 isInitialCall);
ApiStatus CloseChoice(ScriptInstance* script, s32 isInitialCall);
ApiStatus CancelMessage(ScriptInstance* script, s32 isInitialCall);
ApiStatus CancelMessageAndBlock(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetMessageImages(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetMessageString(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetMessageValue(ScriptInstance* script, s32 isInitialCall);
ApiStatus HidePlayerShadow(ScriptInstance* script, s32 isInitialCall);
ApiStatus DisablePlayerPhysics(ScriptInstance* script, s32 isInitialCall);
ApiStatus DisablePlayerInput(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetPlayerPos(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetPlayerCollisionSize(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetPlayerSpeed(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetPlayerJumpscale(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetPlayerAnimation(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetPlayerActionState(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlayerMoveTo(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlayerJump(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlayerJump1(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlayerJump2(ScriptInstance* script, s32 isInitialCall);
ApiStatus InterpPlayerYaw(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlayerFaceNpc(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetPlayerTargetYaw(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetPlayerFlagBits(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetPlayerActionState(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetPlayerPos(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetPlayerAnimation(ScriptInstance* script, s32 isInitialCall);
ApiStatus FullyRestoreHPandFP(ScriptInstance* script, s32 isInitialCall);
ApiStatus FullyRestoreSP(ScriptInstance* script, s32 isInitialCall);
ApiStatus EnablePartner(ScriptInstance* script, s32 isInitialCall);
ApiStatus DisablePartner(ScriptInstance* script, s32 isInitialCall);
ApiStatus UseEntryHeading(ScriptInstance* script, s32 isInitialCall);
ApiStatus UseExitHeading(ScriptInstance* script, s32 isInitialCall);
ApiStatus DisablePulseStone(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetCurrentPartner(ScriptInstance* script, s32 isInitialCall);
ApiStatus Disable8bitMario(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlaySoundAtPlayer(ScriptInstance* script, s32 isInitialCall);
ApiStatus MakeLerp(ScriptInstance* script, s32 isInitialCall);
ApiStatus UpdateLerp(ScriptInstance* script, s32 isInitialCall);
ApiStatus RandInt(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetAngleBetweenNPCs(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetAngleToNPC(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetAngleToPlayer(ScriptInstance* script, s32 isInitialCall);
ApiStatus AwaitPlayerApproach(ScriptInstance* script, s32 isInitialCall);
ApiStatus IsPlayerWithin(ScriptInstance* script, s32 isInitialCall);
ApiStatus AwaitPlayerLeave(ScriptInstance* script, s32 isInitialCall);
ApiStatus AddVectorPolar(ScriptInstance* script, s32 isInitialCall);
ApiStatus LoadPath(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetNextPathPos(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetDist2D(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetValueByRef(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetValueByRef(ScriptInstance* script, s32 isInitialCall);
ApiStatus EnableStatusMenu(ScriptInstance* script, s32 isInitialCall);
ApiStatus ShowStatusMenu(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetGameMode(ScriptInstance* script, s32 isInitialCall);
ApiStatus ClampAngleInt(ScriptInstance* script, s32 isInitialCall);
ApiStatus ClampAngleFloat(ScriptInstance* script, s32 isInitialCall);
ApiStatus FadeOutMusic(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetMusicTrack(ScriptInstance* script, s32 isInitialCall);
ApiStatus FadeInMusic(ScriptInstance* script, s32 isInitialCall);
ApiStatus ClearAmbientSounds(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlayAmbientSounds(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlaySound(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlaySoundAt(ScriptInstance* script, s32 isInitialCall);
ApiStatus StopSound(ScriptInstance* script, s32 isInitialCall);
ApiStatus UseDoorSounds(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlaySoundAtF(ScriptInstance* script, s32 isInitialCall);
ApiStatus RemoveKeyItemAt(ScriptInstance* script, s32 isInitialCall);
ApiStatus RemoveItemAt(ScriptInstance* script, s32 isInitialCall);
ApiStatus AddKeyItem(ScriptInstance* script, s32 isInitialCall);
ApiStatus HasKeyItem(ScriptInstance* script, s32 isInitialCall);
ApiStatus FindKeyItem(ScriptInstance* script, s32 isInitialCall);
ApiStatus AddItem(ScriptInstance* script, s32 isInitialCall);
ApiStatus FindItem(ScriptInstance* script, s32 isInitialCall);
ApiStatus RemoveItem(ScriptInstance* script, s32 isInitialCall);
ApiStatus CountFortessKeys(ScriptInstance* script, s32 isInitialCall);
ApiStatus RemoveFortressKeys(ScriptInstance* script, s32 isInitialCall);
ApiStatus MakeItemEntity(ScriptInstance* script, s32 isInitialCall);
ApiStatus DropItemEntity(ScriptInstance* script, s32 isInitialCall);
ApiStatus DropItemEntityB(ScriptInstance* script, s32 isInitialCall);
ApiStatus RemoveItemEntity(ScriptInstance* script, s32 isInitialCall);
ApiStatus AddBadge(ScriptInstance* script, s32 isInitialCall);
ApiStatus RemoveBadge(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetItemPos(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetItemFlags(ScriptInstance* script, s32 isInitialCall);
ApiStatus AddCoin(ScriptInstance* script, s32 isInitialCall);
ApiStatus AddStarPoints(ScriptInstance* script, s32 isInitialCall);
ApiStatus AddStarPieces(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetItemPower(ScriptInstance* script, s32 isInitialCall);
ApiStatus ShowGotItem(ScriptInstance* script, s32 isInitialCall);
ApiStatus ShowEmote(ScriptInstance* script, s32 isInitialCall);
ApiStatus ShowSleepBubble(ScriptInstance* script, s32 isInitialCall);
ApiStatus RemoveEffect(ScriptInstance* script, s32 isInitialCall);
ApiStatus PlayEffect(ScriptInstance* script, s32 isInitialCall);
ApiStatus SetSpriteShading(ScriptInstance* script, s32 isInitialCall);
ApiStatus EnableSpriteShading(ScriptInstance* script, s32 isInitialCall);
ApiStatus GetDemoState(ScriptInstance* script, s32 isInitialCall);
ApiStatus DemoPressButton(ScriptInstance* script, s32 isInitialCall);
ApiStatus DemoReleaseButton(ScriptInstance* script, s32 isInitialCall);
ApiStatus DemoSetButtons(ScriptInstance* script, s32 isInitialCall);
ApiStatus DemoJoystickRadial(ScriptInstance* script, s32 isInitialCall);
ApiStatus DemoJoystickXY(ScriptInstance* script, s32 isInitialCall);

ApiStatus func_802CFE2C(ScriptInstance* script, s32 isInitialCall);
ApiStatus func_802CFD30(ScriptInstance* script, s32 isInitialCall);

extern Bytecode* ShakeCam1;
extern Bytecode* ShakeCamX;

#endif
