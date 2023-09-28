#include<stdio.h>

int main(){
int score;
score=67;
// printf("Enter your score:%d",score);
if(score>=90 & score<100)
printf("\nGrade=A");
else if(score>=75 & score<90)
printf("\nGrade=B");
else if(score>=60 & score<75)
printf("\nGrade=C");
else if(score>=40 & score<60)
printf("\nGrade=D");
else
printf("You are fail.");
    return 0;
}