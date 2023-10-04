#include<stdio.h>
#include<string.h>
struct string_structure
{
     int mynum;
     char myletter;
     char string[10];
};

int main(){
struct string_structure s1;
s1.mynum=10;
s1.mynum=13;// modify the structure.
printf("%d\n",s1.mynum);

s1.myletter='Y';
printf("%c\n",s1.myletter);

strcpy(s1.string, "Yash Jadhav");//taking value of string copy in structure.
printf("%s\n",s1.string);

printf("My name is %s\nMy number is %d\nMy first letter is %c",s1.string,s1.mynum,s1.myletter);

    return 0;
}