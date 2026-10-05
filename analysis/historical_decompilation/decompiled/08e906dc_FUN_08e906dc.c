
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08e906e0) */

void FUN_08e906dc(uint param_1,uint param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  undefined4 unaff_r4;
  undefined1 unaff_r5;
  int unaff_r6;
  int unaff_r8;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_ZR) {
    param_1 = param_1 & param_2 << (param_2 & 0xff);
    if (!in_OV) {
      *(undefined1 *)(param_4 + param_1 * -4) = unaff_r5;
    }
    pbVar1 = param_3;
    if (!in_NG) {
      pbVar1 = param_3 + -0x100;
      param_4 = (uint)*param_3;
    }
    if (!in_OV) {
      unaff_r4 = *(undefined4 *)(unaff_r6 + -0x100);
    }
    if (!in_CY) {
      *(undefined4 *)(unaff_r8 + param_1 * -4) = unaff_r4;
      func_0x092d0764(param_1,param_2,pbVar1,param_4);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

