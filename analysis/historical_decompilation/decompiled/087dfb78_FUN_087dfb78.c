
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x087dfbb8) */

undefined4 FUN_087dfb78(void)

{
  char cVar1;
  int in_r3;
  undefined1 *unaff_r4;
  undefined1 *puVar2;
  int unaff_r5;
  int unaff_r9;
  int in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,in_r12 + 0x84);
    coprocessor_storelong(3,in_cr8,in_r12 + 0x88);
  }
  coprocessor_loadlong(3,in_cr8,in_r12 + 0x88);
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(3,in_cr8,in_r12 + 0xcc);
  }
  if (in_NG) {
    puVar2 = unaff_r4 + -0x778;
    *unaff_r4 = (char)puVar2;
  }
  else {
    *(char *)(in_r3 - (unaff_r5 >> 8)) = (char)in_r3;
    puVar2 = unaff_r4;
  }
  if (!in_OV) {
    return *(undefined4 *)(unaff_r9 + 4);
  }
  if (!in_CY || in_ZR) {
    coprocessor_storelong(0xc,in_cr11,unaff_r9);
  }
  if (!in_ZR && in_NG == true) {
    coprocessor_loadlong(0xd,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr13,&stack0x00000000);
  }
  if (in_NG != true) {
    coprocessor_storelong(0xc,in_cr13,&stack0x00000000);
  }
  if (in_NG) {
    *puVar2 = (char)(puVar2 + -0x444);
    cVar1 = (char)(puVar2 + -0x888);
    puVar2[-0x444] = cVar1;
    puVar2[-0x888] = cVar1 + -0x44;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

