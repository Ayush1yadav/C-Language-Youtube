#include <stdio.h>
int main(){
    int percentage;
    printf("Enter your percentage: ");
    scanf("%d", &percentage);
    if(percentage >= 91 && percentage<=100){
        printf("Excellent");
    }
    else if(percentage>=81 && percentage<=90){
        printf("Very Good");
    }
    else if(percentage>=71 && percentage<=80){
        printf("Good");
        }
    else if(percentage>=61 && percentage<=70){
    printf("Can do better");
    }
    else if(percentage>=51 && percentage<=60){
        printf("Average");
    }
    else if(percentage>=41 && percentage<=50){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
return 0;
}