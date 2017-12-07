#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[], int tailleTableau)
{
	int somme = 0;
	for (int i = 0; i < tailleTableau; i++)
	{
		somme += tableau[i];
	}

	return somme;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
	double moyenne = 0;
	double somme = 0;
	for (int i = 0; i < tailleTableau; i++)
	{
		somme += tableau[i];
	}

	moyenne = somme / tailleTableau;
	return moyenne;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{

	for (int i = 0; i < tailleTableau; i++)
	{
		tableauCopie[i] = tableauOriginal[i];
	}

}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
	for (int i = 0; i < tailleTableau; i++)
	{
		if (tableau[i] > valeurMax)
		{
			tableau[i] = 0;
		}
	}
}

void afficherTableau(int tableau[], int tailleTableau)
{
	for (int i = 0; i < tailleTableau; i++)
	{
		printf("%d ",tableau[i]);
	}
}

