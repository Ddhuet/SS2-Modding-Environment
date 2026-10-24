
bool FUN_08059954(uint param_1)

{
  return (*(uint *)(*DAT_08059968 + 0x38) & 1 << (param_1 & 0xff)) != 0;
}

