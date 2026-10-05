
/* WARNING: Control flow encountered bad instruction data */

void FUN_0866c0c2(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int unaff_r10;
  undefined4 *puVar1;
  int in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr11,in_r12 + 0x130);
  }
  if (in_ZR) {
    unaff_r10 = (param_3 >> 0x15 | param_3 << 0xb) - (param_4 + (uint)!in_CY);
  }
  puVar1 = (undefined4 *)(unaff_r10 + 0x4aa);
  *puVar1 = unaff_lr;
  if (in_CY) {
    *(undefined4 *)((int)puVar1 + ((uint)puVar1 >> 0xd)) = unaff_lr;
  }
  if (in_NG == in_OV) {
    func_0x09096d5a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

