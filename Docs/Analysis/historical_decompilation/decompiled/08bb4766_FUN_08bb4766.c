
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bb4766(undefined4 param_1,char param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r10;
  char unaff_r11;
  undefined1 in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 *puVar2;
  
  puVar1 = param_4;
  if (in_NG) {
    puVar1 = param_4 + -0x145;
    unaff_r11 = (char)*param_4;
  }
  puVar2 = puVar1;
  if (!in_CY) {
    puVar2 = puVar1 + -0x149;
    *puVar1 = unaff_r10;
    param_2 = param_2 + -0x55;
  }
  if (!in_NG) {
    *(char *)((int)puVar2 + -0xcc5) = unaff_r11;
    param_2 = unaff_r11;
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    *(undefined1 *)(param_3 + -0xbcc) = in_r12;
    *(char *)(param_3 + -0xccc) = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

