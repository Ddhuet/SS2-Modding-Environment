
/* WARNING: Control flow encountered bad instruction data */

void FUN_088887aa(void)

{
  byte bVar1;
  undefined1 *unaff_r4;
  undefined1 *unaff_r5;
  byte *unaff_r6;
  undefined1 unaff_r7;
  undefined1 unaff_r10;
  bool in_NG;
  bool in_OV;
  
  if (in_NG) {
    *unaff_r5 = unaff_r10;
    *unaff_r4 = (char)unaff_r6;
  }
  if (in_OV) {
    bVar1 = *unaff_r6;
    *(undefined1 *)(uint)bVar1 = unaff_r7;
    *(undefined1 *)((int)(uint)bVar1 * -0xfffff) = unaff_r7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

