#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "tableaux.h"
#include "personne.h"

#define NOMBRE_JOUEURS 2

int main(int argc, char *argv[])
{

	setbuf(stdout, NULL);

	/* Exercices sur Tableaux */

	/*
	int tableau[10] = {7,3,5,4,1,4,15,2,5,8};
	int tableauCopie[10] = {0};

	printf("Somme tableau = %d\n", sommeTableau(tableau, 10));
	printf("Moyenne tableau = %f\n", moyenneTableau(tableau, 10));

	printf("Tableau a copier avant copie : ");
	afficherTableau(tableauCopie, 10);

	copie(tableau, tableauCopie, 10);
	printf("\nTableau a copier après copie : ");
	afficherTableau(tableauCopie, 10);

	int valeurMax = 4;
	printf("\nTableau à copier et dont les valeurs suppérieures à %d sont mises à 0 : ", valeurMax);
	maximumTableau(tableauCopie, 10, valeurMax);
	afficherTableau(tableauCopie, 10);
	*/


	/* Exercices sur Strucutres */
	Personne joueurs[NOMBRE_JOUEURS];

	for (int i = 0; i < NOMBRE_JOUEURS; i++)
	{
		remplirPersonne(&joueurs[i]);
		afficherPersonne(&joueurs[i]);
	}


    return 0;
}
