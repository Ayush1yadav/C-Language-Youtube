#include <stdio.h>

int main() {
    int i, j, n, m;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            if(j==j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
