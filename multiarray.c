#include <stdio.h>
int main()
{
    int i, j, k;
    int a[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {

                printf("a[%d][%d][%d]=%d\n", i, j, k, a[i][j][k]);
            }
        }
    }

    return 0;
}
