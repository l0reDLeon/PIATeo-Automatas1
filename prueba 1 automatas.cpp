//Proceso que calcula el alfabeto

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

void alfabeto(char cadena[60]){
	//funcion para obtener el alfabeto de un nombre
	char abc[60];
	int i=0,j=0,k=0;
	int watch;
	int cant = 0;
	
	for(i=0;i<60;i++){
		if(cadena[i]=='\0'){
			cant=i;
			break;
		}
	}
	
	
	for(i=0;i<cant;i++){
		//este primer ciclo va a recorrer el arreglo elemento por elemento
		//de esta manera [a][b][c][d][e] -> [a][b][c][d][e] -> [a][b][c][d][e] 
		//				  ^						^					  ^
		//			 	  |						|					  |
	
		/*printf("\ncadena[%d]----- %c",i,cadena[i]);*/
		watch=1;
		for(j=0;j<i;j++){
			//este segundo ciclo va a recorrer todo el arreglo de nuevo hasta i, 
			//así cuando vayamos en c, habremos recorrido 1={a},2={a,b},3={a,b,c}
			/*printf("\n ||	cadena[%d]----- %c\n",j,cadena[j]);*/
			
			if(cadena[j]==cadena[i]){
				/*printf("->	cadena[j] == cadena[i] (?)\n");
				//printf("->	cadena[%d] == cadena[%d] (?)\n",j,i);
				//printf("->	%c == %c (Yes)",cadena[j],cadena[i]);*/
				watch=0;
			}
		}
		
		if(watch==1){
			abc[k]=cadena[i];
			printf("\nAlfabeto: ");
			for(int x=0;x<=k;x++){
				printf("%c",abc[x]);
			}
			cout<<endl;
			k++;
		}
		
	}
	
	
	printf("\nImprimir alfabeto: ");
	if(abc[0]!='\0'){
		for(int x=0;x<=k;x++){
			printf("%c",abc[x]);
		}
	}
	else{
		for(int x=0;x<cant;x++){
			printf("%c",abc[x]);
		}
	}
	
	cout<<endl;
	//return abc[0];
}

int main(){
	char cad1[60],mat1[' '];//cadena para guardar------------------ASCII ' ' = 32 
	char cad2[60],mat2[' '];//cadena a utilizar sin espacios;------entonces, cad1,cad2,mat1,mat2 
							//-------------------------------------tienen longitud de 32
	char cad3[60]; //Esta cadena va a ser donde estén concatenados
	cad3[0]='\0';

	puts("\nIngrese su nombre completo\n");
	gets(cad1);
	puts("\nIngrese su matricula\n");
	gets(mat1);
	
	strcat(cad3,cad1); //se concatenan
	strcat(cad3,mat1);
	printf("\nLa contenacion es %s\n",cad3);
	
	//determinar el alfabeto
	alfabeto(cad1);
	
	//algoritmo para dejar solo a las que conformarán el alfabeto
	
	
	int i=strlen(cad3);
	char guarda;
	guarda=cad1[0];
	printf("La cadena mide %d y su primer letra es %c",i,guarda);
	
	char inicial=cad3[0];
	int a=0;
	int b=0;
	char alfa[' ']; //long(alfa) = 32;
	for(int j=0;j<i;j++)	
	{
		if(cad1[j]!=32)
		{
			alfa[b]=cad3[j];
			b++;
		}
				
	}
	printf(" la cadena sin espacios %s",alfa);
	return 0;

}

