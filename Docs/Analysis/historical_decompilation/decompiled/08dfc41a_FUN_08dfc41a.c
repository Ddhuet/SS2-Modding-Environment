
/* WARNING: Control flow encountered bad instruction data */

void FUN_08dfc41a(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r8;
  int iVar4;
  uint unaff_r10;
  uint uVar5;
  ushort *in_r12;
  ushort *puVar6;
  ushort *puVar7;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    in_r12 = in_r12 + -0x2ce;
  }
  iVar1 = param_2;
  iVar2 = param_4;
  if (in_CY && !in_ZR) {
    iVar2 = param_4 + 0x230;
    coprocessor_load(0,in_cr0,param_4);
    iVar1 = param_2 + 0x2c8;
    coprocessor_load(0xc,in_cr8,param_2);
  }
  if (in_NG == in_OV) {
    software_interrupt(0x5cb0);
    in_r12 = in_r12 + 0x78;
    coprocessor_load(0xe,in_cr10,in_r12);
  }
  puVar7 = in_r12;
  if (in_ZR) {
    puVar7 = in_r12 + -0x66;
    unaff_r10 = (uint)*in_r12;
  }
  uVar5 = unaff_r10;
  if (!in_NG) {
    uVar5 = unaff_r10 + 0x2ac;
    coprocessor_store(0xc,in_cr11,unaff_r10);
  }
  iVar4 = unaff_r8;
  if (!in_OV) {
    iVar4 = unaff_r8 + 0x2a4;
    coprocessor_store(0xc,in_cr10,unaff_r8);
  }
  if (in_NG == in_OV) {
    puVar6 = puVar7 + param_1 * -0x2000;
    puVar7 = puVar6 + -0x2be;
    uVar5 = (uint)(byte)*puVar6;
  }
  iVar3 = iVar2;
  if (!in_ZR) {
    iVar3 = iVar2 + 0x1f0;
    coprocessor_store(0,in_cr0,iVar2);
  }
  iVar2 = iVar1;
  if (!in_OV) {
    iVar2 = iVar1 + 0x288;
    coprocessor_store(0xc,in_cr3,iVar1);
  }
  if (!in_CY || in_ZR) {
    software_interrupt(0xca0);
    coprocessor_load(0xe,in_cr9,puVar7 + -0x18);
  }
  if (!in_OV) {
    coprocessor_load(0xc,in_cr0,uVar5);
  }
  if (in_ZR) {
    coprocessor_load(0xc,in_cr11,iVar4);
  }
  if (!in_CY || in_ZR) {
    coprocessor_load(0,in_cr0,iVar3);
  }
  else {
    coprocessor_load(0xc,in_cr8,iVar2);
    software_interrupt(0x8c90);
    coprocessor_load(0xe,in_cr8,puVar7 + 0x178);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

