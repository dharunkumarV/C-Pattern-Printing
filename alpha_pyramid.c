#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}//if n=5;solved this somewhat tricky pattern
//A B C D E 
//B C D E 
//C D E 
//D E 
//E 
