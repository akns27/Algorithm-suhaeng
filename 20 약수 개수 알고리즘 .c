#include<stdio.h>
int a[50000];
int main(){
  int i, n, j;
  scanf("%d", &n);
  for(i=1; i<=n; i++)
    for(j=1; j<=n; j++)
      a[j]++;
    printf("%d", a[i]);
  return 0;
}
