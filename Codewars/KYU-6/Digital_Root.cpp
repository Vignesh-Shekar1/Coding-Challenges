int digital_root(int n)
{
  if (n % 9 != 0 || n == 0) return n % 9;
  else return 9;
}
