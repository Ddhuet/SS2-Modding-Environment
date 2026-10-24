
undefined8 FUN_0816f7be(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint unaff_r5;
  int iVar1;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar2;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  bVar2 = in_CY;
  if (!in_ZR && in_NG == in_OV) {
    bVar2 = 0xcdbfffff < unaff_r5 || CARRY4(unaff_r5 + 0x32400000,(uint)in_CY);
    in_OV = SCARRY4(unaff_r5,0x32400000) != SCARRY4(unaff_r5 + 0x32400000,(uint)in_CY);
    iVar1 = unaff_r5 + 0x32400000 + (uint)in_CY;
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if ((bool)bVar2 && !in_ZR) {
    coprocessor_function(5,10,6,in_cr12,in_cr11,in_cr10);
  }
  if (in_ZR || in_NG != in_OV) {
    param_3 = param_3 + unaff_r5 * 0x80;
  }
  return *(undefined8 *)(param_3 + 4);
}

