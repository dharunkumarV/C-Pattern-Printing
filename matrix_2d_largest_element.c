#include <stdio.h>
int main() {//largest element in a matrix
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int max=mat[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]>max){
                max=mat[i][j];
            }
        }
    }
    printf("%d",max);
    

    return 0;
}