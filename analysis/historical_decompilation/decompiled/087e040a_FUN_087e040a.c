
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x087e049a) */

void FUN_087e040a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 *param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  int iVar4;
  undefined1 *unaff_r5;
  undefined1 *puVar5;
  int unaff_r6;
  undefined1 *unaff_r7;
  undefined1 *unaff_r8;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 *unaff_r11;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined4 *extraout_r12_00;
  undefined4 *extraout_r12_01;
  int iVar8;
  undefined1 *puVar9;
  int unaff_lr;
  uint uVar10;
  undefined1 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined4 extraout_s3;
  undefined4 extraout_s3_00;
  undefined4 extraout_s3_01;
  undefined4 extraout_s4;
  undefined4 extraout_s4_00;
  undefined4 extraout_s4_01;
  undefined4 extraout_s5;
  undefined4 extraout_s5_00;
  undefined4 extraout_s5_01;
  undefined4 extraout_s6;
  undefined4 extraout_s6_00;
  undefined4 extraout_s6_01;
  undefined4 extraout_s7;
  undefined4 extraout_s7_00;
  undefined4 extraout_s7_01;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_loadlong(5,in_cr11,0x87e0586);
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x87e0412;
    param_9 = (undefined4 *)func_0x083bd602();
    param_11 = extraout_r2;
    param_12 = extraout_r3;
    in_r12 = extraout_r12;
    param_1 = extraout_s0;
    param_2 = extraout_s1;
    param_3 = extraout_s2;
    param_4 = extraout_s3;
    param_5 = extraout_s4;
    param_6 = extraout_s5;
    param_7 = extraout_s6;
    param_8 = extraout_s7;
  }
  uVar10 = unaff_lr + 0x3b4;
  coprocessor_storelong(5,in_cr4,uVar10);
  coprocessor_function(4,0xe,5,in_cr6,in_cr14,in_cr14);
  coprocessor_moveto(0xb,7,5,&stack0x00000000,in_cr14,in_cr13);
  if (in_NG != in_OV) {
    coprocessor_movefromRt(0xb,6,6,in_cr14,in_cr14);
    coprocessor_loadlong(6,in_cr13,unaff_lr + 0x720);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar10 = 0x87e042e;
    param_9 = (undefined4 *)func_0x076ba6e2();
    param_11 = extraout_r2_00;
    param_12 = extraout_r3_00;
    in_r12 = extraout_r12_00;
    param_1 = extraout_s0_00;
    param_2 = extraout_s1_00;
    param_3 = extraout_s2_00;
    param_4 = extraout_s3_00;
    param_5 = extraout_s4_00;
    param_6 = extraout_s5_00;
    param_7 = extraout_s6_00;
    param_8 = extraout_s7_00;
  }
  coprocessor_loadlong(0xc,in_cr10,&stack0x00000374);
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_r11 = (undefined4 *)coprocessor_movefromRt(0xc,6,6,in_cr13,in_cr13);
    coprocessor_moveto(0xc,7,6,unaff_r10,in_cr13,in_cr13);
    puVar9 = &stack0x000002b4;
    register0x00000054 = (BADSPACEBASE *)&stack0x000002b4;
    coprocessor_load(8,in_cr8,puVar9);
  }
  else {
    coprocessor_storelong(6,in_cr10,unaff_r11 + 0x6c);
  }
  if ((bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = coprocessor_movefromRt(4,4,1,in_cr7,in_cr3);
  if ((bool)in_ZR || in_NG != '\0') {
    uVar10 = 0x87e044e;
    param_9 = (undefined4 *)func_0x06dd844e();
    param_11 = extraout_r2_01;
    param_12 = extraout_r3_01;
    in_r12 = extraout_r12_01;
    param_1 = extraout_s0_01;
    param_2 = extraout_s1_01;
    param_3 = extraout_s2_01;
    param_4 = extraout_s3_01;
    param_5 = extraout_s4_01;
    param_6 = extraout_s5_01;
    param_7 = extraout_s6_01;
    param_8 = extraout_s7_01;
  }
  uVar2 = SUB41(param_9,0);
  puVar5 = unaff_r5;
  if (!(bool)in_OV) {
    puVar5 = unaff_r5 + -(uVar10 >> 0x17 | uVar10 << 9);
    *unaff_r5 = uVar2;
  }
  if (!(bool)in_NG) {
    *(undefined1 *)(unaff_r6 + -0x657) = uVar2;
  }
  puVar6 = unaff_r8;
  if ((bool)in_OV) {
    puVar6 = unaff_r8 + -5;
    *unaff_r8 = uVar2;
  }
  puVar7 = puVar6;
  if (!(bool)in_NG) {
    puVar7 = puVar6 + -0x86;
    *puVar6 = (char)iVar4;
  }
  puVar6 = puVar7;
  if ((bool)in_OV) {
    puVar6 = puVar7 + -((uint)puVar7 >> 0x19);
    *puVar7 = (char)unaff_r10;
  }
  if (in_NG != in_OV) {
    return;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *unaff_r7 = (char)unaff_r6;
  }
  if (in_NG != in_OV) {
    puVar7 = (undefined1 *)
             ((int)param_9 - ((uint)register0x00000054 >> 0x1b | (int)register0x00000054 << 5));
    *(char *)param_9 = (char)unaff_r10;
    param_9 = (undefined4 *)(puVar7 + -(uVar10 >> 0x19 | uVar10 << 7));
    *puVar7 = (char)in_r12;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    puVar3 = (undefined4 *)((int)param_9 + -0xdde);
    *param_9 = unaff_r10;
    iVar8 = ((int)unaff_r11 >> 0x17 & 0xffffU) + ((uint)puVar3 & 0xffff0000);
    puVar7 = puVar6;
  }
  else {
    puVar3 = param_9 + (int)puVar6 * -0x20000;
    *param_9 = unaff_r9;
    puVar7 = puVar6 + -((uint)puVar6 >> 0xb);
    *puVar6 = (char)puVar5;
    iVar8 = (int)in_r12 + ((int)in_r12 >> 9);
    *in_r12 = param_12;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar5 = puVar7;
    if (!(bool)in_ZR && in_NG == in_OV) {
      puVar5 = puVar7 + 0xcef;
      *puVar7 = unaff_pc;
    }
    if (in_NG != in_OV) {
      puVar5[0xcef] = (char)uVar10;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    if (!(bool)in_ZR && in_NG == in_OV) {
      coprocessor_storelong(0xc,in_cr10,uVar10);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if (!(bool)in_NG) {
      bVar1 = *(byte *)(iVar4 - ((uint)puVar3 >> 10 | (int)puVar3 << 0x16));
      if ((bool)in_OV == false) {
        *(undefined4 *)(uVar10 + 4) = param_12;
      }
      else {
        *unaff_r10 = param_11;
        unaff_r10[1] = param_12;
        unaff_r10[2] = puVar5;
        unaff_r10[3] = (uint)bVar1;
        unaff_r10[4] = unaff_r10;
        unaff_r10[5] = iVar8;
        unaff_r10[6] = uVar10;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_r11 = unaff_r11 + 0x78;
    coprocessor_load(10,in_cr10,unaff_r11);
  }
  if (in_NG != in_OV) {
    param_1 = *(undefined4 *)(uVar10 + 0x24);
    param_2 = *(undefined4 *)(uVar10 + 0x28);
    param_3 = *(undefined4 *)(uVar10 + 0x2c);
    param_4 = *(undefined4 *)(uVar10 + 0x30);
    param_5 = *(undefined4 *)(uVar10 + 0x34);
    param_6 = *(undefined4 *)(uVar10 + 0x38);
    param_7 = *(undefined4 *)(uVar10 + 0x3c);
    param_8 = *(undefined4 *)(uVar10 + 0x40);
    coprocessor_storelong(0xc,in_cr10,uVar10);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x07706cfe(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_12 = extraout_r3_02;
  }
  if (in_NG != in_OV) {
    if ((bool)in_NG) {
      *unaff_r11 = param_12;
      SignedSaturate((int)unaff_r10 >> 0xe,0x1d);
      SignedDoesSaturate((int)unaff_r10 >> 0xe,0x1d);
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      if (in_NG != in_OV) {
        coprocessor_loadlong(8,in_cr10,unaff_r10 + 0x68);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

