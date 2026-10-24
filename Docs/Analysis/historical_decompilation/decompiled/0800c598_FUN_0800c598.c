
void FUN_0800c598(uint param_1)

{
  *DAT_0800c5b0 = param_1 & 0xffff;
  *DAT_0800c5b4 = *DAT_0800c5b4 | 0x80000;
  return;
}

