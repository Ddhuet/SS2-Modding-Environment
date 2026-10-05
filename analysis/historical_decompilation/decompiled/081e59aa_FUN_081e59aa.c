
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x081e59de) */
/* WARNING: Removing unreachable block (ram,0x087ab632) */
/* WARNING: Removing unreachable block (ram,0x081e59c2) */

undefined8 FUN_081e59aa(int param_1,uint param_2)

{
  uint uVar1;
  uint unaff_r5;
  int unaff_r8;
  uint in_r12;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar2;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 uVar3;
  
  bVar2 = in_CY;
  if (!in_ZR) {
    uVar1 = param_2 >> (unaff_r5 & 0xff);
    bVar2 = uVar1 < in_r12 || in_r12 - uVar1 < (uint)in_CY;
    in_OV = SBORROW4(in_r12,uVar1) != SBORROW4(in_r12 - uVar1,(uint)!in_CY);
    in_NG = (int)(in_r12 - (uVar1 + !in_CY)) < 0;
    in_ZR = in_r12 == uVar1 + !in_CY;
  }
  if (!in_ZR) {
    if (!bVar2) {
      *(uint *)(((unaff_r5 >> 0x1b | unaff_r5 << 5) - (param_2 + !bVar2)) + unaff_r8 * -0x4000) =
           param_2;
      if (in_NG != in_OV) {
        software_interrupt(0xbd415);
        unaff_lr = (uint)*(byte *)(param_1 + 0xe15);
      }
      coprocessor_loadlong(3,in_cr14,unaff_lr + 0xbc);
      if (in_NG == in_OV) {
        coprocessor_function(4,1,0,in_cr0,in_cr15,in_cr4);
        func_0x07ea5532();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x081e59ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(in_r12 - 0x317))();
  return uVar3;
}

