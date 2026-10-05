
/* WARNING: Control flow encountered bad instruction data */

void FUN_08340904(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr11,unaff_r9 + 0x394);
  }
  if (in_CY) {
    coprocessor_function(7,1,2,in_cr3,in_cr15,in_cr15);
    uRam00002c8b = 0x2c8f;
    uRam00002c73 = param_1;
    uRam00002c77 = param_3;
    uRam00002c7b = param_4;
    uRam00002c7f = unaff_r6;
    uRam00002c83 = unaff_r10;
    uRam00002c87 = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

