
/* WARNING: Control flow encountered bad instruction data */

void FUN_0814e212(undefined4 param_1,uint param_2)

{
  int unaff_r7;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar1;
  undefined4 in_cr3;
  undefined4 in_cr12;
  
  bVar1 = false;
  if (in_CY) {
    bVar1 = 0xf93fffff < param_2 || 0xfffffffe < param_2 + 0x6c00000;
    in_OV = SCARRY4(param_2,0x6c00000) != SCARRY4(param_2 + 0x6c00000,1);
    in_NG = (int)(param_2 + 0x6c00001) < 0;
    in_ZR = param_2 == 0xf93fffff;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_store(1,in_cr3,param_2);
  }
  if (bVar1) {
    coprocessor_store(0,in_cr12,unaff_r7 + 0x10);
  }
  if (!bVar1 || (bool)in_ZR) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

