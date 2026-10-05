
/* WARNING: Control flow encountered bad instruction data */

void FUN_088a57c8(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int extraout_r1;
  int extraout_r1_00;
  int *extraout_r2;
  int *extraout_r2_00;
  int extraout_r3;
  int extraout_r3_00;
  undefined1 *unaff_r4;
  undefined1 *unaff_r5;
  undefined1 *puVar5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  int *unaff_r10;
  int unaff_r11;
  int in_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr4;
  
  if (!(bool)in_NG) {
    bVar1 = Absolute((char)unaff_r5 - (char)param_3);
    bVar2 = Absolute((char)((uint)unaff_r5 >> 8) - (char)((uint)param_3 >> 8));
    bVar3 = Absolute((char)((uint)unaff_r5 >> 0x10) - (char)((uint)param_3 >> 0x10));
    bVar4 = Absolute((char)((uint)unaff_r5 >> 0x18) - (char)((uint)param_3 >> 0x18));
    unaff_r11 = in_r12 + ((uint)bVar4 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar2 << 8 | (uint)bVar1
                         );
  }
  if (in_NG == in_OV) {
    unaff_lr = 0x88a57d0;
    func_0x07bc5c1c();
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(1,in_cr4,unaff_r9);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(1,in_cr1,unaff_r7);
    coprocessor_load(2,in_cr1,param_4);
    unaff_lr = 0x88a57e0;
    func_0x09cee070();
    param_2 = extraout_r1_00;
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    register0x00000054 = *(BADSPACEBASE **)param_2;
    unaff_r5 = *(undefined1 **)(param_2 + -8);
    unaff_r4 = *(undefined1 **)(param_2 + -0xc);
    param_2 = *(int *)(param_2 + -0x10);
  }
  if (in_NG == in_OV) {
    param_3 = (int *)*param_3;
  }
  if ((bool)in_NG) {
    *unaff_r4 = (char)unaff_r5;
    puVar5 = unaff_r5;
  }
  else {
    puVar5 = unaff_r5 + -0x557;
    *unaff_r5 = (char)puVar5;
    *(char *)(unaff_r8 + -0xace) = (char)unaff_r10;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r10 = param_2;
    unaff_r10[1] = (int)param_3;
    unaff_r10[2] = param_4;
    unaff_r10[3] = (int)puVar5;
    unaff_r10[4] = unaff_r6;
    unaff_r10[5] = unaff_r7;
    unaff_r10[6] = (int)unaff_r10;
    unaff_r10[7] = unaff_r11;
    unaff_r10[8] = (int)register0x00000054;
    unaff_r10[9] = 0x88a57fc;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY && !(bool)in_ZR) {
      *unaff_r10 = param_2;
      unaff_r10[1] = (int)param_3;
      unaff_r10[2] = param_4;
      unaff_r10[3] = (int)puVar5;
      unaff_r10[4] = unaff_r6;
      unaff_r10[5] = unaff_r7;
      unaff_r10[6] = (int)unaff_r10;
      unaff_r10[7] = unaff_r11;
      unaff_r10[8] = unaff_lr;
      unaff_r10[9] = 0x88a580c;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r10 = (int)param_3;
  unaff_r10[1] = param_4;
  unaff_r10[2] = unaff_r6;
  unaff_r10[3] = unaff_r7;
  unaff_r10[4] = (int)unaff_r10;
  unaff_r10[5] = unaff_r11;
  unaff_r10[6] = unaff_lr;
  unaff_r10[7] = 0x88a5804;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

