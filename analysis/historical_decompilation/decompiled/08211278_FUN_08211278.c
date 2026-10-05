
/* WARNING: Control flow encountered bad instruction data */

void FUN_08211278(uint param_1,uint param_2,int param_3,uint param_4)

{
  undefined1 *puVar1;
  uint unaff_r4;
  int unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  uint unaff_lr;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (!(bool)in_CY || in_ZR) {
    in_CY = false;
    unaff_r11 = (uint)&stack0x00000000 | 0x36c00000;
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if (in_NG == in_OV) {
    unaff_r8 = 0x4a211284;
  }
  if (!in_ZR) {
    coprocessor_moveto(1,0,5,unaff_lr,in_cr3,in_cr14);
  }
  if ((bool)in_NG) {
    *(char *)(param_1 - 0xd32) = (char)param_4;
  }
  if ((bool)in_CY) {
    param_4 = unaff_lr ^ unaff_r4 >> (param_2 & 0xff);
  }
  else {
    software_interrupt(0x4b504d);
  }
  if (in_ZR) {
    *(undefined4 *)(param_3 + -0xf0b) = unaff_pc;
  }
  if ((bool)in_CY && !in_ZR) {
    unaff_r10 = unaff_r10 + 0x3d8;
    coprocessor_store(3,in_cr13,unaff_r10);
  }
  if (in_NG != in_OV) {
    in_CY = false;
    unaff_r8 = 0x8211af0;
    in_NG = '\0';
  }
  if (!(bool)in_CY) {
    software_interrupt(0x3c2f1f);
    unaff_r8 = unaff_r8 + -0xe0;
    coprocessor_load(4,in_cr3,unaff_r8);
    puVar1 = &stack0x00000000;
    register0x00000054 = (BADSPACEBASE *)(&stack0x00000000 + -((int)param_1 >> 0x20));
    unaff_r4 = *(uint *)(puVar1 + -((int)param_1 >> 0x20));
  }
  if (in_NG == in_OV) {
    in_CY = (byte)(unaff_r11 >> 0x11) & 1;
    param_1 = unaff_r4 & ~(unaff_r11 >> 0x12);
    in_NG = (int)param_1 < 0;
  }
  if (in_NG == in_OV) {
    in_CY = CARRY4(param_1,unaff_r4 * 0x20);
    unaff_r8 = param_1 + unaff_r4 * 0x20;
  }
  if ((bool)in_CY) {
    *(BADSPACEBASE **)(unaff_r10 + -4) = register0x00000054;
    *(int *)(unaff_r10 + -8) = unaff_r10;
    *(undefined4 *)(unaff_r10 + -0xc) = unaff_r9;
    *(int *)(unaff_r10 + -0x10) = unaff_r8;
    *(uint *)(unaff_r10 + -0x14) = unaff_r4;
    *(uint *)(unaff_r10 + -0x18) = param_4;
    *(int *)(unaff_r10 + -0x1c) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

