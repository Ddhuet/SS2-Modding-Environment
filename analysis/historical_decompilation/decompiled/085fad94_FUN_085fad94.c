
/* WARNING: Control flow encountered bad instruction data */

void FUN_085fad94(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined1 unaff_r6;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  
  if (!in_ZR) {
    uVar1 = param_4 >> (param_4 & 0x1f) | param_4 << 0x20 - (param_4 & 0x1f);
    in_OV = SCARRY4(uVar1,0x85fada0) != SCARRY4(uVar1 + 0x85fada0,(uint)in_CY);
    param_1 = uVar1 + 0x85fada0 + (uint)in_CY;
    in_NG = param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (!in_ZR && in_NG == in_OV) {
    *(undefined1 *)(param_1 + -0x33f) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

