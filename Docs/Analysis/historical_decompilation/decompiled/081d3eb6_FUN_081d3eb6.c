
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d3eb6(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int unaff_r5;
  int unaff_r8;
  uint unaff_r10;
  undefined4 *unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar2;
  undefined4 in_s9;
  undefined8 in_d6;
  undefined8 in_d20;
  
  if (!in_CY || in_ZR) {
    in_CY = false;
    in_NG = (int)((uint)&stack0x00000000 | 0x31800000) < 0;
    in_ZR = ((uint)&stack0x00000000 | 0x31800000) == 0;
  }
  bVar2 = in_CY;
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xc8a992);
    bVar2 = 0x35800 < unaff_r10 || unaff_r10 - 0x35800 < (uint)in_CY;
    in_NG = (int)(unaff_r10 - (!in_CY + 0x35800)) < 0;
    in_ZR = unaff_r10 == !in_CY + 0x35800;
  }
  uVar1 = VectorGetElement(in_d6,0,4,0);
  VectorMultiplySubtract(in_d20,uVar1,4,1);
  if ((bool)in_NG) {
    *(char *)(unaff_r8 + -0x25c) = (char)unaff_r5;
  }
  else {
    *unaff_lr = param_2;
  }
  if (!in_ZR) {
    software_interrupt(0x162e47);
  }
  if (bVar2) {
    *(undefined4 *)(unaff_r5 + -0xd4) = in_s9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

