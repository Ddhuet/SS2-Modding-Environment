
undefined4 FUN_08094d0c(void)

{
  undefined2 *puVar1;
  undefined4 unaff_lr;
  uint local_c;
  
  FUN_08000a34(1,0,0,0,0);
  FUN_080009f8(0xf00,0,0);
  FUN_08000990(0,0);
  FUN_080009c0(0x1300,0,0);
  local_c = local_c & DAT_08094db4 | DAT_08094db8;
  FUN_08000aa8(0,&local_c);
  FUN_080924f0(8,0x18);
  local_c = CONCAT22(local_c._2_2_,(short)DAT_08094dbc);
  FUN_08000aa8(1,&local_c);
  FUN_080924f0(9,0x1c);
  puVar1 = DAT_08094dc0;
  DAT_08094dc0[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  FUN_08008b40(0,0,1,0,0,0);
  FUN_0800c548(2);
  FUN_0800c598(2);
  FUN_08098324(2);
  FUN_08095190();
  FUN_080951f0();
  FUN_08000940();
  return unaff_lr;
}

