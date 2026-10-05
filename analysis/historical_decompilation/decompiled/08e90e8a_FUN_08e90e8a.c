
/* WARNING: Control flow encountered bad instruction data */

undefined8
FUN_08e90e8a(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined1 *unaff_r8;
  undefined1 *puVar1;
  undefined1 uVar2;
  int unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined1 in_OV;
  bool bVar3;
  
  if (in_CY && !in_ZR) {
    *unaff_r4 = param_4;
    unaff_r4[1] = unaff_r4;
    unaff_r4[2] = unaff_r6;
    unaff_r4[3] = unaff_r8;
    unaff_r4[4] = unaff_r10;
    unaff_r4[5] = in_r12;
    unaff_r4[6] = register0x00000054;
    unaff_r4[7] = 0x8e90e92;
  }
  bVar3 = false;
  puVar1 = unaff_r8;
  if (in_NG) {
    puVar1 = unaff_r8 + -0xb42;
    *unaff_r8 = (char)puVar1;
    in_CY = (undefined4 *)0x2c7ff < unaff_r4;
    in_OV = SBORROW4((int)unaff_r4,0x2c800);
    param_3 = unaff_r4 + -0xb200;
    bVar3 = (int)param_3 < 0;
    in_ZR = param_3 == (undefined4 *)0x0;
  }
  if (bVar3) {
    param_3 = param_3 + -0xb200;
  }
  if (bVar3 == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_OV) {
    unaff_r10 = unaff_r10 + 0x777;
    *(int *)unaff_r10 = unaff_r10;
  }
  uVar2 = (undefined1)unaff_r10;
  if (!in_CY) {
    return *(undefined8 *)(puVar1 + -0x24);
  }
  if (bVar3) {
    uVar2 = (undefined1)unaff_r4[-2];
    unaff_r5 = unaff_r4[-3];
  }
  if (in_ZR) {
    if (bVar3 == (bool)in_OV) {
      *(char *)(unaff_r5 + -0x584) = (char)unaff_r5;
    }
    if (bVar3) {
      param_3[-0x111] = unaff_r5;
    }
    else {
      *(undefined1 *)param_3 = uVar2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

