
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08dc51dc) */
/* WARNING: Removing unreachable block (ram,0x08dc51e0) */
/* WARNING: Removing unreachable block (ram,0x081c1de4) */
/* WARNING: Removing unreachable block (ram,0x08dc51d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_081c1dc4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar3;
  undefined1 *unaff_r7;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr6;
  
  if (in_CY) {
    uVar1 = uRam081c1dc8;
    puVar2 = puRam081c1dcc;
    uVar3 = uRam081c1dd0;
    if (!in_OV) {
      coprocessor_loadlong(3,in_cr6,0x81c1d20);
      software_interrupt(0x7f7f7f);
      software_interrupt(0x7f7f7f);
      software_interrupt(0x7e7f7f);
      uVar1 = param_2;
      puVar2 = param_4;
      uVar3 = unaff_r5;
    }
    if (!in_ZR) {
      *unaff_r7 = (char)puVar2;
    }
    if (in_ZR || (bool)in_NG != in_OV) {
      coprocessor_loadlong(8,in_cr1,uVar3);
    }
    else {
      software_interrupt(0xfd1925);
    }
    *puVar2 = unaff_r4;
    puVar2[-1] = param_3;
    puVar2[-2] = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

