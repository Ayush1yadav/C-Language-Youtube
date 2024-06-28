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
    if(ram<shyam && ram<ajay){
        printf("Ram is youngest\n");
        }
        else if(shyam<ram && shyam<ajay){
            printf("Shyam is youngest\n");
            }
            else{
                printf("Ajay is youngest\n");
                }
                return 0;
}