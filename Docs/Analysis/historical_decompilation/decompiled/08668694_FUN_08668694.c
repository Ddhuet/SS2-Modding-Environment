
/* WARNING: Control flow encountered bad instruction data */

void FUN_08668694(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint unaff_r4;
  undefined1 *unaff_r7;
  int unaff_r8;
  uint unaff_r9;
  int unaff_r11;
  int iVar1;
  uint uVar2;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar3;
  byte bVar4;
  undefined4 in_cr2;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr13;
  
  if ((bool)in_ZR) {
    unaff_r11 = param_3 + (param_3 >> 0xb) + (uint)in_CY;
  }
  bVar3 = in_CY;
  if (in_NG == in_OV) {
    bVar3 = (undefined1 *)0x9ffffff4 < unaff_r7 || CARRY4((uint)(unaff_r7 + 0x6000000b),(uint)in_CY)
    ;
    in_OV = SCARRY4((int)unaff_r7,0x6000000b) != SCARRY4((int)(unaff_r7 + 0x6000000b),(uint)in_CY);
    in_NG = (int)(unaff_r7 + in_CY + 0x6000000b) < 0;
    in_ZR = unaff_r7 + in_CY + 0x6000000b == (undefined1 *)0x0;
  }
  if (!(bool)bVar3) {
    in_NG = (longlong)(ZEXT48(param_1) * (ulonglong)unaff_r9) < 0;
    in_ZR = ZEXT48(param_1) * (ulonglong)unaff_r9 == 0;
  }
  if (!(bool)bVar3 || (bool)in_ZR) {
    coprocessor_movefromRt(0xb,0,in_cr8);
    param_1 = (int *)coprocessor_movefromRt2(0xb,0,in_cr8);
  }
  bVar4 = bVar3;
  if (in_NG == in_OV) {
    coprocessor_loadlong(1,in_cr9,0x866882c);
    bVar4 = (int *)0xfbccbca5 < param_1 || CARRY4((int)param_1 + 0x433435aU,(uint)bVar3);
    in_OV = SCARRY4((int)param_1,0x433435a) != SCARRY4((int)param_1 + 0x433435aU,(uint)bVar3);
    param_4 = (int)param_1 + bVar3 + 0x433435a;
    in_NG = (int)param_4 < 0;
    in_ZR = param_4 == 0;
  }
  bVar3 = bVar4;
  if (in_NG == in_OV) {
    uVar2 = (uint)param_1 >> ((uint)unaff_r7 & 0xff);
    bVar3 = CARRY4(unaff_r4,uVar2) || CARRY4(unaff_r4 + uVar2,(uint)bVar4);
    in_OV = SCARRY4(unaff_r4,uVar2) != SCARRY4(unaff_r4 + uVar2,(uint)bVar4);
    iVar1 = unaff_r4 + uVar2 + (uint)bVar4;
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if (in_NG == in_OV) {
    register0x00000054 = (BADSPACEBASE *)((uint)param_1 & 0x80000028);
    bVar4 = 0x2000000d < param_4 || param_4 + 0xdffffff3 < (uint)bVar3;
    in_OV = SBORROW4(param_4,0x2000000d) != SBORROW4(param_4 + 0xdffffff3,(uint)!(bool)bVar3);
    in_NG = (int)(param_4 - (!(bool)bVar3 + 0x2000000d)) < 0;
    in_ZR = param_4 == !(bool)bVar3 + 0x2000000d;
  }
  else {
    *param_1 = unaff_r11;
    bVar4 = bVar3;
    param_1 = param_1 + unaff_r8 * 0x100;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *(BADSPACEBASE **)(param_3 + (param_3 >> 0xd)) = register0x00000054;
  }
  if (in_NG == in_OV) {
    if (!(bool)in_NG) {
      in_OV = SCARRY4(unaff_r11,unaff_r4) != SCARRY4(unaff_r11 + unaff_r4,(uint)bVar4);
      param_4 = unaff_r11 + unaff_r4 + (uint)bVar4;
      in_NG = (int)param_4 < 0;
      in_ZR = param_4 == 0;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      software_interrupt(0x9160bc);
      uVar2 = (uint)param_1 ^ (int)param_1 >> 0xe4;
      in_NG = (int)uVar2 < 0;
      in_ZR = uVar2 == 0;
    }
    else {
      coprocessor_function(0,0,6,in_cr6,in_cr2,in_cr13);
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      *unaff_r7 = (char)param_4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

