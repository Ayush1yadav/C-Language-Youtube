 #include<stdio.h>
 int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int r = 0;
    int ld = 0;
    while(n>0){
        ld = n%10;
        r = r*10 + ld;
        n = n/10;
        }
        printf("%d",r);
 }