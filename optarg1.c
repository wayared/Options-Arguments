// What are command line arguments (argc and argv)?
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
	int i;
	for(i = 1; i < argc; i++){
	    printf("argv[%d]: %s\n", i, argv[i]);
	}
	
	int result = 1;
	for(i = 1; i < argc; i++){
	   int x =strtol(argv[i],NULL,10); //en el primer parametro es lo q tratamos de convertir , 
					  //en el segundo parametro, 
					  //en el tercero va la base de nuestro numero
	   result = result * x;
	}
	printf("Multiplication result is %d\n", result);
	return 0;
}




