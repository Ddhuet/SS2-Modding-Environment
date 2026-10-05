
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08282c26(int param_1)

{
  int iVar1;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr10;
  
  if (in_CY && !in_ZR) {
    in_OV = SCARRY4(unaff_lr,param_1 * 0x800);
    iVar1 = unaff_lr + param_1 * 0x800;
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if (in_NG == in_OV) {
    coprocessor_store(0xc,in_cr10,param_1 + 0x2b0);
  }
  if (in_ZR) {
    return CONCAT44(*(undefined4 *)(param_1 + 8),param_1 + 0x1c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

