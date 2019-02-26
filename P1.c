/* Programa 1 */
#include<stdio.h>
#include<stdlib.h>
float costo,cf;
int main()
{
	printf("\n Introduzca el costo de las compras: ");
	scanf("%f",&costo);
	cf=costo*1.16;
	printf("\n EL costo com IVA es de: %.2f \n",cf);
	system("pause");
}
