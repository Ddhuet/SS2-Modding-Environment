
/* WARNING: Control flow encountered bad instruction data */

void FUN_082586ce(void)

{
  undefined8 *unaff_r10;
  bool in_OV;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 in_d16;
  undefined8 in_d17;
  
  if (in_OV) {
    software_interrupt(0x4ab5c0);
  }
  *unaff_r10 = unaff_d14;
  unaff_r10[1] = unaff_d15;
  unaff_r10[2] = in_d16;
  unaff_r10[3] = in_d17;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

