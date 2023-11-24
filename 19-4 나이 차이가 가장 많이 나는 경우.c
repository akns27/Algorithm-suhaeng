#include<stdio.h>
int main(){
  int i, n, age, max = 0, min=1000;
  scanf("%d", &n);
  
  for(i=1; i<=n; i++){
    scanf("%d", &age);

    if(age > max)
      max = age;
    
    if(age < min)
      min = age;
  }
  printf("%d\n", (max-min));
  return 0;
}