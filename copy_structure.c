#include<stdio.h>
#include<string.h>

struct copy_structure
{
    int mynum;
    char myletter;
};

int main(){

struct copy_structure s1; //normal structure
s1.mynum=10;
s1.myletter='y';
printf("%d %c",s1.mynum,s1.myletter);

struct copy_structure s2;
s2=s1; //copy of a structure 1 to structure 2.
printf("\n%d %c",s2.mynum,s2.myletter);

struct copy_structure s3={11,'y'}; //structure in 1 line
printf("\n%d %c",s3.mynum,s3.myletter);
    return 0;
}
