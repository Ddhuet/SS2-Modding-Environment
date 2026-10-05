
undefined4 FUN_08093738(void)

{
  undefined4 unaff_lr;
  
  if ((*DAT_0809377c & 0xff) < 0xa0) {
    *DAT_08093780 =
         (short)((int)*(short *)(((uint)(*DAT_0809377c & 0xff) + (uint)*DAT_08093788 & 0xff) * 2 +
                                DAT_08093784) * (uint)*DAT_0809378c >> 8);
  }
  else {
    *DAT_080937a0 = 0;
  }
  return unaff_lr;
}

