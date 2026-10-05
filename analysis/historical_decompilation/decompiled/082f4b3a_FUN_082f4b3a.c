
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x082f4b7a) */
/* WARNING: Removing unreachable block (ram,0x082f4b86) */
/* WARNING: Removing unreachable block (ram,0x082f4b8a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_082f4b3a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  byte *unaff_r5;
  byte *pbVar3;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  uint uVar4;
  undefined1 *unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  uint extraout_r12;
  int iVar5;
  undefined4 *puVar6;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  undefined1 uVar7;
  char in_OV;
  undefined1 uVar8;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined8 uVar9;
  ulonglong uVar10;
  
  if (in_ZR) {
    *(int *)(param_4 + -0x53d) = unaff_r11;
    *(undefined4 *)(unaff_r7 + 4) = param_2;
    *(undefined4 *)(unaff_r7 + 8) = param_3;
    *(int *)(unaff_r7 + 0xc) = param_4;
    *(uint *)(unaff_r7 + 0x10) = unaff_r8;
    *(undefined4 *)(unaff_r7 + 0x14) = unaff_r9;
    *(undefined1 **)(unaff_r7 + 0x18) = unaff_r10;
    *(int *)(unaff_r7 + 0x1c) = unaff_r11;
    *(undefined4 *)(unaff_r7 + 0x20) = in_r12;
    unaff_r7 = unaff_r7 + 0x20;
  }
  if (!(bool)in_OV) {
    unaff_r10 = (undefined1 *)((uint)unaff_r5 & 0xd2d7df42);
  }
  iVar5 = 0x82f4b4a;
  uVar9 = func_0x08927f06();
  if ((bool)in_OV) {
    iVar5 = (extraout_r12 >> 0x18) + 0x82f4b52 + (uint)in_CY;
  }
  if ((bool)in_NG) {
    software_interrupt(0x2f8023);
  }
  if (in_ZR) {
    *(undefined4 *)(unaff_r11 + -4) = 0x82f4b5a;
    *(int *)(unaff_r11 + -8) = iVar5;
    *(BADSPACEBASE **)(unaff_r11 + -0xc) = register0x00000054;
    *(uint *)(unaff_r11 + -0x10) = extraout_r12;
    *(int *)(unaff_r11 + -0x14) = unaff_r11;
    *(undefined1 **)(unaff_r11 + -0x18) = unaff_r10;
    *(int *)(unaff_r11 + -0x1c) = unaff_r7;
    *(byte **)(unaff_r11 + -0x20) = unaff_r5;
    *(undefined4 *)(unaff_r11 + -0x24) = unaff_r4;
    *(undefined4 *)(unaff_r11 + -0x28) = extraout_r3;
    *(undefined8 *)(unaff_r11 + -0x30) = uVar9;
  }
  pbVar3 = unaff_r5;
  if (!(bool)in_OV) {
    pbVar3 = unaff_r5 + (unaff_r8 >> 0x1e);
    unaff_r10 = (undefined1 *)(uint)*unaff_r5;
  }
  puVar6 = (undefined4 *)0x82f4b5e;
  uVar10 = func_0x09e21244();
  iVar5 = (int)uVar10;
  if ((bool)in_CY) {
    uVar10 = (ulonglong)CONCAT14(*unaff_r10,uRam082f4b32);
  }
  else {
    uRam082f4b5e = 0x82f4b6a;
    uRam082f4b36 = (int)(uVar10 >> 0x20);
    _FUN_082f4b3a = extraout_r2;
    uRam082f4b3e = unaff_r4;
    pbRam082f4b42 = pbVar3;
    iRam082f4b46 = unaff_r6;
    iRam082f4b4a = unaff_r7;
    uRam082f4b4e = unaff_r8;
    uRam082f4b52 = unaff_r9;
    puRam082f4b56 = unaff_r10;
    puRam082f4b5a = (undefined1 *)register0x00000054;
  }
  uVar1 = (uint)(uVar10 >> 0x20);
  uRam082f4b32 = (undefined4)uVar10;
  if (in_NG != in_OV) {
    coprocessor_function(6,5,4,in_cr1,in_cr11,in_cr0);
  }
  if ((bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR && in_NG == in_OV) {
    puVar6 = (undefined4 *)coprocessor_movefromRt(1,3,5,in_cr8,in_cr9);
  }
  if (in_NG != in_OV) {
    uVar4 = uVar1 & 0xff;
    uVar7 = (uVar10 & 0xff00000000) != 0 && (bool)((byte)((uint)pbVar3 >> 0x20 - uVar4) & 1);
    uVar4 = (uint)pbVar3 & (int)pbVar3 << uVar4;
    uVar8 = uVar4 == 0;
    if (!(bool)uVar8) {
      uRam086ce6fe = uVar1;
    }
    uVar2 = extraout_r2;
    if ((bool)uVar7 && !(bool)uVar8) {
      iVar5 = func_0x08c0e436();
      uVar2 = extraout_r2_00;
    }
    if ((bool)uVar7 && !(bool)uVar8) {
      pbVar3[-0xffffffff00000004] = 10;
      pbVar3[-0xffffffff00000003] = 0xe2;
      pbVar3[-0xffffffff00000002] = 0x6c;
      pbVar3[-0xffffffff00000001] = 8;
      *(int *)(pbVar3 + -8) = unaff_r11;
      *(uint *)(pbVar3 + -0xc) = uVar4;
      *(undefined4 *)(pbVar3 + -0x10) = uVar2;
      *(int *)(pbVar3 + -0x14) = iVar5;
    }
    if ((bool)uVar8) {
      *(uint *)(iVar5 + -0x805) = unaff_r8;
      *(int *)(unaff_r6 + 0x587) = iVar5;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x082f4b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_ZR) {
    *(char *)(unaff_r7 + 0x500) = (char)unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)*puVar6)();
  return;
}

