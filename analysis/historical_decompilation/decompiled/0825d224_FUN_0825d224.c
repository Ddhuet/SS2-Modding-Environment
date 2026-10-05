
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825d224(void)

{
  undefined4 uVar1;
  undefined8 unaff_d8;
  undefined8 in_d16;
  
  uVar1 = VectorGetElement(unaff_d8,0,4,0);
  FloatVectorMultiplySubtract(in_d16,uVar1,2,0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

