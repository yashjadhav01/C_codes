#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter the no of lines of *: ");
    scanf("%d", &n);

for(i=n;i>=1;i--)
    {
       for(j=i; j<=n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}