
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0814fa80(void)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  undefined4 *puVar2;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined8 *in_r12;
  undefined4 extraout_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined8 uVar3;
  
  if (in_NG != in_OV) {
    return *in_r12;
  }
  puVar2 = unaff_r7;
  if (in_NG != in_OV) {
    puVar2 = (undefined4 *)((int)unaff_r7 + 0xab7);
    unaff_r11 = *unaff_r7;
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = func_0x07936daa();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xded6c2);
    *(undefined8 *)(iVar1 + 4) = uVar3;
    *(undefined4 *)(iVar1 + 0xc) = extraout_r2;
    *(undefined4 *)(iVar1 + 0x10) = unaff_r6;
    *(undefined4 **)(iVar1 + 0x14) = puVar2;
    *(undefined4 *)(iVar1 + 0x18) = unaff_r9;
    *(undefined4 *)(iVar1 + 0x1c) = unaff_r11;
    *(undefined4 *)(iVar1 + 0x20) = extraout_r12;
    *(BADSPACEBASE **)(iVar1 + 0x24) = register0x00000054;
    *(undefined4 *)(iVar1 + 0x28) = 0x814fa9c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

