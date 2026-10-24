
/* WARNING: Removing unreachable block (ram,0x0805f7c8) */
/* WARNING: Removing unreachable block (ram,0x0805f7cc) */

undefined8 FUN_0805f60a(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int unaff_r9;
  uint unaff_r10;
  int in_stack_00000058;
  int in_stack_000000b4;
  uint in_stack_000000b8;
  int in_stack_000000bc;
  int in_stack_000000d0;
  
  iVar1 = FUN_0800c5e8();
  if ((iVar1 == 0) && (in_stack_000000bc != 0)) {
    if (in_stack_000000d0 != 0) {
      FUN_08019f30(DAT_0805f724,0x1b,0x11);
    }
    iVar1 = 0;
    if (in_stack_000000b8 < 0x80000000) {
      puVar4 = &stack0x00000004;
      do {
        FUN_08019f30(puVar4,*(undefined1 *)(unaff_r9 + 0x69),
                     in_stack_000000b4 + (uint)*(byte *)(unaff_r9 + 0x6a) + iVar1 * 2 & 0xffff);
        puVar4 = puVar4 + 0x24;
        iVar1 = iVar1 + 1;
      } while (iVar1 <= (int)in_stack_000000b8);
    }
    if (unaff_r10 != DAT_0805f728) {
      FUN_08000af0(0x1f,in_stack_00000058 + unaff_r10 * 0x20,1);
      (&stack0x00000068)[unaff_r10] = 0xf;
      FUN_0806585c(&stack0x0000004c,(uint)*(byte *)(unaff_r9 + 0x69) * 8 + 0x18,
                   (uint)*(byte *)(unaff_r9 + 0x6a) * 8 + -0x28,unaff_r10 & 0xffff);
    }
    if ((*(int *)(unaff_r9 + 0x74) == 6) && (*(int *)(unaff_r9 + 0x84) == -2)) {
      if (*(short *)(unaff_r9 + 0x80) == 0) {
        iVar1 = unaff_r9 + 0x2c;
        FUN_0806599c(iVar1,4,unaff_r9 + 0x78,unaff_r9 + 0x7c);
        pbVar5 = (byte *)(unaff_r9 + 0x6a);
        FUN_0806585c(iVar1,0x78,(uint)*pbVar5 * 8 + -0x18,8);
        FUN_0806585c(iVar1,0x88,(uint)*pbVar5 * 8 + -0x18,5);
        FUN_08065890(iVar1,0x68,(uint)*pbVar5 * 8 + -0x18,4);
      }
      else {
        iVar1 = unaff_r9 + 0x2c;
        FUN_0806599c(iVar1,5,unaff_r9 + 0x7a,unaff_r9 + 0x7e);
        pbVar5 = (byte *)(unaff_r9 + 0x6a);
        FUN_0806585c(iVar1,0x78,(uint)*pbVar5 * 8 + -0x18,9);
        FUN_08065890(iVar1,0x88,(uint)*pbVar5 * 8 + -0x18,5);
        FUN_0806585c(iVar1,0x68,(uint)*pbVar5 * 8 + -0x18,4);
      }
    }
  }
  FUN_080003f0();
  iVar1 = FUN_0805ebca();
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x28);
    if (*(char *)(iVar3 + 0x30) == '\x03') {
      if (((int)(uint)*DAT_0805f7e4 >> *(sbyte *)(iVar3 + 0x31) & 1U) != 0) {
        *(undefined1 *)(iVar3 + 0x30) = 4;
        FUN_08059a8c(0xdd);
      }
      *(undefined4 *)(iVar1 + 0x74) = 7;
    }
    else if (*(char *)(iVar3 + 0x30) != '\0') {
      uVar2 = 0;
      goto LAB_0805f7fa;
    }
  }
  uVar2 = 1;
LAB_0805f7fa:
  return CONCAT44(0x805f791,uVar2);
}

