#include <stdio.h>
int main(){
    int n;
    printf("enter a value of ROWS: ");
    scanf("%d",&n);
    int m;
    printf("Enter a value of COLUMNS: ");
    scanf("%d",&m);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            printf("*");
        }
        printf("\n");
    }
}