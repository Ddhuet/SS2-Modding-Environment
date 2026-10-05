
/* WARNING: Control flow encountered bad instruction data */

void FUN_089f0d58(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint unaff_r5;
  undefined1 *unaff_r6;
  undefined1 *puVar2;
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  puVar2 = unaff_r6;
  if (in_NG == in_OV) {
    puVar2 = unaff_r6 + -(param_3 >> 0x15);
    *unaff_r6 = (char)puVar2;
  }
  bVar3 = false;
  bVar5 = in_CY;
  if (in_ZR) {
    uVar1 = unaff_r5 >> ((uint)puVar2 & 0x1f) | unaff_r5 << 0x20 - ((uint)puVar2 & 0x1f);
    bVar5 = 0x89f0d70 < uVar1 || uVar1 + 0xf760f290 < (uint)in_CY;
    bVar3 = uVar1 == !in_CY + 0x89f0d70;
  }
  bVar4 = false;
  if (bVar3) {
    bVar4 = ((uint)puVar2 >> ((uint)puVar2 & 0x1f) | (int)puVar2 << 0x20 - ((uint)puVar2 & 0x1f)) ==
            unaff_r10 + (uint)!bVar5;
  }
  if (bVar4) {
    software_interrupt(0xa67676);
    software_interrupt(0xa67676);
    software_interrupt(0x677767);
  }
  func_0x0a3ceadc();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

