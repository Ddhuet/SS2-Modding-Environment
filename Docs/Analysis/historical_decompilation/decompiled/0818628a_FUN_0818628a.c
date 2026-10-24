
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0818628a(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int unaff_r9;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined8 uVar1;
  
  if (in_OV) {
    param_3 = param_3 - (param_3 >> 0xb);
  }
  if (!in_CY) {
                    /* WARNING: Could not recover jumptable at 0x08186292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = (*(code *)(0x818629a - ((int)&stack0x00000000 >> 0x19)))(param_1,param_2,param_3);
    return uVar1;
  }
  return *(undefined8 *)(unaff_r9 + -0x20);
}

