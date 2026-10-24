
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c1ee0(void)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_d11;
  undefined8 in_d21;
  
  VectorShiftLeftInsert(unaff_d11,in_d21,0x36);
  if (in_NG == in_OV) {
    func_0x078ba29c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

