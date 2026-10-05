
/* WARNING: Removing unreachable block (ram,0x0805b6a4) */

undefined8 FUN_0805b4c0(ushort *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_lr;
  undefined8 uVar3;
  
  if (*param_1 - 1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x0805b4ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(PTR_PTR_0805b4ec + (*param_1 - 1) * 4))();
    return uVar3;
  }
  iVar1 = FUN_080baa7c(0,10);
  iVar1 = FUN_080baa7c(iVar1 * *DAT_0805b69c,10);
  uVar2 = FUN_080baa7c(iVar1 * *DAT_0805b6a0,10);
  return CONCAT44(unaff_lr,uVar2);
}

