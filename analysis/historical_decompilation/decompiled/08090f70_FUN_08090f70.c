
/* WARNING: Removing unreachable block (ram,0x08090ffe) */
/* WARNING: Removing unreachable block (ram,0x080911f6) */
/* WARNING: Removing unreachable block (ram,0x08091200) */
/* WARNING: Removing unreachable block (ram,0x08091208) */
/* WARNING: Removing unreachable block (ram,0x080911fe) */

undefined4 FUN_08090f70(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_lr;
  
  piVar1 = DAT_0809100c;
  iVar2 = FUN_08001494(0x88);
  *piVar1 = iVar2;
  FUN_08065784(iVar2,DAT_08091010,0,0xffffffff,0);
  *(undefined1 *)(iVar2 + 0x1c) = 0;
  *(undefined2 *)(iVar2 + 0x3c) = 10;
  *(undefined2 *)(iVar2 + 0x40) = 0;
  *(undefined2 *)(iVar2 + 0x3e) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0x10000;
  *(undefined4 *)(iVar2 + 0x38) = 0x5800;
  FUN_08065784(iVar2 + 0x44,DAT_08091014,1,0xffffffff,0);
  *(undefined1 *)(iVar2 + 0x60) = 1;
  *(undefined2 *)(iVar2 + 0x80) = 0xe;
  *(undefined2 *)(iVar2 + 0x84) = 0;
  *(undefined2 *)(iVar2 + 0x82) = 0;
  *(undefined4 *)(iVar2 + 0x78) = DAT_08091018;
  *(undefined4 *)(iVar2 + 0x7c) = 0x5800;
  if (*piVar1 == 0) {
    return unaff_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08091008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)PTR_PTR_0809101c)();
  return uVar3;
}

