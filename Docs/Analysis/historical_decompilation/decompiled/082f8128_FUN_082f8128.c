
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f8128(undefined4 param_1,uint param_2,uint param_3)

{
  uint unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *puVar1;
  undefined4 unaff_r9;
  int unaff_r10;
  int in_r12;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined1 uVar2;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r9);
  }
  if (in_ZR || in_NG != in_OV) {
    in_r12 = unaff_r10 - (!in_CY + 0xf000000b);
  }
  uVar2 = (byte)unaff_r8 & 1;
  puVar1 = unaff_r8;
  if ((undefined1 *)(unaff_r7 & ~((int)unaff_r8 >> 1)) != (undefined1 *)0x0) {
    puVar1 = (undefined4 *)((int)unaff_r8 + -0xcef);
    *unaff_r8 = unaff_pc;
  }
  if ((bool)uVar2) {
    func_0x08bff9c0(param_1,param_2,param_3 ^ in_r12 << (param_2 & 0xff));
  }
  if ((bool)uVar2) {
    coprocessor_load(0xd,in_cr3,puVar1);
  }
  else {
    coprocessor_movefromRt(6,1,1,in_cr10,in_cr1);
  }
  func_0x082ba9c4();
  coprocessor_loadlong2(8,in_cr15,unaff_r10 + 0x3e0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

