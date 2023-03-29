// Using getopt 

#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

void print_usage(){
	printf("Usage: temp -c <temp> | temp -f <temp> \n");
	exit(2);	
}

void print_farenheit(){
	float f = ((temp * 9) / 5) + 32;
	printf("%.2f centigrade is %.2f fareheit\n",temp,f);
}

void print_centigrade(float temp){
	float c = ((temp - 32) * 5) / 9;
	printf("%.2f farenheit is %.2f centigrade\n",temp,c);

}


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
