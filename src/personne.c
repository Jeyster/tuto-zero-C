#include <stdio.h>
#include <stdlib.h>
#include "personne.h"

void remplirPersonne(Personne *personne)
{
	printf("Quel est votre nom ?\n");
	scanf("%s", personne -> nom);

	printf("Quel est votre prenom ?\n");
	scanf("%s", personne -> prenom);


	printf("Quel est votre age ?\n");
	scanf("%d", & personne -> age);


	printf("Quel est votre sexe (1 : garcon, 0 : fille) ?\n");
	scanf("%d", &personne -> garcon);
}

void afficherPersonne(Personne *personne)
{
	printf("%s %s\n", personne -> prenom, personne -> nom);
	printf("%d ans\n", personne -> age);
	if (personne -> garcon == 1)
	{
		printf("sexe : gracon\n");
	}
	else
	{
		printf("sexe : fille\n");
	}
}
