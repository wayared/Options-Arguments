// Using getopt 

#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

int main(int argc, char **argv){
	int option;
	while ((option = getopt(argc, argv, "cf")) != -1){
		switch (option){
			case 'c':
				printf("You want centigrade\n");
				break;
			case 'f':
				printf("You want farenheit\n");
				break;
			default:
				printf("Error");

		}
	
	}
}
