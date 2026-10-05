
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825a932(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int unaff_r10;
  undefined1 *unaff_pc;
  bool in_OV;
  longlong lVar3;
  undefined4 in_cr12;
  
  if (in_OV) {
    coprocessor_load(0xb,in_cr12,unaff_r10 + -0x3c4);
  }
  puVar1 = (undefined1 *)0x3a0;
  puVar2 = (undefined1 *)0x3a8;
  lVar3 = 8;
  while( true ) {
    *unaff_pc = *puVar1;
    unaff_pc[1] = *puVar2;
    unaff_pc = unaff_pc + 2;
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

