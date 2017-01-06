#import <stdio.h>

int main(void){

  int *a, times, max;

  printf("%s\n", "最初の数を入れてね。");

  scanf("%d[^123456789]\n", a);

  while (*a != 1) {
    if( *a % 2 == 0){
      *a /= 2;
    }
    else {
      *a *= 3;
      *a+=1;
    }

    if(*a > max) max = *a;

    ++times;
  }

  printf("実行回数%d回、最大値%d\n", times, max);
}
