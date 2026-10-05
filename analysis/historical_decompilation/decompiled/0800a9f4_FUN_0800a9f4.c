
/* WARNING: Removing unreachable block (ram,0x0800aa46) */
/* WARNING: Removing unreachable block (ram,0x0800aa2a) */

undefined4 FUN_0800a9f4(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_lr;
  
  uVar2 = (param_1 & 0xffff) >> 3;
  uVar3 = (param_2 & 0xffff) >> 3;
  if ((((uVar2 <= *(ushort *)(DAT_0800aae8 + 0x78)) &&
       (uVar10 = (uint)(short)uVar3, uVar10 <= *(ushort *)(DAT_0800aae8 + 0x7a))) && (param_3 != 0))
     && (param_4 != 0)) {
    iVar4 = *(int *)(DAT_0800aae8 + 0x68);
    if (param_5 == 0) {
      if (uVar3 < uVar10 + param_4) {
        param_3 = param_3 >> 1;
        do {
          uVar11 = uVar2 - param_3 & 0xffff;
          iVar7 = (uVar2 - param_3) * 0x10000;
          if ((uint)(iVar7 >> 0x10) < uVar2 + param_3) {
            do {
              pbVar9 = (byte *)(iVar4 + ((iVar7 >> 0x10) +
                                        (uint)*DAT_0800abb4 * ((int)(uVar3 * 0x10000) >> 0x10)) * 2)
              ;
              bVar1 = *pbVar9;
              if ((bVar1 & 0xf) == 0xc) {
                pbVar9[1] = pbVar9[1] & 0xf0;
                *pbVar9 = 0;
              }
              else if ((bVar1 & 0xf) == 10) {
                pbVar9[1] = pbVar9[1] & 0xf0 | bVar1 >> 4;
                *pbVar9 = 0;
              }
              else if (bVar1 == 8) {
                pbVar9[1] = pbVar9[1] & 0xf0;
              }
              uVar11 = uVar11 * 0x10000 + 0x10000 >> 0x10;
              iVar7 = uVar11 << 0x10;
            } while ((uint)(iVar7 >> 0x10) < uVar2 + param_3);
          }
          uVar11 = uVar3 * 0x10000 + 0x10000;
          uVar3 = uVar11 >> 0x10;
        } while ((uint)((int)uVar11 >> 0x10) < uVar10 + param_4);
      }
    }
    else if (uVar3 < uVar10 + param_4) {
      param_3 = param_3 >> 1;
      do {
        iVar7 = DAT_0800aae8;
        uVar11 = uVar2 - param_3 & 0xffff;
        iVar6 = (uVar2 - param_3) * 0x10000;
        if ((uint)(iVar6 >> 0x10) < param_3 + uVar2) {
          psVar5 = (short *)(DAT_0800aae8 + 0x8c);
          do {
            puVar8 = (uint *)(iVar4 + ((iVar6 >> 0x10) +
                                      (uint)*(ushort *)(iVar7 + 0x78) *
                                      ((int)(uVar3 * 0x10000) >> 0x10)) * 2);
            if (((*puVar8 & 0xf00) == 0) || (((byte)*puVar8 & 0xf) == 0xc)) {
              if (*psVar5 != 0xb) {
                bVar1 = 0xc;
                goto LAB_0800ab10;
              }
              if ((byte)*puVar8 != 8) {
                *(byte *)puVar8 = 0xc;
              }
            }
            else {
              if (*psVar5 == 0xb) {
                if ((byte)*puVar8 == 8) goto LAB_0800ab12;
                *(byte *)puVar8 = 10;
                bVar1 = (byte)(((*puVar8 & 0xfff) >> 8) << 4) | 10;
              }
              else {
                *(byte *)puVar8 = 10;
                bVar1 = (byte)(((*puVar8 & 0xfff) >> 8) << 4) | 10;
              }
LAB_0800ab10:
              *(byte *)puVar8 = bVar1;
            }
LAB_0800ab12:
            *(byte *)((int)puVar8 + 1) = *(byte *)((int)puVar8 + 1) & 0xf0 | 1;
            uVar11 = uVar11 * 0x10000 + 0x10000 >> 0x10;
            iVar6 = uVar11 << 0x10;
          } while ((uint)(iVar6 >> 0x10) < uVar2 + param_3);
        }
        uVar11 = uVar3 * 0x10000 + 0x10000;
        uVar3 = uVar11 >> 0x10;
      } while ((uint)((int)uVar11 >> 0x10) < uVar10 + param_4);
    }
  }
  return unaff_lr;
}

