#include <stdio.h>
#include <stdlib.h>

float funcao(float n, float i);

void main()
{
	float numero;
	float inicio = 0.0;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	funcao(numero, inicio);
	
	
	system("pause");
}

float funcao(float n, float i)
{
	i=0.0;
	printf("%.1f \t", n);
	
	if(n>i)
	{
		return funcao(n-0.1, i);
	}
	else
	{
		return 0.0;
	}
}
