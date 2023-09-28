#include <stdio.h>

int main()
{
    char ch;
    printf("Please enter an Aplhabet:");    
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
            printf("%c its a vowel", ch);
        }
        else
        {
            printf("%c its a consonant", ch);
        }
    }
    else
    {
        printf("Please enter an Aplhabet");
    }

    return 0;
}