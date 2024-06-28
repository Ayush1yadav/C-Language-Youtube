#include <stdio.h>
int main(){
    int cp;
    printf("Enter your Cost Price: ");
    scanf("%d",&cp);
    int sp;
    printf("Enter your Selling Price: ");
    scanf("%d",&sp);
    if(sp>cp){
        int profit = sp - cp;
        printf("You have made a profit of Rs. %d\n",profit);
        }
    else if(sp<cp){
        int loss = cp - sp;
        printf("You have made a loss of Rs. %d\n",loss);
        }
    else{
        printf("You have neither made a profit nor a loss.\n");
        }
return 0;
}