
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_081c342a(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return uRam081c343a;
}

