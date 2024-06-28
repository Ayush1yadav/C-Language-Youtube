 #include<stdio.h>
 int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int a = 1;
  for(int i = 1; i<=n; i++){
    a = a*i;
    printf("factorial of %d is %d\n",i,a);
  }
  return 0;
 }