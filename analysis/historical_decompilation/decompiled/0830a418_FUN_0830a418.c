
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0830a450) */
/* WARNING: Removing unreachable block (ram,0x0830a454) */

void FUN_0830a418(int param_1)

{
  byte *unaff_r11;
  undefined1 *puVar1;
  int unaff_lr;
  char in_NG;
  char in_OV;
  bool bVar2;
  undefined4 in_cr0;
  undefined4 in_cr8;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    software_interrupt(0xb9b5b3);
  }
  puVar1 = (undefined1 *)((uint)&stack0x00000000 & 0xcd7fffff);
  bVar2 = puVar1 == (undefined1 *)0x0;
  coprocessor_function(0xd,0xe,7,in_cr14,in_cr15,in_cr8);
  if (bVar2 || (int)puVar1 < 0 != (bool)in_OV) {
    return;
  }
  if (bVar2 || (int)puVar1 < 0 != (bool)in_OV) {
    coprocessor_loadlong(1,in_cr14,unaff_lr + 0x378);
  }
  else {
    software_interrupt(0xd5dbde);
  }
  if (bVar2) {
    coprocessor_store(0xd,in_cr0,*unaff_r11 - 0x2c);
    software_interrupt(0xc0a0b);
                    /* WARNING: Could not recover jumptable at 0x0830a44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(param_1 + -0x10) * 0x40000000 + -0x830a455))
              (*(undefined4 *)(param_1 + -0x14));
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

