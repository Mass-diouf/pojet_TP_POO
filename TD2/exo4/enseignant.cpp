#include <cstring>  // Pour strcpy si besoin
#include "enseignant.h"

#include "enseignant.h"

enseignant::enseignant(char* n, char* p, char* d) {
    
    int i = 0;
    while (n[i] != '\0' && i < 29) {
        nom[i] = n[i];
        i++;
    }
    nom[i] = '\0';
    i = 0;
    while (p[i] != '\0' && i < 29) {
        prenom[i] = p[i];
        i++;
    }
    prenom[i] = '\0';
    i = 0;
    while (d[i] != '\0' && i < 29) {
        diplome[i] = d[i];
        i++;
    }
    diplome[i] = '\0';
    for (int i = 0; i < 5; i++) {
        matiere[i][0] = '\0';  // mettre la 1ère case à '\0' signifie une chaîne vide
    }
}

enseignant :: enseignant(const enseignant& e)
{
    int i = 0;
    while (e.nom[i] != '\0' && i < 29) {
        nom[i] = e.nom[i];
        i++;
    } 
     nom[i] = '\0';
     i = 0;
    while (e.prenom[i] != '\0' && i < 29) {
        prenom[i] = e.prenom[i];
        i++;
    }
    prenom[i] = '\0';
     i = 0;
    while (e.diplome[i] != '\0' && i < 29) {
        diplome[i] = e.diplome[i];
        i++;
    }
    diplome[i] = '\0';
     
    for (int i = 0; i < 5; i++) {
        int j=0;
        while (e.matiere[i][j] != '\0' && j < 29)
        {
            matiere[i][j]=e.matiere[i][j];
            j++;
        }
        matiere[i][j]== '\0';
        
    }

}

char * enseignant :: getnom()
{
    return nom;
}
char * enseignant :: getprenom()
{
    return prenom;
}
char * enseignant :: getdiplome()
{
    return diplome;
}

void enseignant:: setmatiere(char * m)
{
    int i=0;
    while (matiere[i][0]!= '\0' && i<5)
    {
        i++;
    }
    if (i<5)
    {
       int j=0;
        while (m[j] != '\0' && j < 29)
        {
            matiere[i][j]=m[j];
            j++;
        }
         matiere[i][j] = '\0'; 
    }
    else {
        cerr << "Erreur : nombre maximal de matières atteint." << endl;
    }
    
}

void enseignant::afficher()
{
    cout << "------------------------------------------" << endl;
    cout << "|   Prenom   |   Nom       |   Diplome    |" << endl;
    cout << "|   " << prenom << "   |   " << nom << "   |   " << diplome << "   |" << endl;
    cout << "------------------------------------------" << endl;

    cout << "------------- Matieres ----------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (matiere[i][0] != '\0') // n'afficher que les matières renseignées
        {
            cout << "|   " << matiere[i] << "   |" << endl;
        }
    }
    cout << "------------------------------------------" << endl;
}
enseignant::~enseignant()
{

}

enseignant& enseignant::operator=(const enseignant& e)
{
    if (this != &e)
    {
        int i = 0;
        while (e.nom[i] != '\0' && i < 29) {
            nom[i] = e.nom[i];
            i++;
        }
        nom[i] = '\0';

        i = 0;
        while (e.prenom[i] != '\0' && i < 29) {
            prenom[i] = e.prenom[i];
            i++;
        }
        prenom[i] = '\0';

        i = 0;
        while (e.diplome[i] != '\0' && i < 29) {
            diplome[i] = e.diplome[i];
            i++;
        }
        diplome[i] = '\0';

        for (int i = 0; i < 5; i++) {
            int j = 0;
            while (e.matiere[i][j] != '\0' && j < 29) {
                matiere[i][j] = e.matiere[i][j];
                j++;
            }
            matiere[i][j] = '\0';
        }
    }
    return *this;
}

