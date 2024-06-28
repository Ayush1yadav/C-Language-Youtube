 #include <stdio.h>
 int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int b;
    printf("Enter another number: ");
    scanf("%d", &b);
    int sum = a + b;
    printf("The sum of the two numbers is: %d\n", sum);
    return 0;
 }