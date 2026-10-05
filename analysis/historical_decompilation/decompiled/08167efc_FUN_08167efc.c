
/* WARNING: Control flow encountered bad instruction data */

void FUN_08167efc(void)

{
  uint in_r12;
  byte in_CY;
  undefined8 extraout_d5;
  undefined8 unaff_d13;
  
  if (in_r12 < 0x34000001 && (uint)in_CY <= in_r12 + 0xcc000000) {
    func_0x08f25a60();
  }
  func_0x089b2b9e();
  VectorTest(extraout_d5,unaff_d13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

