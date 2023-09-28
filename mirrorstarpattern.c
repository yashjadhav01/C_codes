#include <stdio.h>

int main()
{int i,j,n;
   printf("Enter value of n\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        //   printf("%d",i);
        // for(j=1;j<=i;j++)
        // {
        //     printf(" ");
        // }
        for(j=1;j<=i;j++)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }

return 0;
}
