//자연수 n이 입력되면 1~n까지의 수중 m의 배수 합을 출력하는 프로그램을 작서앟세요

#include<stdio.h>
int main(){
  int n, m, sum=0;
  scanf("%d %d",&n, &m);

  for (int i=1; i<=n; i++){
    if(i%m==0)
      sum += i;
  }
  printf("%d\n",sum);
  return 0;
}