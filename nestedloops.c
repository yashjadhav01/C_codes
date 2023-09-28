#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=2;i++){
        printf("outer:%d\n",i);
        for(j=1;j<=3;j++){
            printf(" inner:%d\n",j);
            for(k=1;k<=2;k++){
                printf("  subinner:%d\n",k);
            }
        }
    }


    return 0;
}