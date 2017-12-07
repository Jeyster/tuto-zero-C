#ifndef DEF_PERSONNE

#define DEF_PERSONNE

/* Structure */
typedef struct Personne Personne;
struct Personne
{
    char nom[100];
    char prenom[100];

    int age;
    int garcon; // Booléen : 1 = garçon, 0 = fille
};

/* Prototypes */
void remplirPersonne(Personne *personne);
void afficherPersonne(Personne *personne);

#endif
