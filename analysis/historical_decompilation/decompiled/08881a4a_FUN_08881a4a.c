
/* WARNING: Control flow encountered bad instruction data */

void FUN_08881a4a(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 unaff_r5;
  uint unaff_r6;
  undefined1 unaff_r10;
  undefined4 unaff_r11;
  bool in_OV;
  
  if (in_OV) {
    puVar1 = (undefined1 *)((int)param_3 - (unaff_r6 >> 10 | unaff_r6 << 0x16));
    *param_3 = unaff_r11;
    iVar2 = (int)puVar1 - (unaff_r6 >> 0x1e | unaff_r6 << 2);
    *puVar1 = unaff_r10;
    UnsignedSaturate((short)iVar2 + (short)((uint)unaff_r5 >> 0x10),0x10);
    UnsignedSaturate((short)((uint)iVar2 >> 0x10) - (short)unaff_r5,0x10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

