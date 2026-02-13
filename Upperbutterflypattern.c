#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j<=n+i;j++){
            printf("* ");
        }
        for(int j=1;j<=2*n-2*i-2;j++){
            printf("  ");
        }
        for(int j=n;j<=n+i;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
//solved using 1 outer loop & 3 inner loops(1 for star,other 2 for space//