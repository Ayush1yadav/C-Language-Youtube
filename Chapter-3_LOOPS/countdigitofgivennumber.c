#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count = 0;
    for(int i = 1; n>0; i++){
        n = n/10;
        count = count + 1 ;
    }
            printf("%d ",count);
    return 0;
}