
/* WARNING: Control flow encountered bad instruction data */

void FUN_0883d844(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *unaff_r4;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  char *unaff_r8;
  char *pcVar4;
  undefined4 unaff_r9;
  undefined1 *unaff_r10;
  undefined4 unaff_r11;
  undefined1 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr14;
  
  pcVar4 = unaff_r8;
  if (in_NG) {
    pcVar4 = unaff_r8 + -0x582;
    *unaff_r8 = (char)unaff_r11;
  }
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  if (in_CY && !in_ZR) {
    *(undefined4 *)pcVar4 = param_2;
    *(undefined4 *)(pcVar4 + 4) = param_4;
    *(undefined4 *)(pcVar4 + 8) = unaff_r5;
    *(undefined4 *)(pcVar4 + 0xc) = unaff_r7;
    *(undefined4 *)(pcVar4 + 0x10) = unaff_r9;
    *(undefined4 *)(pcVar4 + 0x14) = unaff_r11;
    *(BADSPACEBASE **)(pcVar4 + 0x18) = register0x00000054;
    pcVar4[0x1c] = 'd';
    pcVar4[0x1d] = -0x28;
    pcVar4[0x1e] = -0x7d;
    pcVar4[0x1f] = '\b';
  }
  if (in_CY) {
    param_3 = (char *)((uint)param_3 ^ 0x20000002);
  }
  puVar2 = unaff_r4;
  if (in_NG) {
    puVar2 = unaff_r4 + -0x111;
    *(char *)unaff_r4 = (char)puVar2;
  }
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  if (in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY) {
    param_3 = (char *)((uint)param_3 ^ 0x20000002);
  }
  puVar3 = puVar2;
  if (in_NG) {
    puVar3 = puVar2 + -0x111;
    *(char *)puVar2 = (char)puVar3;
  }
  if (in_CY) {
    *unaff_r10 = unaff_lr;
    unaff_r10[-0xeee] = unaff_lr;
    unaff_r10[-0x1ddc] = unaff_lr;
    cVar1 = (char)unaff_r10 + 'H';
    unaff_r10[-0x2cca] = unaff_lr;
    *pcVar4 = cVar1;
    *param_3 = cVar1;
    *puVar3 = param_3 + -0xaaa;
    *(undefined1 **)((int)puVar3 + 0x222) = (undefined1 *)((int)puVar3 + -0x222);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

