
/* WARNING: Control flow encountered bad instruction data */

void FUN_0883ae64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,char *param_11)

{
  char cVar1;
  char *pcVar2;
  undefined4 *unaff_r4;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_r7;
  char *unaff_r8;
  char *pcVar5;
  undefined4 *unaff_r10;
  undefined4 *unaff_r11;
  int in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr14;
  undefined4 unaff_s27;
  undefined4 unaff_s28;
  undefined4 unaff_s29;
  undefined4 unaff_s30;
  undefined4 unaff_s31;
  
  pcVar5 = unaff_r8;
  if (in_NG) {
    pcVar5 = unaff_r8 + -0x582;
    *unaff_r8 = (char)unaff_r11;
    *unaff_r11 = unaff_s29;
    unaff_r11[1] = unaff_s30;
    unaff_r11[2] = unaff_s31;
    unaff_r11[3] = param_1;
    unaff_r11[4] = param_2;
    unaff_r11[5] = param_3;
    unaff_r11[6] = param_4;
    unaff_r11[7] = param_5;
    unaff_r11[8] = param_6;
    unaff_r11[9] = param_7;
    unaff_r11[10] = param_8;
    *unaff_r10 = unaff_s27;
    unaff_r10[1] = unaff_s28;
    unaff_r10[2] = unaff_s29;
    unaff_r10[3] = unaff_s30;
    unaff_r10[4] = unaff_s31;
    unaff_r10[5] = param_1;
    unaff_r10[6] = param_2;
    unaff_r10[7] = param_3;
    unaff_r10[8] = param_4;
    unaff_r10[9] = param_5;
    unaff_r10[10] = param_6;
  }
  if (in_CY) {
    coprocessor_load(0xd,in_cr14,in_r12);
    coprocessor_storelong(2,in_cr14,in_r12 + 0x33c);
    param_11 = (char *)((uint)param_11 ^ 0x8d000000);
  }
  if (in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY) {
    param_11 = (char *)((uint)param_11 ^ 0x20000002);
  }
  puVar3 = unaff_r4;
  if (in_NG) {
    puVar3 = unaff_r4 + -0x111;
    *(char *)unaff_r4 = (char)puVar3;
    unaff_r10 = (undefined4 *)((uint)unaff_r10 ^ 0xc4000);
  }
  if (in_NG != (bool)in_OV) {
    *(char *)(unaff_r7 + -0x8a2) = (char)unaff_r7;
  }
  if (in_CY) {
    puVar3 = (undefined4 *)((uint)puVar3 ^ 0xb20000);
  }
  pcVar2 = param_11;
  if (in_CY && !in_ZR) {
    pcVar2 = param_11 + -0x222;
    *param_11 = (char)pcVar2;
  }
  if (in_NG != (bool)in_OV) {
    if (in_CY) {
      pcVar2 = (char *)((uint)pcVar2 ^ 0x20000002);
    }
    puVar4 = puVar3;
    if (in_NG) {
      puVar4 = puVar3 + -0x111;
      *(char *)puVar3 = (char)puVar4;
    }
    cVar1 = (char)pcVar5;
    if (in_CY) {
      *(char *)unaff_r10 = (char)puVar4;
      *(char *)(unaff_r10 + -0x122) = cVar1;
      *(char *)(unaff_r10 + -0x244) = (char)puVar4;
      *(char *)(unaff_r10 + -0x366) = cVar1;
      *pcVar5 = cVar1 + 'x';
      *pcVar2 = (char)unaff_r10 + -0x20;
      *puVar4 = pcVar2 + -0xaaa;
      *(undefined1 **)((int)puVar4 + 0x222) = (undefined1 *)((int)puVar4 + -0x222);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

