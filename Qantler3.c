#include <stdio.h>//2 3
//1 2 3 
//4 5 6  ->1 2 3 6 5 4
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m-1;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
    }
    for(int i=1;i<m;i++){
        for(int j=n-1;j>=0;j--){
            printf("%d ",mat[i][j]);
        }
    }
}