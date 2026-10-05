
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_0869b502(int param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  uint unaff_r11;
  uint in_r12;
  int iVar2;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  byte bVar3;
  char in_OV;
  byte bVar4;
  bool bVar5;
  undefined4 in_cr0;
  
  puVar1 = param_3;
  if (in_NG != in_OV) {
    puVar1 = (uint *)((int)param_3 + ((int)param_3 >> 0xb));
    *param_3 = unaff_r11;
    *puVar1 = param_2;
    puVar1[1] = unaff_r5;
    puVar1[2] = unaff_r7;
    puVar1[3] = unaff_r8;
    puVar1[4] = unaff_r9;
    puVar1[5] = unaff_r10;
    puVar1[6] = in_r12;
    puVar1[7] = (uint)register0x00000054;
    puVar1[8] = 0x869b50e;
  }
  bVar3 = in_CY;
  if (!(bool)in_ZR && in_NG == in_OV) {
    bVar3 = CARRY4(unaff_r9,(uint)in_CY);
    in_OV = SCARRY4(unaff_r9,(uint)in_CY);
    in_NG = (int)(unaff_r9 + in_CY) < 0;
    in_ZR = unaff_r9 + in_CY == 0;
  }
  bVar4 = bVar3;
  if (!(bool)in_OV) {
    bVar4 = 0x5ffffff4 < unaff_r11 || CARRY4(unaff_r11 + 0xa000000b,(uint)bVar3);
    in_OV = SCARRY4(unaff_r11,-0x5ffffff5) != SCARRY4(unaff_r11 + 0xa000000b,(uint)bVar3);
    iVar2 = unaff_r11 + 0xa000000b + (uint)bVar3;
    in_NG = iVar2 < 0;
    in_ZR = iVar2 == 0;
  }
  if (in_NG != in_OV) {
    puVar1 = puVar1 + 0xbc;
    coprocessor_load(3,in_cr0,puVar1);
    software_interrupt(0x62be62);
  }
  if ((bool)in_ZR) {
    param_1 = param_1 + 0xf0;
  }
  else {
    unaff_r7 = *(uint *)(unaff_r6 + -0x10);
    unaff_r5 = *(uint *)(unaff_r6 + -0x14);
    puVar1 = *(uint **)(unaff_r6 + -0x20);
    param_2 = *(uint *)(unaff_r6 + -0x24);
    param_1 = *(int *)(unaff_r6 + -0x28);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    bVar5 = (bool)bVar4;
    if (!(bool)in_ZR && in_NG == in_OV) {
      param_1 = unaff_r10 - (!(bool)bVar4 + 0x52);
      software_interrupt(0xc2ce);
      bVar5 = 0x4000000d < unaff_r5 || unaff_r5 + 0xbffffff3 < (uint)bVar4;
      in_OV = SBORROW4(unaff_r5,0x4000000d) != SBORROW4(unaff_r5 + 0xbffffff3,(uint)!(bool)bVar4);
      in_NG = (int)(unaff_r5 - (!(bool)bVar4 + 0x4000000d)) < 0;
      in_ZR = unaff_r5 == !(bool)bVar4 + 0x4000000d;
    }
    if (!(bool)in_NG) {
      in_OV = SBORROW4(unaff_r7,0x6000000d) != SBORROW4(unaff_r7 + 0x9ffffff3,(uint)!bVar5);
      in_NG = (int)(unaff_r7 - (!bVar5 + 0x6000000d)) < 0;
      in_ZR = unaff_r7 == !bVar5 + 0x6000000d;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      return;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      func_0x07b520a2(param_1,param_2,puVar1,unaff_r5 - (!(bool)bVar4 + 0x4000000c));
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

