
/* WARNING: Control flow encountered bad instruction data */

void FUN_0871840a(void)

{
  undefined8 unaff_d11;
  undefined8 in_d23;
  
  VectorShiftLeftInsert(unaff_d11,in_d23,0x37);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

