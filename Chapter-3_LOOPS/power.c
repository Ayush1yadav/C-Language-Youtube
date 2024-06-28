#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int b;
    printf("Enter power of a number: ");
    scanf("%d", &b);
    int power = 1;
    for(int i = 1; i<=b; i++){
        power = power*a;
    }
    printf("%d",power);
    return 0;
}
