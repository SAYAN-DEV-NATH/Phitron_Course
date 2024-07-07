#include <stdio.h>

int main(){
    int n, l, i,j,ans;
    scanf("%d",&n);
    int a[] = {1,3,5,7,9,11,13,15,17,19,21};
    for(i=0;i<11;i++){
        if(a[i]==n){
            l = i + 6;
            ans = a[i];
            break;
        }
    }
    int s = l-1, k = 1;
    for(i=1;i<=l;i++){
        for(j=1;j<=s;j++){
            printf(" ");
        }
        for(j=1;j<=k;j++){
            printf("*");
        }
        s--;
        k += 2;
        printf("\n");
    }
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf(" ");
        }
        for(j=1;j<=ans;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}