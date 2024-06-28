#include <stdio.h>
int main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if(year%4==0){
        printf("Entered year is leap year");
    }
    else{
        printf("Entered year is not leap year");
    }
}