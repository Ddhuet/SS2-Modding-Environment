
/* WARNING: Control flow encountered bad instruction data */

void FUN_0862a758(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 unaff_r6;
  uint unaff_r7;
  uint unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar1;
  bool bVar2;
  undefined4 in_cr2;
  undefined4 in_cr10;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    bVar1 = 0xafffffff < unaff_r7 || CARRY4(unaff_r7 + 0x50000000,(uint)in_CY);
    in_OV = SCARRY4(unaff_r7,0x50000000) != SCARRY4(unaff_r7 + 0x50000000,(uint)in_CY);
    unaff_r10 = unaff_r7 + 0x50000000 + (uint)in_CY;
    in_NG = (int)unaff_r10 < 0;
    in_ZR = unaff_r10 == 0;
  }
  else {
    *param_3 = unaff_r11;
    bVar1 = in_CY;
  }
  if ((bool)in_ZR) {
    coprocessor_load(2,in_cr10,param_1 + -0x2e0);
    uRam0862a76c = unaff_r6;
  }
  bVar2 = (bool)bVar1;
  if ((bool)bVar1 && !(bool)in_ZR) {
    bVar2 = 0x6ffffff4 < unaff_r10 || CARRY4(unaff_r10 + 0x9000000b,(uint)bVar1);
    in_OV = SCARRY4(unaff_r10,-0x6ffffff5) != SCARRY4(unaff_r10 + 0x9000000b,(uint)bVar1);
    in_NG = (int)(unaff_r10 + 0x9000000b + (uint)bVar1) < 0;
  }
  if (!bVar2) {
    in_OV = SCARRY4(in_r12,-0x4ffffff5);
    in_NG = in_r12 + -0x4ffffff5 < 0;
  }
  if (in_NG != in_OV) {
    coprocessor_moveto(0xd,3,0,unaff_r11,in_cr2,in_cr15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

