
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0857e464(void)

{
  undefined4 *unaff_r4;
  undefined4 *unaff_r8;
  undefined4 unaff_r10;
  char in_NG;
  char in_OV;
  undefined4 in_cr10;
  
  if (in_NG == in_OV) {
    if (in_NG == in_OV) {
      coprocessor_store(0xd,in_cr10,&stack0x000002b4);
      coprocessor_store(0xd,in_cr10,&stack0x00000568);
      *unaff_r4 = unaff_r10;
      unaff_r4[0x129] = unaff_r10;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_r8;
}

