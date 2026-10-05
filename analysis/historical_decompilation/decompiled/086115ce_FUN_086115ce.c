
/* WARNING: Control flow encountered bad instruction data */

void FUN_086115ce(short *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  short *psVar2;
  uint unaff_r4;
  uint unaff_r5;
  undefined1 in_NG;
  bool in_ZR;
  undefined1 in_CY;
  
  if (!in_ZR) {
    psVar2 = (short *)((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f)
                      );
    in_CY = param_1 <= psVar2;
    in_NG = (int)psVar2 - (int)param_1 < 0;
    in_ZR = psVar2 == param_1;
  }
  if (in_ZR) {
    param_1 = param_1 + 0x48;
    param_3 = (uint)*param_1;
  }
  if ((bool)in_NG) {
    uVar1 = param_4 >> ((uint)param_1 & 0xff);
    in_CY = uVar1 <= unaff_r4;
    in_ZR = unaff_r4 == uVar1;
  }
  if (!(bool)in_CY) {
    param_3 = param_2 & 0x40;
  }
  if (in_ZR) {
    func_0x08e1ebae(param_1,param_2,param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

