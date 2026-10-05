
/* WARNING: Control flow encountered bad instruction data */

undefined8
FUN_081face8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char param_5)

{
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *unaff_r6 = param_2;
    unaff_r6[1] = unaff_r5;
    unaff_r6[2] = unaff_r6;
    unaff_r6[3] = unaff_r7;
    unaff_r6[4] = unaff_r10;
    unaff_r6[5] = (int)param_5;
    unaff_r6[6] = unaff_lr;
    unaff_r6[7] = 0x81fad08;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined8 *)(unaff_r8 + 4);
}

