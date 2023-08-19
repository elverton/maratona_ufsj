#include <stdio.h>

int main(){

    	char c;
    	int count = 0;
    	while((c = getchar()) != EOF){
            	if(isdigit(c)) {
                    	count += c - '0';
            	}
            	else if (isalpha(c) || c == '*'){
                    	if(c == 'b') {
                            	for(int i=0; i < count; i++)
                                    	putchar(' ');
                    	} else {
                            	for(int i=0; i < count; i++)
                                    	putchar(c);
                    	}
                    	count = 0;
            	} else printf("\n");
    	}
    	return 0;
}
