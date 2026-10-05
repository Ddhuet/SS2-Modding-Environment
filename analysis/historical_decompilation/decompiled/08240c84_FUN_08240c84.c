
/* WARNING: Control flow encountered bad instruction data */

void FUN_08240c84(undefined4 param_1,int param_2)

{
  bool in_CY;
  
  if (in_CY) {
    param_2 = param_2 + 0x5ff;
  }
  func_0x09785882(param_1,param_2);
  if (in_CY) {
    software_interrupt(0x25fc17);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

