#include <stdio.h>
int main()
{
    int x = 5;
    int y = 8;
    printf("%d\n", (x != y && x<y));
    printf("%d\n", (x <= y || x!=y));
    printf("%d\n", !(x >= y && x==y));
    printf("%d\n", !(x == y || x>y));
    
    return 0;
}