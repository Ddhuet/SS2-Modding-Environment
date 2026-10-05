
/* WARNING: Control flow encountered bad instruction data */

void FUN_0869c398(void)

{
  bool in_OV;
  
  if (!in_OV) {
    software_smc(1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

