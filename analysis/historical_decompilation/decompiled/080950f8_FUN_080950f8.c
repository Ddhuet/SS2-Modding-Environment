
void FUN_080950f8(void)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  psVar2 = DAT_0809518c;
  iVar1 = DAT_08095188;
  iVar7 = 0;
  iVar6 = 0;
  uVar4 = 0;
  uVar5 = 0;
  do {
    iVar3 = *(short *)(uVar5 * 2 + iVar1) * 5 >> 8;
    iVar6 = iVar6 + 0x100;
    *psVar2 = *(short *)((uVar4 + 0x40) * 2 + iVar1) >> 3;
    psVar2[1] = (short)((uint)iVar6 >> 8);
    iVar7 = iVar7 + 0x80;
    psVar2[2] = *(short *)(uVar4 * 2 + iVar1) >> 3;
    psVar2[3] = (short)((uint)iVar7 >> 8);
    FUN_08008b40(1,0x32,1,iVar3 + 8U & 0xffff,8U - iVar3 & 0xffff,0);
    uVar5 = uVar5 + 3 & 0xff;
    uVar4 = uVar4 + 1 & 0xff;
    FUN_080003f0();
  } while( true );
}

