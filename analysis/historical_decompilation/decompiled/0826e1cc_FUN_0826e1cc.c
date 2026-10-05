
/* WARNING: Control flow encountered bad instruction data */

void FUN_0826e1cc(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint unaff_r8;
  undefined4 unaff_r10;
  undefined1 *unaff_r11;
  undefined1 *puVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  puVar1 = (undefined1 *)0x0;
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_load(5,in_cr11,unaff_r10);
    puVar1 = (undefined1 *)(param_3 & 0xffffc93f);
    in_NG = (int)puVar1 < 0;
    in_ZR = puVar1 == (undefined1 *)0x0;
  }
  if (in_NG != in_OV) {
    unaff_r11 = (undefined1 *)
                ((unaff_r8 >> 0x10) << 0x18 | (unaff_r8 >> 0x18) << 0x10 | (unaff_r8 & 0xff) << 8 |
                unaff_r8 >> 8 & 0xff);
  }
  *unaff_r11 = (char)puVar1;
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xd3c7c3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

