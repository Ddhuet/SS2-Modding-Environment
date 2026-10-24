
undefined8 FUN_080ba470(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_54;
  uint local_44;
  
  local_54 = 0;
  uVar7 = param_1;
  if ((int)param_2 < 0) {
    local_54 = 0xffffffff;
    uVar7 = -param_1;
    param_2 = -param_2;
    if (param_1 != 0) {
      param_2 = param_2 - 1;
    }
  }
  uVar12 = param_3;
  if ((int)param_4 < 0) {
    local_54 = ~local_54;
    uVar12 = -param_3;
    param_4 = -param_4;
    if (param_3 != 0) {
      param_4 = param_4 - 1;
    }
  }
  if (param_4 == 0) {
    if (param_2 < uVar12) {
      if (DAT_080ba4e0 < uVar12) {
        iVar4 = 0x18;
        if (uVar12 <= DAT_080ba598) {
          iVar4 = 0x10;
        }
      }
      else {
        iVar4 = 0;
        if (0xff < uVar12) {
          iVar4 = 8;
        }
      }
      uVar5 = 0x20 - ((uint)*(byte *)((uVar12 >> iVar4) + DAT_080ba59c) + iVar4);
      if (uVar5 != 0) {
        uVar12 = uVar12 << (uVar5 & 0xff);
        param_2 = param_2 << (uVar5 & 0xff) | uVar7 >> (0x20 - uVar5 & 0xff);
        uVar7 = uVar7 << (uVar5 & 0xff);
      }
      uVar5 = uVar12 >> 0x10;
      uVar9 = DAT_080ba5a0 & uVar12;
      iVar4 = FUN_080baaf4(param_2,uVar5);
      iVar2 = FUN_080baa7c(param_2,uVar5);
      uVar10 = uVar9 * iVar2;
      uVar3 = iVar4 << 0x10 | uVar7 >> 0x10;
      iVar4 = iVar2;
      if (uVar3 < uVar10) {
        iVar4 = iVar2 + -1;
        uVar3 = uVar3 + uVar12;
        if ((uVar12 <= uVar3) && (uVar3 < uVar10)) {
          iVar4 = iVar2 + -2;
          uVar3 = uVar3 + uVar12;
        }
      }
      iVar2 = FUN_080baaf4(uVar3 - uVar10,uVar5);
      uVar5 = FUN_080baa7c(uVar3 - uVar10,uVar5);
      uVar9 = uVar9 * uVar5;
      uVar7 = iVar2 << 0x10 | uVar7 & DAT_080ba5a0;
      uVar10 = uVar5;
      if (uVar7 < uVar9) {
        uVar10 = uVar5 - 1;
        uVar7 = uVar7 + uVar12;
        if ((uVar12 <= uVar7) && (uVar7 < uVar9)) {
          uVar10 = uVar5 - 2;
        }
      }
      uVar10 = iVar4 << 0x10 | uVar10;
      local_44 = 0;
    }
    else {
      if (uVar12 == 0) {
        uVar12 = FUN_080baa7c(1,0);
      }
      if (DAT_080ba5c4 < uVar12) {
        iVar4 = 0x18;
        if (uVar12 <= DAT_080ba5f0) {
          iVar4 = 0x10;
        }
      }
      else {
        iVar4 = 0;
        if (0xff < uVar12) {
          iVar4 = 8;
        }
      }
      uVar5 = 0x20 - ((uint)*(byte *)((uVar12 >> iVar4) + DAT_080ba5f4) + iVar4);
      if (uVar5 == 0) {
        iVar4 = param_2 - uVar12;
        local_44 = 1;
      }
      else {
        uVar12 = uVar12 << (uVar5 & 0xff);
        uVar10 = param_2 >> (0x20 - uVar5 & 0xff);
        uVar3 = param_2 << (uVar5 & 0xff) | uVar7 >> (0x20 - uVar5 & 0xff);
        uVar7 = uVar7 << (uVar5 & 0xff);
        uVar5 = uVar12 >> 0x10;
        uVar9 = DAT_080ba714 & uVar12;
        iVar4 = FUN_080baaf4(uVar10,uVar5);
        iVar2 = FUN_080baa7c(uVar10,uVar5);
        uVar10 = uVar9 * iVar2;
        uVar6 = iVar4 << 0x10 | uVar3 >> 0x10;
        iVar4 = iVar2;
        if (uVar6 < uVar10) {
          iVar4 = iVar2 + -1;
          uVar6 = uVar6 + uVar12;
          if ((uVar12 <= uVar6) && (uVar6 < uVar10)) {
            iVar4 = iVar2 + -2;
            uVar6 = uVar6 + uVar12;
          }
        }
        iVar2 = FUN_080baaf4(uVar6 - uVar10,uVar5);
        uVar5 = FUN_080baa7c(uVar6 - uVar10,uVar5);
        uVar9 = uVar9 * uVar5;
        uVar10 = iVar2 << 0x10 | uVar3 & DAT_080ba714;
        local_44 = uVar5;
        if (uVar10 < uVar9) {
          local_44 = uVar5 - 1;
          uVar10 = uVar10 + uVar12;
          if ((uVar12 <= uVar10) && (uVar10 < uVar9)) {
            local_44 = uVar5 - 2;
            uVar10 = uVar10 + uVar12;
          }
        }
        local_44 = iVar4 << 0x10 | local_44;
        iVar4 = uVar10 - uVar9;
      }
      uVar9 = uVar12 >> 0x10;
      uVar5 = DAT_080ba714 & uVar12;
      iVar2 = FUN_080baaf4(iVar4,uVar9);
      iVar1 = FUN_080baa7c(iVar4,uVar9);
      uVar10 = uVar5 * iVar1;
      uVar3 = iVar2 << 0x10 | uVar7 >> 0x10;
      iVar4 = iVar1;
      if (uVar3 < uVar10) {
        iVar4 = iVar1 + -1;
        uVar3 = uVar3 + uVar12;
        if ((uVar12 <= uVar3) && (uVar3 < uVar10)) {
          iVar4 = iVar1 + -2;
          uVar3 = uVar3 + uVar12;
        }
      }
      iVar2 = FUN_080baaf4(uVar3 - uVar10,uVar9);
      uVar9 = FUN_080baa7c(uVar3 - uVar10,uVar9);
      uVar5 = uVar5 * uVar9;
      uVar7 = iVar2 << 0x10 | uVar7 & DAT_080ba714;
      uVar10 = uVar9;
      if (uVar7 < uVar5) {
        uVar10 = uVar9 - 1;
        uVar7 = uVar7 + uVar12;
        if ((uVar12 <= uVar7) && (uVar7 < uVar5)) {
          uVar10 = uVar9 - 2;
        }
      }
      uVar10 = iVar4 << 0x10 | uVar10;
    }
  }
  else if (param_2 < param_4) {
    uVar10 = 0;
    local_44 = 0;
  }
  else {
    if (DAT_080ba738 < param_4) {
      iVar4 = 0x18;
      if (param_4 <= DAT_080ba768) {
        iVar4 = 0x10;
      }
    }
    else {
      iVar4 = 0;
      if (0xff < param_4) {
        iVar4 = 8;
      }
    }
    uVar5 = 0x20 - ((uint)*(byte *)((param_4 >> iVar4) + DAT_080ba76c) + iVar4);
    if (uVar5 == 0) {
      if ((param_4 < param_2) || (uVar12 <= uVar7)) {
        uVar10 = 1;
      }
      else {
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 0x20 - uVar5;
      uVar11 = param_4 << (uVar5 & 0xff) | uVar12 >> (uVar10 & 0xff);
      uVar12 = uVar12 << (uVar5 & 0xff);
      uVar9 = param_2 >> (uVar10 & 0xff);
      uVar6 = param_2 << (uVar5 & 0xff) | uVar7 >> (uVar10 & 0xff);
      uVar10 = uVar11 >> 0x10;
      uVar3 = DAT_080ba8a0 & uVar11;
      iVar4 = FUN_080baaf4(uVar9,uVar10);
      iVar2 = FUN_080baa7c(uVar9,uVar10);
      uVar9 = uVar3 * iVar2;
      uVar8 = iVar4 << 0x10 | uVar6 >> 0x10;
      iVar4 = iVar2;
      if (uVar8 < uVar9) {
        iVar4 = iVar2 + -1;
        uVar8 = uVar8 + uVar11;
        if ((uVar11 <= uVar8) && (uVar8 < uVar9)) {
          iVar4 = iVar2 + -2;
          uVar8 = uVar8 + uVar11;
        }
      }
      iVar2 = FUN_080baaf4(uVar8 - uVar9,uVar10);
      uVar9 = FUN_080baa7c(uVar8 - uVar9,uVar10);
      uVar3 = uVar3 * uVar9;
      uVar6 = iVar2 << 0x10 | uVar6 & DAT_080ba8a0;
      uVar10 = uVar9;
      if (uVar6 < uVar3) {
        uVar10 = uVar9 - 1;
        uVar6 = uVar6 + uVar11;
        if ((uVar11 <= uVar6) && (uVar6 < uVar3)) {
          uVar10 = uVar9 - 2;
          uVar6 = uVar6 + uVar11;
        }
      }
      uVar10 = iVar4 << 0x10 | uVar10;
      uVar9 = uVar12 & DAT_080ba8a0;
      uVar12 = uVar12 >> 0x10;
      uVar8 = uVar9 * (uVar10 & DAT_080ba8a0);
      uVar9 = uVar9 * (uVar10 >> 0x10);
      iVar4 = uVar12 * (uVar10 >> 0x10);
      uVar12 = uVar12 * (uVar10 & DAT_080ba8a0) + (uVar8 >> 0x10) + uVar9;
      if (uVar12 < uVar9) {
        iVar4 = iVar4 + 0x10000;
      }
      uVar9 = iVar4 + (uVar12 >> 0x10);
      if ((uVar6 - uVar3 < uVar9) ||
         ((uVar9 == uVar6 - uVar3 &&
          (uVar7 << (uVar5 & 0xff) < (uVar12 & DAT_080ba8a0) * 0x10000 + (uVar8 & DAT_080ba8a0)))))
      {
        uVar10 = uVar10 - 1;
      }
    }
    local_44 = 0;
  }
  uVar7 = uVar10;
  if (local_54 != 0) {
    uVar7 = -uVar10;
    local_44 = -local_44;
    if (uVar10 != 0) {
      local_44 = local_44 - 1;
    }
  }
  return CONCAT44(local_44,uVar7);
}

