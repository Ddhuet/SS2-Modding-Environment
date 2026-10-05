
undefined4 FUN_080936ac(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_lr;
  
  *DAT_080936ec = 0;
  *DAT_080936f0 = 0x10;
  *DAT_080936f4 = 1;
  FUN_080012d8(DAT_080936f8);
  FUN_08000f64(0x800);
  FUN_080011e4(DAT_080936fc);
  puVar1 = DAT_08093700;
  *DAT_08093700 = 0;
  puVar2 = DAT_08093704;
  *DAT_08093704 = puVar1;
  puVar2[1] = DAT_08093708;
  puVar2[2] = DAT_0809370c;
  return unaff_lr;
}

