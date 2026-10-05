
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c15f8(uint param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *unaff_r4;
  undefined4 *unaff_r6;
  undefined4 *puVar3;
  int unaff_r7;
  int unaff_r9;
  uint unaff_r11;
  int iVar4;
  uint unaff_lr;
  undefined1 in_NG;
  bool in_ZR;
  byte in_CY;
  undefined1 in_OV;
  bool bVar5;
  byte bVar6;
  undefined4 in_cr5;
  
  bVar6 = in_CY;
  if (!in_ZR) {
    uVar1 = unaff_r11 >> 0xb;
    bVar6 = CARRY4(unaff_lr,uVar1) || CARRY4(unaff_lr + uVar1,(uint)in_CY);
    in_OV = SCARRY4(unaff_lr,uVar1) != SCARRY4(unaff_lr + uVar1,(uint)in_CY);
    iVar4 = unaff_lr + uVar1 + (uint)in_CY;
    in_NG = iVar4 < 0;
    in_ZR = iVar4 == 0;
  }
  if (!in_ZR) {
    if (!(bool)bVar6) {
      unaff_r4 = unaff_r4 + unaff_r7 * -0x40;
      param_2 = *unaff_r4;
    }
    puVar2 = param_4;
    if (!(bool)in_OV) {
      puVar2 = param_4 + -0xe7f;
      *param_4 = (char)unaff_r4;
    }
    if ((bool)in_NG) {
      unaff_r7 = unaff_r9 + -0x7800000;
    }
    if ((bool)bVar6) {
      coprocessor_store(7,in_cr5,unaff_r7);
      puVar3 = (undefined4 *)((int)unaff_r6 + -0x25f);
      *unaff_r6 = unaff_r4;
    }
    else {
      coprocessor_store(3,in_cr5,unaff_r9 + -0x130);
      puVar3 = unaff_r6;
    }
    bVar5 = false;
    if (!(bool)in_NG) {
      param_1 = (uint)puVar3 ^ (uint)&stack0x00000000 >> (param_1 & 0xff);
      bVar5 = param_1 == 0;
    }
    if (bVar5) {
      func_0x07ec4ee0(param_1,param_2,param_3,puVar2);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

