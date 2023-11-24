//자연수 a,b 가 주어지면 A~B까지의 합을 수식과 함께 출력하시오
#include<stdio.h>
int main(){
  int a, b, sum=0, i;
  scanf("%d %d", &a, &b);
  for(i =a; i<b; i++){
    sum += i;
    printf("%d + ", i);
  }
  printf("%d = %d", i ,sum+i);  
}