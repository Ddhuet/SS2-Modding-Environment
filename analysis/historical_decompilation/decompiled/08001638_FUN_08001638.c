
undefined8 FUN_08001638(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 unaff_lr;
  
  uVar1 = DAT_0800169c;
  uVar4 = param_1 + 3U & 0xfffffffc;
  if (uVar4 < 0x10) {
    uVar4 = 0x10;
  }
  puVar5 = (uint *)DAT_08001698[2];
  do {
    if (puVar5 == DAT_08001698) {
      puVar5 = (uint *)0x0;
LAB_080016c2:
      return CONCAT44(unaff_lr,puVar5);
    }
    uVar3 = puVar5[1] - (int)puVar5;
    if (uVar4 + 0x10 <= uVar3) {
      if (uVar3 < uVar4 + 0x30) {
        *(uint *)(puVar5[2] + 0xc) = puVar5[3];
        *(uint *)(puVar5[3] + 8) = puVar5[2];
      }
      else {
        iVar2 = puVar5[1] - uVar4;
        puVar6 = (uint *)(iVar2 + -0x10);
        *puVar6 = *puVar6 & 0x80000000 | (uint)puVar5 & DAT_0800169c;
        *(uint *)(iVar2 + -0xc) = puVar5[1];
        *(uint *)puVar5[1] = *(uint *)puVar5[1] & 0x80000000 | (uint)puVar6 & uVar1;
        puVar5[1] = (uint)puVar6;
        puVar5 = puVar6;
      }
      *(byte *)((int)puVar5 + 3) = *(byte *)((int)puVar5 + 3) | 0x80;
      puVar5 = puVar5 + 4;
      goto LAB_080016c2;
    }
    puVar5 = (uint *)puVar5[2];
  } while( true );
}

