int get_sum(int a, int b)
{
  int min = a;
  int max = b;
  if (a > b) {
    min = b;
    max = a;
  }
  return (max - min + 1) * (min + max) / 2;
}
