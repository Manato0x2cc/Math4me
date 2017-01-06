#include <stdio.h>
#include <math.h>

#define E 2.718

double factorial(double);

int main(void){
  double lambda, k, p;
  printf("%s\n","平均回数を教えて");
  scanf("%lf[^123456789.]\n", &lambda);
  printf("%s\n","期待したい値を教えて");
  scanf("%lf[^123456789.]\n", &k);

  p = (pow(lambda, k) * pow(E, -lambda)) / factorial(k);

  printf("実行結果: %lf%%\n", p*100);
}

double factorial(double x){
  if(x == 0) return 1;
  return x * factorial(x-1);
}
