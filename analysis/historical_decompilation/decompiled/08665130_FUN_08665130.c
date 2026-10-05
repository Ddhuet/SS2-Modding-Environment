
/* WARNING: Control flow encountered bad instruction data */

void FUN_08665130(undefined4 *param_1,uint param_2,uint param_3)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar1;
  
  if (in_NG == in_OV) {
    unaff_r11 = (int)*(char *)(unaff_r4 + -0x50);
  }
  bVar1 = false;
  if (in_ZR) {
    in_CY = CARRY4(param_3,param_2);
    in_OV = SCARRY4(param_3,param_2);
    in_NG = (int)(param_3 + param_2) < 0;
    bVar1 = param_3 + param_2 == 0;
  }
  if (bVar1) {
    in_CY = 0xdffffff8 < param_3;
    in_OV = SCARRY4(param_3,0x20000007);
    in_NG = (int)(param_3 + 0x20000007) < 0;
  }
  if (!bVar1 || param_3 != 0xdffffff9) {
    if (in_NG == in_OV) {
      func_0x096e7e54();
    }
    if ((bool)in_CY) {
      software_interrupt(0x137100);
    }
    else {
      software_interrupt(0x101f13);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = unaff_lr;
  param_1[-1] = in_r12;
  param_1[-2] = unaff_r11;
  param_1[-3] = unaff_r10;
  param_1[-4] = unaff_r9;
  param_1[-5] = unaff_r8;
  param_1[-6] = unaff_r6;
  param_1[-7] = unaff_r5;
  param_1[-8] = param_2;
  param_1[-9] = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

