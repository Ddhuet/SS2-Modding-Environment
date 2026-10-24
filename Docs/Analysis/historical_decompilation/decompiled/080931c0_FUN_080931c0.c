
undefined4 FUN_080931c0(void)

{
  undefined2 *puVar1;
  undefined4 unaff_lr;
  uint local_c;
  
  FUN_08000a34(1,0,0,0,0);
  FUN_080009f8(0xf00,0,0);
  FUN_08000990(0,0);
  FUN_080009c0(0x1300,0,0);
  local_c = local_c & DAT_08093254 | DAT_08093258;
  FUN_08000aa8(0,&local_c);
  FUN_080924f0(10,0x18);
  local_c = CONCAT22(local_c._2_2_,(short)DAT_0809325c);
  FUN_08000aa8(1,&local_c);
  FUN_080924f0(0xb,0x1c);
  puVar1 = DAT_08093260;
  DAT_08093260[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  FUN_0800c548(1);
  FUN_0800c598(1);
  FUN_08098324(1);
  FUN_080936ac();
  FUN_08000940();
  return unaff_lr;
}

