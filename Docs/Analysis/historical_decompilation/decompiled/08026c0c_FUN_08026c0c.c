
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0809ac2c) */
/* WARNING: Removing unreachable block (ram,0x0809ac30) */

undefined4
FUN_08026c0c(undefined4 *param_1,undefined2 param_2,uint *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,ushort param_8)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ushort *puVar7;
  int *unaff_r9;
  undefined4 unaff_r11;
  undefined4 unaff_pc;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr4;
  undefined1 uStack00000010;
  undefined1 uStack00000014;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  uint in_stack_0000003c;
  
  puVar6 = param_3;
  if (in_ZR) {
    *param_1 = unaff_r11;
    *unaff_r9 = (int)(param_1 + -0x14c);
    puVar6 = param_3 + -0x303;
    param_1 = (undefined4 *)*param_3;
  }
  if (in_CY) {
    _uStack00000010 = in_stack_00000038 & 0xffff;
    _uStack00000014 = in_stack_0000003c & 0xffff;
    if (((((*DAT_08029da4 & 1 << ((uint)param_1 & 0xff)) != 0) &&
         (puVar7 = (ushort *)(*DAT_08029da8 + DAT_08029dac * (int)param_1),
         (char)puVar7[0xee] != '\0')) && (puVar7[6] != 0xb)) && (puVar7[6] != 10)) {
      uVar1 = FUN_08021b84((uint)puVar6 & 0xffff,puVar7[0xe7],200);
      if (*(char *)((int)puVar7 + DAT_08029db0) != '\x03') {
        FUN_080699ec(&param_7,puVar7 + 0x1c6,param_4 & 0xffff,param_2);
        iVar4 = FUN_0801df08(puVar7,0);
        if (iVar4 != 0) {
          FUN_0801d968(*puVar7 + 4,iVar4,param_7._1_1_);
        }
      }
      uVar2 = FUN_08021c10(param_2,uVar1,puVar7 + 0x1c6);
      puVar7[6] = 10;
      param_7._0_1_ = (undefined1)puVar7[1];
      param_7._2_1_ = uStack00000010;
      param_7._3_1_ = uStack00000014;
      param_8 = uVar2;
      FUN_0801f0a8(puVar7,&param_7);
      uVar3 = FUN_080020f4();
      puVar7[0x2c] = uVar3;
      puVar7[0x25] = uVar2;
      *(uint *)(puVar7 + 0x26) = (uint)uVar2;
      uVar5 = FUN_080020f4();
      puVar7[0x2d] = (ushort)(1 << (uVar5 & 0xff)) | puVar7[0x2d];
      FUN_0806671c(&param_7);
      if (*(char *)((int)puVar7 + DAT_08029db0) != '\x03') {
        FUN_080696dc(puVar7 + 0x1c6,param_8,param_4,param_1);
      }
    }
    return in_stack_00000034;
  }
  coprocessor_moveto2(7,0xe,unaff_pc,param_1,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

