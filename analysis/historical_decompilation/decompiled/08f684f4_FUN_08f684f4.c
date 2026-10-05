
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f684f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 *unaff_r4;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_r6;
  undefined1 *unaff_r8;
  undefined1 *puVar4;
  undefined4 unaff_r10;
  int *unaff_r11;
  int *piVar5;
  undefined4 *in_r12;
  int *unaff_lr;
  undefined4 *puVar6;
  bool in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined4 in_s9;
  undefined4 extraout_s9;
  
  piVar5 = unaff_r11;
  if ((bool)in_CY && !(bool)in_ZR) {
    piVar5 = (int *)((int)unaff_r11 + 0x551);
    *unaff_r11 = (int)piVar5;
  }
  if (in_NG) {
    unaff_lr = (int *)**(undefined4 **)*piVar5;
    *in_r12 = unaff_lr;
    uVar1 = SUB41((undefined4 *)((int)piVar5 + 0x551),0);
    puVar4 = unaff_r8 + -0xcff;
    *unaff_r8 = uVar1;
    puVar2 = (undefined1 *)((int)unaff_r4 + -0xcff);
    *(char *)unaff_r4 = (char)puVar4;
    unaff_r4 = (undefined4 *)((int)unaff_r4 + -0x15ed);
    *puVar2 = (char)unaff_r4;
    unaff_r8 = unaff_r8 + -0x1beb;
    *puVar4 = uVar1;
    *(undefined4 *)((int)piVar5 + 0x551) = unaff_lr;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    puVar6 = (undefined4 *)*unaff_lr;
    unaff_lr = puVar6 + 0x677;
    puVar6[0x33a] = *puVar6;
  }
  if (in_NG) {
    *unaff_r4 = param_3;
    unaff_r4[1] = unaff_r6;
    unaff_r4[2] = unaff_r10;
    unaff_r4[3] = unaff_lr;
    func_0x082f9644();
    in_s9 = extraout_s9;
  }
  uRam08f68538 = SUB41(unaff_r8,0);
  *unaff_r4 = in_s9;
  iVar3 = (int)unaff_r4 * 2;
  if ((bool)in_CY && !(bool)in_ZR) {
    iVar3 = iVar3 + 0xee8;
  }
  if ((bool)in_ZR) {
    *(char *)(iVar3 + 0xccc) = (char)(char *)(iVar3 + 0xccc) + -0x45;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

