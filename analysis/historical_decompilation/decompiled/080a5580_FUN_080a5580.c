
/* WARNING: Control flow encountered bad instruction data */

void FUN_080a5580(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_r3;
  undefined4 unaff_r6;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int extraout_r12;
  bool in_CY;
  undefined1 in_OV;
  bool bVar3;
  undefined8 uVar4;
  
  bVar3 = false;
  if (in_CY) {
    bVar3 = (uint)(param_1 * 0x400) < 0x80a5588 || param_1 * -0x400 == -0x80a5588;
    in_OV = SBORROW4(0x80a5588,param_1 * 0x400);
    unaff_r11 = param_1 * -0x400 + 0x80a5588;
  }
  uVar4 = func_0x0656345c();
  puVar2 = (undefined4 *)uVar4;
  if ((bool)in_OV) {
    *puVar2 = 0x80a5588;
    puVar2[-1] = unaff_r11;
    puVar2[-2] = extraout_r3;
    *(undefined8 *)(puVar2 + -4) = uVar4;
  }
  if (bVar3) {
    uVar1 = SignedSaturate(extraout_r12 + (int)puVar2,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *puVar2 = 0x80a5588;
    puVar2[-1] = extraout_r12;
    puVar2[-2] = unaff_r11;
    puVar2[-3] = unaff_r10;
    puVar2[-4] = unaff_r9;
    puVar2[-5] = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

