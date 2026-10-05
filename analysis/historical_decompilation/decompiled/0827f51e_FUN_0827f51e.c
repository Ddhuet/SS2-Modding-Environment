
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827f51e(int param_1,undefined4 param_2)

{
  uint unaff_r4;
  int *unaff_r7;
  int *unaff_r8;
  undefined4 uVar1;
  int in_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar2;
  undefined4 in_cr1;
  undefined4 in_cr10;
  
  bVar2 = in_CY;
  if (in_NG != in_OV) {
    bVar2 = 0xd2bfffff < unaff_r4 || CARRY4(unaff_r4 + 0x2d400000,(uint)in_CY);
    in_ZR = unaff_r4 + 0x2d400000 + (uint)in_CY == 0;
  }
  if ((bool)bVar2 && !(bool)in_ZR) {
    if (!(bool)bVar2 || (bool)in_ZR) {
      *(int *)(unaff_lr + 0x985) = unaff_lr + (int)unaff_r7 * 0x800000;
      return;
    }
    uVar1 = coprocessor_movefromRt(7,4,4,in_cr1,in_cr10);
    *unaff_r7 = (int)unaff_r8;
    *unaff_r8 = (int)(unaff_r8 + param_1 * 0x80);
    *(int *)(in_r12 + 4) = param_1;
    *(undefined4 *)(in_r12 + 8) = param_2;
    *(int *)(in_r12 + 0xc) = (int)unaff_r7 + 0x687;
    *(int **)(in_r12 + 0x10) = unaff_r8 + param_1 * 0x80;
    *(undefined4 *)(in_r12 + 0x14) = uVar1;
    *(undefined4 *)(in_r12 + 0x18) = 0x827f53e;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

