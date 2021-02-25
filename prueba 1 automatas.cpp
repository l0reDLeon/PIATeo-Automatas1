//Proceso que calcula el alfabeto

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char cad1[' '],mat1[' ']; //cadena para guardar
	char cad2[' '],mat2[' ']; //cadena a utilizar sin espacios;
	
	
	puts("\nIngrese su nombre completo\n");
	gets(cad1);
	puts("\nIngrese su matricula\n");
	gets(mat1);
	
	strcat(cad1,mat1); //se concatenan
	printf("\nLa contenación es %s\n",cad1);
	
	//algoritmo para dejar solo a las que conformarán el alfabeto
	int i=strlen(cad1);
	char guarda;
	guarda=cad1[0];
	printf("La cadena mide %d y su primer letra es %c",i,guarda);
	
	char inicial=cad1[0];
	int a=0;
	int b=0;
	char alfa[' '];
	for(int j=0;j<i;j++)	
	{
		if(cad1[j]!=' ')
		{
			alfa[b]=cad1[j];
			b++;
		}
				
	}
	printf("la cadena sin espacios %s",alfa);
	return 0;

}
