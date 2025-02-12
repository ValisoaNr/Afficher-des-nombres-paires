#include<stdio.h>

int main ()
{
	int n , i ;//Declaration des variables
	
	printf("\tLES NOMBRES PAIRES ENTRE 1 ET n\n"); //presentation du programme
	printf("veuillez entrer la valeur de n :");
	scanf("%d",&n) ;
	
	for (i=1 ; i<=n ; i++)
	{
		if (  (i%2) ==  0 )//nombre paire si divisible par 2
		{
			printf("%d	", i )  ;//affichage avec espacement
		}
	}
	printf("\n");//Amelioration de l' affichage
	return (0) ;
}
