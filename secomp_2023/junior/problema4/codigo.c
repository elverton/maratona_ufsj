#include <stdio.h>
int main() {
   char str[300];
   char c;
   int i;
   while(1){
	fgets(str, 300, stdin);
	if(feof(stdin)) break;
	str[strlen(str)-1] = '\0';
   	for(i=0;str[i]!='\0';i++){
      		c=str[i]-7;
        	printf("%c",c);
   	}
   	printf("\n");
   }
   return 0;
}
