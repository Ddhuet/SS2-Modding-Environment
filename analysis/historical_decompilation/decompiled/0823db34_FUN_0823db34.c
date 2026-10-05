
/* WARNING: Control flow encountered bad instruction data */

void FUN_0823db34(void)

{
  undefined1 *puVar1;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 uVar2;
  undefined4 *in_r12;
  undefined4 extraout_r12;
  undefined1 in_NG;
  bool in_ZR;
  undefined4 in_cr2;
  undefined4 in_cr12;
  undefined8 extraout_d7;
  undefined8 in_d24;
  undefined8 uVar3;
  
  if (!in_ZR) {
    return;
  }
  uVar2 = *in_r12;
  uVar3 = func_0x08048c64();
  puVar1 = (undefined1 *)uVar3;
  if ((bool)in_NG) {
    coprocessor_function(4,0,2,in_cr2,in_cr12,in_cr12);
  }
  if (!in_ZR) {
    puVar1 = puVar1 + 0x933;
    *puVar1 = 0x40;
  }
  *unaff_r6 = puVar1;
  unaff_r6[1] = (int)((ulonglong)uVar3 >> 0x20);
  unaff_r6[2] = unaff_r5;
  unaff_r6[3] = unaff_r6;
  unaff_r6[4] = unaff_r7;
  unaff_r6[5] = unaff_r8;
  unaff_r6[6] = unaff_r10;
  unaff_r6[7] = uVar2;
  unaff_r6[8] = extraout_r12;
  unaff_r6[9] = 0x823db50;
  uVar2 = VectorGetElement(extraout_d7,0,4,0);
  VectorMultiply(in_d24,uVar2,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

