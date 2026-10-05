
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a5ed4e(int param_1)

{
  int iVar1;
  undefined4 unaff_r7;
  uint unaff_r11;
  int iVar2;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar3;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_function(5,0xf,3,in_cr11,in_cr0,in_cr6);
  }
  iVar1 = param_1;
  if (in_NG != in_OV) {
    iVar1 = param_1 + 0x58;
    coprocessor_loadlong(7,in_cr6,param_1);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_store(7,in_cr7,0x8a5ecf2);
    bVar3 = in_CY;
  }
  else {
    bVar3 = 0xfffd0fff < unaff_r11 || CARRY4(unaff_r11 + 0x2f000,(uint)in_CY);
    in_OV = SCARRY4(unaff_r11,0x2f000) != SCARRY4(unaff_r11 + 0x2f000,(uint)in_CY);
    iVar2 = unaff_r11 + 0x2f000 + (uint)in_CY;
    in_NG = iVar2 < 0;
    in_ZR = iVar2 == 0;
  }
  if (!(bool)bVar3) {
    func_0x0794e0da(iVar1);
  }
  if (in_NG != in_OV) {
    coprocessor_movefromRt(0xe,6,in_cr6);
    coprocessor_movefromRt2(0xe,6,in_cr6);
  }
  if (!(bool)in_NG) {
    func_0x07d8dade();
  }
  if (in_NG != in_OV) {
    func_0x07951c42();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x079564ae();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(2,in_cr14,unaff_r7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

