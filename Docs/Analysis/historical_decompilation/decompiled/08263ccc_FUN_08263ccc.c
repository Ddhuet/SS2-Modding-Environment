
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08263ccc(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 extraout_r1;
  int extraout_r2;
  undefined4 unaff_r4;
  uint unaff_r9;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined8 *unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 *puVar2;
  undefined4 in_cr1;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined8 uVar3;
  
  if ((bool)in_CY && !(bool)in_ZR) {
    return *unaff_lr;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x06f4ab08();
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_ZR) {
    software_interrupt(0x9f5e1);
  }
  if (!(bool)in_OV) {
    software_interrupt(0x6b4f37);
  }
  if ((bool)in_CY) {
    software_interrupt(0x486576);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *in_r12 = param_2;
    in_r12[1] = param_3;
    in_r12[2] = unaff_r4;
    puVar2 = in_r12 + 3;
    uVar1 = (uint)(byte)in_CY;
    in_CY = (undefined4 *)0xeffffff6 < puVar2 || CARRY4((int)puVar2 + 0x10000009U,uVar1);
    in_OV = SCARRY4((int)puVar2,0x10000009) != SCARRY4((int)puVar2 + 0x10000009U,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x08263cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)in_CY) {
    if (!(bool)in_OV) {
      coprocessor_function(9,7,2,in_cr5,in_cr7,in_cr1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (**(code **)(param_3 - (unaff_r9 >> 0x19 | unaff_r9 << 7)))();
  return uVar3;
}

