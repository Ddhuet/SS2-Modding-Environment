
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825d59e(uint param_1,undefined4 param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint unaff_r6;
  undefined4 *unaff_r8;
  int unaff_r9;
  uint unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar6;
  longlong lVar7;
  
  if (in_ZR || in_NG != in_OV) {
    unaff_r11 = unaff_r6 | 0x5000000;
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if ((bool)in_NG) {
    param_3 = param_3 - 0x5da;
  }
  if (in_ZR) {
    puVar5 = (undefined1 *)(param_1 & unaff_r11 >> (param_1 & 0xff));
    bVar6 = true;
  }
  else {
    puVar5 = (undefined1 *)(param_3 | unaff_r9 << 4);
    bVar6 = puVar5 == (undefined1 *)0x0;
  }
  if (!bVar6) {
    *unaff_r8 = puVar5;
  }
  puVar1 = (undefined1 *)0x3f8;
  puVar2 = (undefined1 *)0x400;
  puVar3 = (undefined1 *)0x408;
  puVar4 = (undefined1 *)0x410;
  lVar7 = 8;
  while( true ) {
    *puVar5 = *puVar1;
    puVar5[1] = *puVar2;
    puVar5[2] = *puVar3;
    puVar5[3] = *puVar4;
    puVar5 = puVar5 + 4;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

