#include <stdio.h>

int main(){


	for ( int i = 0; i <= 127; i++){
		if (i % 10 == 0){
			printf("\n");}
		
		printf("%c ", i);
	}
	
	
	return 0;
}