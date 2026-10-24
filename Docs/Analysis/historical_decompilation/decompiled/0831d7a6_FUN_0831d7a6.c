
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0831d7a6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r6;
  undefined8 *unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG == in_OV) {
    if (!in_ZR && in_NG == in_OV) {
      *(undefined4 *)unaff_r7 = param_3;
      *(undefined4 *)((int)unaff_r7 + 4) = unaff_r6;
      *(undefined8 **)(unaff_r7 + 1) = unaff_r7;
      *(undefined4 *)((int)unaff_r7 + 0xc) = unaff_r9;
      *(undefined4 *)(unaff_r7 + 2) = unaff_r10;
      *(undefined4 *)((int)unaff_r7 + 0x14) = unaff_lr;
      *(undefined4 *)(unaff_r7 + 3) = 0x831d7ba;
      software_interrupt(0xcdccc9);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_r7;
}

