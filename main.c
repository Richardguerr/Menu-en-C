#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void fibonacci(){
	char *stop;
	
	printf("Fibonacci.. \n");
	
	//gets(stop);
}

void MCD(){
	
	char *stop;
	
	printf("Maximo común divisor \n");
}

int main() {
	

	
	char option;
	char *mainMenu = ">>>>>Menu Principal<<<<<<\n\n"
						"1. Serie de Fibonnacci \n"
						"2. Maximo comun divisor \n"
						"3. Salir \n";
	do{
		
		printf(mainMenu);
		scanf("%c",&option);
		fflush(stdin);
		switch(option){
		
		case '1' : fibonacci();
		break;
		
		case '2' :  MCD();
		break;
		
		case '3' : 
		
		printf("Programa finalizado correctamente!!");
		break;
		}
	}while(option != '3');
	return 0;
}
