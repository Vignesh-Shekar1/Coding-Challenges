bool tidyNumber (int number) {
  int prev = 10;
  while (number > 0){
    if (number%10 > prev) return 0;
    prev = number%10; 
    number /= 10;
  }
  return 1 ;
}
