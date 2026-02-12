#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int mid=n/2+1;
    int midd=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(n%2==1){
                if(i==mid||j==mid){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else if(n%2==0){
                if(i==midd||j==midd){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}