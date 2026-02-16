#include <stdio.h>
int main() {//asked in qantler,easy to solve count no.of.digits,even-1,odd print mid element//12345=n->3
    int n;
    scanf("%d",&n);
    int org=n;
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    if(count%2==0){
        printf("-1");
    }
    else{
        int mid=count/2;
        for(int i=0;i<mid;i++){
            org=org/10;
        }
        printf("%d",org%10);
    }

    return 0;
}