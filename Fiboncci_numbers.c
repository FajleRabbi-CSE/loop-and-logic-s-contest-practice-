#include<stdio.h>
int main(){
  int N;
  scanf("%d",&N);

  int a=1, b=1, fib;
  if(N == 1 || N == 2){
    printf("1\n");
  }
  for(int i = 3; i <= N; i++){
    fib = a + b;
    a = b;
    b = fib;
  }
  printf("%d\n",b);
  return 0;
}