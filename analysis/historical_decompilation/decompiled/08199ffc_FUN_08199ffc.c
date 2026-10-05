
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08f69484) */

undefined8 FUN_08199ffc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined8 *unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  uint *in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar1;
  bool bVar2;
  undefined4 in_cr0;
  
  if (in_ZR || in_NG != in_OV) {
    return *unaff_r4;
  }
  if (in_CY) {
    param_1 = *(uint *)(param_3 + 4);
    unaff_r9 = *(undefined4 **)(param_3 + 0xc);
    param_3 = param_3 + 0x10;
  }
  if (in_NG == in_OV) {
    software_interrupt(0xc2a500);
  }
  if (!in_ZR) {
    *unaff_r9 = unaff_r8;
  }
  if (in_NG != in_OV) {
    *in_r12 = param_2;
  }
  *(undefined4 *)(unaff_r6 + param_2 * 2) = unaff_r8;
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = false;
  if (in_CY) {
    unaff_r5 = param_4 & 0x14c00000;
    bVar1 = unaff_r5 == 0;
    in_NG = '\0';
  }
  bVar2 = false;
  if (bVar1) {
    param_4 = param_1 & (int)param_4 >> (param_2 & 0xff) & unaff_r5 >> (param_3 & 0xff) &
              (int)&stack0x00000000 >> (param_3 & 0xff) & unaff_r7 >> (param_3 & 0xff);
    in_NG = (int)param_4 < 0;
    bVar2 = param_4 == 0;
  }
  bVar1 = false;
  if (bVar2) {
    unaff_r5 = param_4 & (int)unaff_r5 >> (param_3 & 0xff);
    in_NG = (int)unaff_r5 < 0;
    bVar1 = unaff_r5 == 0;
  }
  bVar2 = false;
  if (bVar1) {
    unaff_r5 = param_4 & param_4 >> (param_3 & 0xff);
    in_NG = (int)unaff_r5 < 0;
    bVar2 = unaff_r5 == 0;
  }
  bVar1 = false;
  if (bVar2) {
    param_3 = param_3 & param_4 << (unaff_r5 & 0xff);
    in_NG = (int)param_3 < 0;
    bVar1 = param_3 == 0;
  }
  if (!bVar1 && in_NG == in_OV) {
    coprocessor_moveto2(0,0,param_1,param_1,in_cr0);
    coprocessor_moveto2(0,0,param_1,param_1,in_cr0);
    param_1 = func_0x09f694b8();
  }
  if (in_NG != in_OV) {
    *(uint *)param_1 = param_1;
  }
  if ((bool)in_NG) {
    *(uint *)param_1 = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

