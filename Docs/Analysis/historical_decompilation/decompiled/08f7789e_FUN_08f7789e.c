
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f7789e(void)

{
  undefined4 *unaff_r7;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r7 = in_r12;
  unaff_r7[1] = unaff_lr;
  return;
}

