#include<stdio.h>

int main(){
int i,j,n;
printf("enter the number of lines:");
scanf("%d",&n);

for (i = 1; i <=n; i++){
    for (j=i;j<=n;j++){
        printf("%c",(char)(i+64));
    }
    printf("\n");
}
    return 0;
}