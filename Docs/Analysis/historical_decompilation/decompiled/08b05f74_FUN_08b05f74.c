
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x079f2654) */
/* WARNING: Removing unreachable block (ram,0x079f2684) */
/* WARNING: Removing unreachable block (ram,0x079f2648) */
/* WARNING: Removing unreachable block (ram,0x08b05f8c) */

undefined4 FUN_08b05f74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    if (in_NG != in_OV) {
      param_1 = func_0x09057934();
      param_4 = extraout_r3;
      in_r12 = extraout_r12;
    }
    if (in_NG == in_OV) {
      if ((bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined4 *)(unaff_r9 + 4) = param_4;
      *(undefined4 *)(unaff_r9 + 8) = unaff_r7;
      *(undefined4 *)(unaff_r9 + 0xc) = unaff_r8;
      *(undefined4 *)(unaff_r9 + 0x10) = in_r12;
      *(undefined4 *)(unaff_r9 + 0x14) = 0x8b05f8c;
      return param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

