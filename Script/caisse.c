#include <stdlib.h>
#include <stdio.h>

double aleatoire()

{
    double nombre = rand();
   //printf("%.2f\n", nombre);
   return nombre ;
}

int main(int argc, char const *argv[])
{
	double rand = aleatoire();
	double num = 0.0;

		printf("veuillez entrez votre valeur : ");
		scanf("%lf" ,&num);

	while (num < rand){
		printf("valeur inferieure\n");
		printf("veuillez entrez votre valeur : ");
		scanf("%lf" ,&num);
	}
	return 0;
}


