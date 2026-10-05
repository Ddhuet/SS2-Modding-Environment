
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0816fdba) */
/* WARNING: Removing unreachable block (ram,0x0816fdce) */
/* WARNING: Removing unreachable block (ram,0x0816fdd6) */
/* WARNING: Removing unreachable block (ram,0x0816fdda) */
/* WARNING: Removing unreachable block (ram,0x0816fdde) */
/* WARNING: Removing unreachable block (ram,0x0816fde2) */
/* WARNING: Removing unreachable block (ram,0x0816fde6) */
/* WARNING: Removing unreachable block (ram,0x0816fdea) */
/* WARNING: Removing unreachable block (ram,0x0816fdee) */
/* WARNING: Removing unreachable block (ram,0x0816fdf2) */

void FUN_0816fd96(int param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  uint unaff_r4;
  undefined4 unaff_r8;
  uint unaff_r9;
  int unaff_r10;
  undefined4 uVar3;
  int *unaff_r11;
  undefined1 in_r12;
  undefined1 *puVar4;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar5;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    unaff_r11 = (int *)coprocessor_movefromRt(5,5,5,in_cr4,in_cr15);
  }
  bVar5 = in_CY;
  if (in_ZR || in_NG != in_OV) {
    bVar5 = 0x32c00000 < unaff_r9 || unaff_r9 + 0xcd400000 < (uint)in_CY;
    in_OV = SBORROW4(unaff_r9,0x32c00000) != SBORROW4(unaff_r9 + 0xcd400000,(uint)!in_CY);
    iVar1 = -(!in_CY + 0x32c00000);
    register0x00000054 = (BADSPACEBASE *)(unaff_r9 + iVar1);
    in_NG = (int)(unaff_r9 + iVar1) < 0;
    in_ZR = unaff_r9 == !in_CY + 0x32c00000;
  }
  if (!bVar5 || in_ZR) {
    unaff_r10 = *unaff_r11;
  }
  if (in_NG == in_OV) {
    param_4 = (uint *)((int)param_4 + 0xf99);
    *param_4 = unaff_r9;
  }
  if (bVar5 && !in_ZR) {
    unaff_r9 = unaff_r10 + 0xa0000000;
  }
  if (in_NG != in_OV) {
    unaff_r8 = *(undefined4 *)((int)register0x00000054 + param_1 * 0x80000);
  }
  puVar4 = (undefined1 *)(unaff_lr & 0xfccfffff);
  if (puVar4 == (undefined1 *)0x0 || (int)puVar4 < 0 != (bool)in_OV) {
    *(char *)(param_3 + 0xbe9) = (char)unaff_lr;
    puVar2 = param_4;
  }
  else {
    puVar2 = param_4 + 499;
    *(undefined1 *)param_4 = in_r12;
  }
  if ((int)puVar4 < 0 == (bool)in_OV) {
    *puVar2 = unaff_r9;
  }
  uVar3 = *(undefined4 *)(unaff_lr + (unaff_r4 >> 7));
  *(undefined4 *)(unaff_r9 + 0x58d) = unaff_r8;
  coprocessor_moveto(3,5,4,uVar3,in_cr2,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

