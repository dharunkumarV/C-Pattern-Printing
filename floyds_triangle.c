#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}
//solved floyd triangle with any input for size n
//logic was quite easy just the k value increments inside loop