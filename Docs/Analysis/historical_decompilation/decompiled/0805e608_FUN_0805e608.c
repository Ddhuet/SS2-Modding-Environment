
undefined8 FUN_0805e608(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  int in_stack_00000000;
  undefined4 in_stack_00000004;
  
  uVar4 = 0;
  do {
    if (((int)(uint)*DAT_0805e638 >> uVar4 & 1U) == 0) goto LAB_0805e62c;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 4);
  uVar4 = 0xff;
LAB_0805e62c:
  if (uVar4 != 0xff) {
    puVar1 = (undefined4 *)(*DAT_0805e67c + uVar4 * 0x88);
    *(char *)(puVar1 + 0x1c) = (char)uVar4;
    uVar2 = FUN_0805ddf0(0,0xe,0x1b,3);
    puVar1[10] = uVar2;
    if (in_stack_00000000 == -2) {
      FUN_08065784(puVar1 + 0xb,DAT_0805e680,0,0x80000000,0);
    }
    else if (0 < in_stack_00000000) {
      in_stack_00000000 = 0x8c;
    }
    if (puVar1[10] != 0) {
      *(undefined1 *)((int)puVar1 + 0x69) = 1;
      *(undefined1 *)((int)puVar1 + 0x6a) = 0xf;
      *(undefined1 *)(puVar1 + 0x1a) = 2;
      uVar2 = FUN_08006d98(in_stack_00000004);
      puVar1[0x18] = uVar2;
      *(undefined2 *)(puVar1 + 0x1b) = 0;
      *(undefined2 *)((int)puVar1 + 0x6e) = 0;
      puVar1[0x1d] = 1;
      puVar1[0x21] = in_stack_00000000;
      *(undefined2 *)(puVar1 + 0x20) = 0;
      *(undefined2 *)(puVar1 + 0x1e) = 0;
      *(undefined2 *)((int)puVar1 + 0x7a) = 0;
      *(undefined2 *)(puVar1 + 0x1f) = 0;
      *(undefined2 *)((int)puVar1 + 0x7e) = 0;
      puVar1[0x19] = 0;
      puVar1[3] = DAT_0805e6e4;
      puVar1[9] = 0;
      while( true ) {
        iVar3 = FUN_08001494(0x800);
        puVar1[8] = iVar3;
        if (iVar3 != 0) break;
        FUN_080003f0();
      }
      puVar1[4] = iVar3 + DAT_0805e72c;
      puVar1[2] = 0x15;
      *puVar1 = 0;
      puVar1[6] = 0;
      FUN_08000274(puVar1,puVar1);
      *DAT_0805e730 = (byte)(1 << *(sbyte *)(puVar1 + 0x1c)) | *DAT_0805e730;
      goto LAB_0805e722;
    }
  }
  puVar1 = (undefined4 *)0x0;
LAB_0805e722:
  return CONCAT44(unaff_lr,puVar1);
}

