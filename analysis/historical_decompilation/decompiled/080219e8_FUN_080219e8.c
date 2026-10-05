
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_080219e8(uint param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined2 *puVar9;
  short *psVar10;
  undefined4 unaff_lr;
  undefined4 auStack_7c [2];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  short sStack_48;
  short asStack_46 [3];
  uint auStack_40 [2];
  undefined2 auStack_38 [2];
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  undefined2 *puStack_24;
  
  uStack_34 = param_2;
  iVar4 = FUN_0800c684();
  if (iVar4 == 0) {
    FUN_08065784(auStack_7c,DAT_08021a54,1,0xffffffff,0);
    uStack_60 = 7;
    uStack_5f = 8;
    FUN_08000af0(0x17,uStack_70,2);
    uStack_28 = uStack_34 >> 0x10;
    uStack_34 = uStack_34 & DAT_08021a58;
    auStack_40[0] = param_1 & DAT_08021a58;
    auStack_40[1] = param_1 >> 0x10;
    auStack_38[1] = 0;
    asStack_46[1] = 0;
    auStack_38[0] = 0;
    iStack_2c = 0;
    while (((iVar4 = FUN_0800c4c8(), iVar4 == 0 && (iStack_2c == 0)) &&
           (iStack_2c = FUN_0800c61c(), iStack_2c == 0))) {
      iVar4 = FUN_0800c5e8();
      if ((iVar4 == 0) && (iVar4 = FUN_0800c6dc(), iVar4 == 0)) {
        iStack_30 = 0;
        psVar10 = asStack_46;
        puStack_24 = auStack_38 + 1;
        puVar9 = auStack_38;
        do {
          psVar10 = psVar10 + 1;
          if (*psVar10 == 0) {
            puVar8 = auStack_40 + iStack_30;
            uVar7 = *puVar8;
            uVar1 = iStack_30 + 1;
            uVar6 = auStack_40[uVar1];
            uVar5 = FUN_0800c61c();
            uVar2 = FUN_0800b5ac(uVar7,uVar6,uVar5);
            sVar3 = FUN_0806599c(auStack_7c,0x29,puVar9,puStack_24,0);
            *psVar10 = sVar3;
            FUN_0800b570((int)(short)*puVar8,(int)(short)auStack_40[uVar1],&sStack_48,asStack_46,
                         0x10,0);
            if (uStack_28 == 0) {
              FUN_0806585c(auStack_7c,(int)sStack_48,(int)asStack_46[0],0x29,*puVar9);
            }
            else {
              FUN_08007378((int)sStack_48,asStack_46[0] + 1,0x29,*puVar9,uVar2,&uStack_60,uStack_74,
                           auStack_7c[0]);
            }
          }
          else {
            iStack_2c = iStack_2c + 1;
          }
          puStack_24 = puStack_24 + 1;
          puVar9 = puVar9 + 1;
          iStack_30 = iStack_30 + 1;
        } while (iStack_30 == 0);
      }
      FUN_080003f0();
    }
    *DAT_08021b78 = *DAT_08021b78 & ~(1 << (uStack_34 & 0xff));
  }
  return unaff_lr;
}

