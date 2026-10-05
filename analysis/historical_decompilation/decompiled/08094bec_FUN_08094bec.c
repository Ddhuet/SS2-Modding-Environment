
void FUN_08094bec(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_08094c4c;
  iVar5 = 0;
  iVar4 = 0;
  uVar3 = 0;
  do {
    sVar1 = *(short *)(uVar3 * 2 + DAT_08094c50);
    iVar4 = iVar4 + -0xaa;
    iVar5 = iVar5 + 0x80;
    *(short *)(iVar2 + 2) = (short)((uint)iVar4 >> 8);
    *(short *)(iVar2 + 6) = (short)((uint)iVar5 >> 8);
    FUN_08008b40(1,0x22,1,(sVar1 * 5 >> 8) + 10U & 0xffff,0x10,0);
    uVar3 = uVar3 + 3 & 0xff;
    FUN_080003f0();
  } while( true );
}

