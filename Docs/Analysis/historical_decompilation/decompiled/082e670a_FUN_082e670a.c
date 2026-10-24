
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x082e6722) */

void FUN_082e670a(uint param_1,int param_2,int param_3,byte *param_4)

{
  longlong lVar1;
  uint unaff_r4;
  int unaff_r5;
  undefined4 unaff_r10;
  int in_r12;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    param_2 = param_2 + (param_3 >> 0xb);
  }
  if (in_NG) {
    lVar1 = CONCAT44(param_2,unaff_r5) + (longlong)(short)unaff_r10 * (longlong)(short)unaff_r4 +
            (longlong)(short)(unaff_r4 >> 0x10) * (longlong)(short)((uint)unaff_r10 >> 0x10);
    unaff_r5 = (int)lVar1;
    param_2 = (int)((ulonglong)lVar1 >> 0x20);
  }
  if (in_ZR) {
    param_4 = (byte *)(uint)*param_4;
  }
  if (in_NG != (bool)in_OV) {
    param_1 = (uint)*(byte *)(in_r12 + 0x9fb);
  }
  func_0x0861fa0c(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x082e671e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(unaff_r4 & unaff_r5 << 0x1c))();
  return;
}

