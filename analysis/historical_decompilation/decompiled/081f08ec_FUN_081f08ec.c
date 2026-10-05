
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_081f08ec(uint param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  longlong lVar1;
  uint *puVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint *unaff_r6;
  uint unaff_r7;
  undefined4 unaff_r8;
  uint uVar3;
  undefined4 unaff_r9;
  uint uVar4;
  uint unaff_r10;
  uint unaff_r11;
  uint in_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr13;
  
  lVar1 = CONCAT44(&stack0x00000000,unaff_r9);
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_r10 = *(uint *)(unaff_r11 + (unaff_r5 >> 1));
    puVar2 = (uint *)((int)param_2 + 0xe8b);
    uVar3 = *param_2;
  }
  else {
    *(uint *)(in_r12 + 4) = param_1;
    *(uint **)(in_r12 + 8) = param_2;
    *(uint *)(in_r12 + 0xc) = unaff_r4;
    *(uint *)(in_r12 + 0x10) = unaff_r7;
    *(undefined4 *)(in_r12 + 0x14) = unaff_r8;
    *(undefined4 *)(in_r12 + 0x18) = unaff_r9;
    *(uint *)(in_r12 + 0x1c) = unaff_r10;
    *(uint *)(in_r12 + 0x20) = unaff_r11;
    *(undefined4 *)(in_r12 + 0x24) = 0x81f08fc;
    uVar3 = param_1 | param_1 << 1;
    *unaff_r6 = (uint)param_2;
    unaff_r6[1] = unaff_r7;
    unaff_r6[2] = unaff_r10;
    unaff_r6[3] = 0x81f0908;
    puVar2 = param_2;
  }
  if (in_NG == in_OV) {
    lVar1 = (ulonglong)unaff_r10 * (ulonglong)unaff_r7;
    in_NG = lVar1 < 0;
    in_ZR = lVar1 == 0;
  }
  uVar4 = (uint)lVar1;
  if (in_NG == in_OV) {
    coprocessor_store(6,in_cr10,uVar4);
    uVar4 = uVar4 + 0x28c;
  }
  else {
    in_CY = (byte)((uint)unaff_lr >> 0x1e) & 1;
    unaff_r10 = -(unaff_lr >> 0x1f);
    in_ZR = unaff_r10 == 0;
    in_NG = '\0';
  }
  if (in_NG != in_OV) {
    in_OV = SCARRY4((int)puVar2,0x4000002c) != SCARRY4((int)(puVar2 + 0x1000000b),(uint)in_CY);
    unaff_r11 = (int)puVar2 + in_CY + 0x4000002c;
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if (in_NG == in_OV) {
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_function(3,0xd,6,in_cr13,in_cr8,in_cr13);
    }
    else {
      *param_4 = param_1;
      param_4[1] = (uint)puVar2;
      param_4[2] = (uint)param_4;
      param_4[3] = unaff_r4;
      param_4[4] = unaff_r5;
      param_4[5] = unaff_r7;
      param_4[6] = uVar3;
      param_4[7] = uVar4;
      param_4[8] = unaff_r10;
      param_4[9] = unaff_r11;
      param_4[10] = in_r12;
      param_4[0xb] = (uint)((ulonglong)lVar1 >> 0x20);
      param_4[0xc] = 0x81f0924;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined8 *)unaff_r6;
}

