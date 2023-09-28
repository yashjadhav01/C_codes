#include<stdio.h>
int sum(int k);//function declare

int main() { //main class
 int result = sum(100);
 printf("%d", result);
 return 0;
}
int sum(int k) { //function defination
 if (k > 0) {
 return (k + sum(k - 1)); //function calling inside a function is known as recursion
} else {
 return 0;
}
}
