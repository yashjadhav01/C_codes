#include <stdio.h>
int main(){
 FILE *fptr;
 fptr = fopen("textfilename.txt", "r");
 char myString[100];
 
if(fptr != NULL) {
 while(fgets(myString, 100, fptr)) {
 printf("%s", myString);
}
}
else{
    printf("not able to open th file");
}
fclose(fptr);

return 0;
}