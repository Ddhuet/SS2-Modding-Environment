
/* WARNING: Control flow encountered bad instruction data */

void FUN_08633970(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 unaff_r4;
  int unaff_r5;
  uint uVar2;
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  bool bVar3;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  uVar2 = unaff_r5 + 4;
  coprocessor_load(5,in_cr11,unaff_r5);
  *(undefined4 *)(param_3 + 0x790) = unaff_r4;
  if (in_ZR) {
    param_2 = param_2 & 0xff;
    in_CY = param_2 == 0 && (bool)in_CY ||
            param_2 != 0 && (bool)((byte)(param_1 >> param_2 - 1) & 1);
    uVar2 = (uint)&stack0x00000000 & ~(param_1 >> param_2);
    in_NG = (int)uVar2 < 0;
  }
  if (in_NG != in_OV) {
    in_CY = 0;
    in_NG = unaff_r9 < 0;
  }
  bVar3 = false;
  if ((bool)in_NG) {
    iVar1 = uVar2 * 2;
    in_OV = SCARRY4(param_3,iVar1) != SCARRY4(param_3 + iVar1,(uint)in_CY);
    bVar3 = (int)(param_3 + iVar1 + (uint)in_CY) < 0;
  }
  if (bVar3 == (bool)in_OV) {
    coprocessor_loadlong(0xb,in_cr10,param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

