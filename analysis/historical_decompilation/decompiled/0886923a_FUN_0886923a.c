
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08869262) */

void FUN_0886923a(void)

{
  byte bVar1;
  int in_r3;
  int unaff_r4;
  byte *unaff_r5;
  byte *pbVar2;
  int unaff_r6;
  byte *unaff_r7;
  byte *pbVar3;
  int unaff_r9;
  int unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr15;
  byte in_stack_00000000;
  
  pbVar2 = unaff_r5;
  if (in_OV) {
    pbVar2 = unaff_r5 + -0x555;
    unaff_r11 = *(int *)unaff_r5;
  }
  if (in_CY && !in_ZR) {
    *(int *)(unaff_r11 + unaff_r9 * 0x800) = unaff_r4;
  }
  if (in_NG == in_OV) {
    coprocessor_store(7,in_cr7,in_r3 + 0x224);
  }
  if (in_OV) {
    if (!in_ZR && in_NG == true) {
      coprocessor_movefromRt(0xd,0xe,in_cr15);
      unaff_r4 = coprocessor_movefromRt2(0xd,0xe,in_cr15);
    }
    bVar1 = (byte)pbVar2;
    if (!in_NG) {
      coprocessor_storelong(10,in_cr7,unaff_r11 + 0x270);
      bVar1 = bRam088697b3;
    }
    bRam088697b3 = bVar1;
    if (!in_CY || in_ZR) {
      coprocessor_storelong(6,in_cr5,unaff_r6 + -0x114);
    }
    if (in_NG == true) {
      pbVar2[-0x555] = (byte)pbVar2;
    }
    if (!in_NG) {
      unaff_r7 = (byte *)(uint)in_stack_00000000;
      *(char *)(unaff_r4 + -0x545) = (char)unaff_r4;
    }
    pbVar3 = unaff_r7;
    if (!in_CY) {
      pbVar3 = unaff_r7 + -0x544;
      pbVar2 = (byte *)(uint)*unaff_r7;
    }
    if (in_NG) {
      *(int *)(pbVar3 + 0x453) = unaff_r4;
    }
    if (in_NG) {
      pbVar2[-0x433] = (char)(pbVar2 + -0x433) - 0x35;
    }
    else {
      *(byte *)(uint)*pbVar2 = *pbVar2 - (char)((uint)pbVar3 >> 10);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

