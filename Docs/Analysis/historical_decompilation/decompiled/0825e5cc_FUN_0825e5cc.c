
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825e5cc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int unaff_r5;
  char *pcVar5;
  char *unaff_r6;
  undefined4 unaff_r8;
  int unaff_r11;
  uint in_r12;
  uint extraout_r12;
  char in_NG;
  undefined1 uVar6;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar7;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    uVar8 = func_0x0708bc9c();
    in_r12 = extraout_r12;
  }
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  puVar3 = (undefined1 *)uVar8;
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(3,in_cr12,unaff_r8);
  }
  pcVar5 = (char *)(unaff_r5 + 0x3a0);
  coprocessor_loadlong2(0xe,in_cr14,pcVar5);
  puVar2 = (undefined1 *)(in_r12 + -(!(bool)in_CY + 0x3440000));
  if (0x3440000 < in_r12 || in_r12 + 0xfcbc0000 < (uint)(byte)in_CY) {
    puVar3 = (undefined1 *)((uint)unaff_r6 & (int)pcVar5 * 0x4000000);
    puVar2 = puVar3;
  }
  uVar6 = (int)puVar2 < 0;
  if (!(bool)uVar6) {
    unaff_r6 = *(char **)(unaff_r5 + 0x398);
    uVar4 = *(undefined4 *)(unaff_r5 + 0x390);
    puVar3 = *(undefined1 **)(unaff_r5 + 0x38c);
  }
  bVar7 = false;
  if (SBORROW4(in_r12,0x3440000) != SBORROW4(in_r12 + 0xfcbc0000,(uint)!(bool)in_CY)) {
    iVar1 = unaff_r11 >> (in_r12 + -(!(bool)in_CY + 0x3440000) & 0xff);
    bVar7 = SBORROW4(0x825e5f0,iVar1);
    pcVar5 = (char *)(0x825e5f0 - iVar1);
    uVar6 = (int)pcVar5 < 0;
  }
  if (bVar7) {
    *pcVar5 = (char)unaff_r6;
    *unaff_r6 = (char)unaff_r6 + -0x66;
  }
  if (!(bool)uVar6) {
    func_0x099b6784(puVar3,uVar4);
  }
  if ((bool)uVar6) {
    func_0x0963375c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

