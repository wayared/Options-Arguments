// Using getopt 

#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

void print_usage(){
	printf("Usage: temp -c <temp> | temp -f <temp> \n");
	exit(2);	
}

void print_farenheit(float temp){
	float f = ((temp * 9) / 5) + 32;
	printf("%.2f centigrade is %.2f fareheit\n",temp,f);
}

void print_centigrade(float temp){
	float c = ((temp - 32) * 5) / 9;
	printf("%.2f farenheit is %.2f centigrade\n",temp,c);

}


int main(int argc, char **argv){
	int option;
	int cflag = 0;
	int fflag = 0;
	while ((option = getopt(argc, argv, "c:f:")) != -1){ //se coloca : al lado derecho de la opcion que deseas que susargumento sean obligatorios, 
							     //en este caso no hara la operacion si no le pasas un argumento (el numero de temperatura) 
		switch (option){
			case 'c':
				if(cflag){
					print_usage();
				}else {
					cflag ++;
					fflag++;
				}
				//printf("You want centigrade\n");
				print_farenheit(atof(optarg));   //atof convierte el argumento a float
				break;
			case 'f':
				if(fflag){
					printf("Only one option\n");
					exit(1);
				}else{
					fflag++;
					cflag++;
				}
				//printf("You want farenheit\n");
				print_centigrade(atof(optarg));
				break;
			default:
				printf("Error");

		}
	
	}
}
