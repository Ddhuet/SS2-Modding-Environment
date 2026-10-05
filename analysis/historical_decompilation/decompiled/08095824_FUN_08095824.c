
undefined4 FUN_08095824(undefined4 param_1,char param_2)

{
  undefined4 unaff_lr;
  uint local_c;
  
  FUN_08000a34(1,0,0,0,0);
  FUN_080009f8(0xf00,0,0);
  FUN_08000990(2,0);
  if (param_2 == '\x01') {
    FUN_080009c0(0x1400,0x8000,0);
  }
  else {
    FUN_080009c0(0x1400,0,0);
  }
  local_c = local_c & DAT_080958d0 | DAT_080958d4;
  FUN_08000aa8(2,&local_c);
  FUN_080924f0(5,0x1c);
  FUN_080958d8();
  FUN_080958f8(0,0);
  FUN_08095904(0xf8,0xf8);
  FUN_08095910(0x200);
  FUN_0800c548(1);
  FUN_0800c598(1);
  FUN_08098324(1);
  FUN_08000940();
  return unaff_lr;
}

