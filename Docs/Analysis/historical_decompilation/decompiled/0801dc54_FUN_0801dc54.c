
ushort FUN_0801dc54(void)

{
  ushort uVar1;
  
  if (*(ushort *)(*DAT_0801dc64 + 0x10) == 8) {
    uVar1 = 6;
  }
  else {
    uVar1 = *(ushort *)(*DAT_0801dc64 + 0x10) & 0xff;
  }
  return uVar1;
}

