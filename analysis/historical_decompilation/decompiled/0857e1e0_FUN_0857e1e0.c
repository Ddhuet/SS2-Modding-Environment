
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0857e1e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int *unaff_r4;
  undefined8 *unaff_r8;
  uint unaff_r9;
  int unaff_r10;
  uint unaff_lr;
  char in_NG;
  byte in_CY;
  char in_OV;
  byte bVar3;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    return CONCAT44(param_2,param_1);
  }
  if (in_NG != in_OV) {
    return *unaff_r8;
  }
  uVar2 = param_1 + 0x2d4;
  coprocessor_load(0,in_cr11,uVar2);
  bVar3 = in_CY;
  if (in_NG != in_OV) {
    uVar1 = unaff_lr >> 0x1d;
    bVar3 = CARRY4(uVar2,uVar1) || CARRY4(uVar2 + uVar1,(uint)in_CY);
    in_OV = SCARRY4(uVar2,uVar1) != SCARRY4(uVar2 + uVar1,(uint)in_CY);
    unaff_r10 = uVar2 + uVar1 + (uint)in_CY;
    in_NG = unaff_r10 < 0;
  }
  if (in_NG != in_OV) {
    uVar1 = unaff_r9 >> 0x13;
    in_OV = SCARRY4(uVar2,uVar1) != SCARRY4(uVar2 + uVar1,(uint)bVar3);
    unaff_r10 = uVar2 + uVar1 + (uint)bVar3;
    in_NG = unaff_r10 < 0;
  }
  if (in_NG == in_OV) {
    *unaff_r4 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

