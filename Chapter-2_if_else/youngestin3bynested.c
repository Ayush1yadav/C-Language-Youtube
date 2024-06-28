#include <stdio.h>
int main(){
    int ram;
    printf("Enter age of ram: ");
    scanf("%d",&ram);
    int shyam;
    printf("Enter age of shyam: ");
    scanf("%d",&shyam);
    int ajay;
    printf("Enter age of ajay: ");
    scanf("%d",&ajay);
    if(ram<shyam){
        if(ram<ajay){
            printf("Ram age which is %d is youngest",ram);
        }
        else{
            printf("Ajay age which is %d is youngest",ajay);
        }
    }
    else{
        if(shyam<ram){
            printf("Shyam age which is %d is youngest",shyam);
        }
        else{
            printf("Ajay age which is %d is youngest",ajay);
        }
    }
        return 0;
}