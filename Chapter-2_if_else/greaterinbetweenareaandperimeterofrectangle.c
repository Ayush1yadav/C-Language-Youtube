#include <stdio.h>
int main(){
    int l;
    printf("Enter the value of lenghth: ");
    scanf("%d", &l);
    int b;
    printf("Enter the value of breadth: ");
    scanf("%d", &b);
    int area = l * b;
    printf("The area of the rectangle is: %d\n", area);
    int perimeter = 2*(l+b);
    printf("The perimeter of the rectangle is: %d\n", perimeter);
    if(area>perimeter){
        printf("The area is greater than the perimeter.\n");
        }
    else if(area<perimeter){
        printf("The perimeter is greater than the area.\n");
        }
    else{
        printf("The area and perimeter are equal.\n");
        }
    return 0;
}