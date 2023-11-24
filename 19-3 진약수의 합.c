//자연수 n이 주어지면 자연수 n의 진약수의 합을 수식과 함께 출력하는 프로그램을 작성(진약수란, 약수 중 자기 자신을 제외한 숫자)

#include<stdio.h>
int main(){
  int n, i, sum=1;
  scanf("%d",&n);
  printf("1");
  for(i=2; i<n; i++){
    if(n%i==0)
    {
      printf(" + %d", i);
      sum+=i;
    }
  }
  printf(" = %d", sum);
  return 0;
}