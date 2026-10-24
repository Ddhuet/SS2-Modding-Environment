
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f33854(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (!in_CY || in_ZR) {
    puVar1 = unaff_r6;
    if (!in_NG) {
      puVar1 = (undefined4 *)((int)unaff_r6 - ((uint)unaff_r6 >> 0xc | (int)unaff_r6 << 0x14));
      *(char *)unaff_r6 = (char)puVar1;
    }
    puVar2 = puVar1;
    if (in_OV) {
      puVar2 = (undefined4 *)((int)puVar1 - ((uint)puVar1 >> 0xc | (int)puVar1 << 0x14));
      *(char *)puVar1 = (char)puVar2;
    }
    puVar1 = puVar2;
    if (!in_NG) {
      puVar1 = (undefined4 *)((int)puVar2 - ((uint)puVar2 >> 0xc | (int)puVar2 << 0x14));
      *(char *)puVar2 = (char)puVar1;
    }
    if (in_OV) {
      puVar3 = (undefined1 *)((int)puVar1 - ((uint)puVar1 >> 0xc | (int)puVar1 << 0x14));
      *(char *)puVar1 = (char)puVar3;
      puVar4 = puVar3 + -((uint)puVar3 >> 0xc | (int)puVar3 * 0x100000);
      *puVar3 = (char)puVar4;
      *puVar4 = (char)(puVar4 + unaff_r8 * -0x2000);
      puVar4[unaff_r8 * -0x2000] = (char)unaff_r8;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r10 = param_3;
  unaff_r10[1] = unaff_r6;
  unaff_r10[2] = unaff_r8;
  unaff_r10[3] = unaff_r10;
  unaff_r10[4] = in_r12;
  unaff_r10[5] = register0x00000054;
  unaff_r10[6] = 0x8f3385c;
  unaff_r10[7] = param_3;
  unaff_r10[8] = unaff_r6;
  unaff_r10[9] = unaff_r8;
  unaff_r10[10] = unaff_r9;
  unaff_r10[0xb] = unaff_lr;
  unaff_r10[7] = param_1;
  unaff_r10[8] = param_2;
  unaff_r10[9] = param_4;
  unaff_r10[10] = unaff_r4;
  unaff_r10[0xb] = unaff_r5;
  unaff_r10[0xc] = unaff_r9;
  unaff_r10[0xd] = in_r12;
  unaff_r10[0xe] = register0x00000054;
  *unaff_r6 = param_1;
  unaff_r6[1] = param_3;
  unaff_r6[2] = param_4;
  unaff_r6[3] = unaff_r4;
  unaff_r6[4] = unaff_r5;
  unaff_r6[5] = unaff_r7;
  unaff_r6[6] = unaff_r9;
  unaff_r6[7] = in_r12;
  unaff_r6[8] = register0x00000054;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

