
/* WARNING: Control flow encountered bad instruction data */

void FUN_0860e412(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *extraout_r3;
  undefined1 unaff_r9;
  undefined1 in_r12;
  undefined1 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr13;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (in_NG == in_OV) {
    uVar4 = func_0x08bbb076();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  puVar3 = (undefined1 *)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  software_interrupt(0xd321);
  software_interrupt(0x20cf12);
  if (in_NG != in_OV) {
    puVar3 = puVar3 + 0x860;
    *puVar3 = in_r12;
    coprocessor_load(1,in_cr13,param_4 + -200);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    in_OV = SBORROW4(iVar1,0x860e43e) != SBORROW4(iVar1 + -0x860e43e,(uint)!(bool)in_CY);
    puVar3 = (undefined1 *)(iVar1 - (!(bool)in_CY + 0x860e43e));
    in_NG = (int)puVar3 < 0;
    in_ZR = puVar3 == (undefined1 *)0x0;
  }
  else {
    software_interrupt(0x3191d0);
  }
  uVar2 = SUB41(puVar3,0);
  if (!(bool)in_ZR) {
    uVar2 = 0;
  }
  if (!(bool)in_NG) {
    param_4[-0xc91] = unaff_r9;
    *param_4 = uVar2;
  }
  if (in_NG != in_OV) {
    software_interrupt(0xfb1037);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

