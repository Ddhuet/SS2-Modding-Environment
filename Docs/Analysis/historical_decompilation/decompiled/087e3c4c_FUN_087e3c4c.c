
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_087e3c4c(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint unaff_r4;
  undefined4 *unaff_r9;
  undefined1 in_ZR;
  byte in_CY;
  bool in_OV;
  bool bVar2;
  byte bVar3;
  
  bVar3 = in_CY;
  if (!in_OV) {
    uVar1 = unaff_r4 >> (unaff_r4 & 0xff);
    bVar3 = CARRY4(param_1,uVar1) || CARRY4(param_1 + uVar1,(uint)in_CY);
    in_OV = SCARRY4(param_1,uVar1) != SCARRY4(param_1 + uVar1,(uint)in_CY);
    unaff_r9 = (undefined4 *)(param_1 + uVar1 + (uint)in_CY);
    in_ZR = unaff_r9 == (undefined4 *)0x0;
  }
  if ((bool)in_ZR) {
    unaff_r4 = (uint)unaff_r9 & param_4 >> (unaff_r4 & 0xff);
  }
  if (!in_OV) {
    *(uint *)(unaff_r4 - param_4) = param_1;
  }
  bVar2 = false;
  if ((bool)in_ZR) {
    param_1 = param_1 & param_4;
    bVar3 = param_1 <= param_1 * 0x4000;
    in_OV = SBORROW4(param_1 * 0x4000,param_1);
    bVar2 = param_1 * 0x3fff == 0;
  }
  if (!in_OV) {
    unaff_r9 = (undefined4 *)((uint)unaff_r9 & unaff_r4 << 0xe);
  }
  if ((bool)bVar3 && !bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_r9;
}

