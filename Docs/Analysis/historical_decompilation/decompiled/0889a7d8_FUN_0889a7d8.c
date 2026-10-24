
/* WARNING: Control flow encountered bad instruction data */

void FUN_0889a7d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *unaff_r4;
  undefined1 *unaff_r6;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY && !in_ZR) {
    register0x00000054 = (BADSPACEBASE *)&stack0x00000030;
  }
  if (!in_CY) {
    *(undefined4 *)register0x00000054 = param_3;
    *(undefined1 **)((int)register0x00000054 + 4) = unaff_r6;
    *(undefined4 *)((int)register0x00000054 + 8) = unaff_r10;
    *(undefined4 *)((int)register0x00000054 + 0xc) = in_r12;
    *(BADSPACEBASE **)((int)register0x00000054 + 0x10) = register0x00000054;
    *(undefined4 *)((int)register0x00000054 + 0x14) = 0x889a7ec;
  }
  if (in_ZR || in_NG != in_OV) {
    puVar1 = unaff_r6 + -0x666;
    *unaff_r6 = (char)unaff_r4;
    puVar2 = puVar1 + -((int)puVar1 >> 8);
    *puVar1 = (char)unaff_r4;
    puVar1 = unaff_r4;
  }
  else {
    puVar2 = unaff_r6 + -((uint)unaff_r6 >> 8 | (int)unaff_r6 << 0x18);
    *unaff_r6 = (char)puVar2;
    puVar1 = unaff_r4 + -((uint)puVar2 >> 8);
    *unaff_r4 = (char)puVar2;
  }
  puVar3 = puVar2;
  if (in_NG == in_OV) {
    puVar3 = puVar2 + -0x466;
    *puVar2 = (char)puVar1;
  }
  if (!in_CY || in_ZR) {
    *puVar3 = (char)puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

