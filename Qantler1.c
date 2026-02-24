#include <stdio.h>
int main() {//steps to reduce to 0 asked in driv,it was quite a easy level probleem
    int n;
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        if(n%2==0){
            n=n/2;
        }
        else if(n%2==1){
            n=n-1;
        }
        count++;
    }
    printf("%d",count);

    return 0;
}
