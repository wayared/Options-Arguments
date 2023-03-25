// What are command line arguments (argc and argv)?
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main(){
	int i;
	for(i = 1; i < argc; i++){
	    printf("argv[%d]: %s\n", i, argv[i]);
	}
	
	int result = 1;
	for(i = 1; i < argc; i++){
	   int x =strol(argv[i],NULL,10);
	   result = result * x;
	}
	printf("Multiplication result is %d\n", result);
	return 0;
}




