
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080ed552(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int *unaff_r9;
  int *piVar2;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar2 = unaff_r9;
  if (in_NG != in_OV) {
    piVar2 = unaff_r9 + 0x1ea;
    *unaff_r9 = unaff_r10;
  }
  if (in_ZR || in_NG != in_OV) {
    in_OV = SBORROW4(unaff_r10,-0x3b000000) != SBORROW4(unaff_r10 + 0x3b000000,(uint)!in_CY);
    iVar1 = -(!in_CY + 0xc5000000);
    register0x00000054 = (BADSPACEBASE *)(unaff_r10 + iVar1);
    in_NG = unaff_r10 + iVar1 < 0;
    in_ZR = unaff_r10 == !in_CY + 0xc5000000;
  }
  if (in_NG == in_OV) {
    FUN_080ed588 = 0x80ed566;
    uRam080ed56a = param_1;
    uRam080ed56e = param_3;
    uRam080ed572 = unaff_r6;
    uRam080ed576 = unaff_r7;
    uRam080ed57a = unaff_r8;
    uRam080ed57e = unaff_r11;
    uRam080ed582 = in_r12;
    FUN_080ed584 = (undefined4 *)register0x00000054;
  }
  else {
    *(undefined4 *)register0x00000054 = param_1;
    *(undefined4 *)((int)register0x00000054 + 4) = param_4;
    *(undefined4 *)((int)register0x00000054 + 8) = unaff_r5;
    *(undefined4 *)((int)register0x00000054 + 0xc) = unaff_r7;
    *(int **)((int)register0x00000054 + 0x10) = piVar2;
    *(undefined4 *)((int)register0x00000054 + 0x14) = unaff_r11;
    *(BADSPACEBASE **)((int)register0x00000054 + 0x18) = register0x00000054;
    *(undefined4 *)((int)register0x00000054 + 0x1c) = 0x80ed56a;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + 0x20);
  }
  if (in_ZR || in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)(uint)*(byte *)((int)piVar2 + 0x4c7);
  }
  if (in_NG == in_OV) {
    software_interrupt(0xb6c0cb);
  }
  else {
    *(int *)((int)register0x00000054 + ((uint)register0x00000054 >> 0x19)) = unaff_r10;
  }
  if (in_ZR || in_NG != in_OV) {
    func_0x077e2c9a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

