#include <stdio.h>
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<m;i++){
            sum+=mat[i][j];
        }
        printf("%d\n",sum);
    }
    

    return 0;
}