
/* WARNING: Control flow encountered bad instruction data */

void FUN_086c6fe8(undefined4 *param_1,char *param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *unaff_r4;
  undefined1 *puVar5;
  int unaff_r8;
  uint unaff_r9;
  undefined4 *unaff_r10;
  undefined1 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  byte in_CY;
  bool in_OV;
  undefined4 in_cr10;
  
  puVar5 = unaff_r4;
  if (in_NG != in_OV) {
    puVar5 = unaff_r4 + -0x544;
    *unaff_r4 = unaff_r11;
  }
  pcVar2 = param_2;
  if (in_NG) {
    param_4 = param_4 + 0x400;
    pcVar2 = param_2 + 0x4b2;
    puVar5 = *(undefined1 **)param_2;
  }
  if (in_NG == in_OV) {
    software_interrupt(0x2400b0);
    coprocessor_storelong(0xe,in_cr10,puVar5 + -0x110);
  }
  puVar1 = param_1;
  if (in_NG) {
    puVar1 = param_1 + -0x311;
    *param_1 = unaff_r10;
    *unaff_r10 = puVar5;
  }
  if (in_ZR) {
    puVar5 = (undefined1 *)(unaff_r8 + (unaff_r9 >> 9) + (uint)in_CY);
  }
  *puVar5 = (char)unaff_lr;
  *(undefined4 *)(puVar5 + -((int)puVar5 >> 0xe)) = unaff_lr;
  puVar4 = param_4;
  if (in_ZR) {
    puVar4 = param_4 + 0x400;
    *param_4 = (char)puVar1;
  }
  pcVar3 = pcVar2;
  if (in_NG) {
    pcVar3 = pcVar2 + 0x4e2;
    *pcVar2 = (char)(puVar5 + -((int)puVar5 >> 0xe)) + -0x44;
  }
  if (!in_OV) {
    func_0x08f453a0(puVar1,pcVar3,param_3,puVar4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

