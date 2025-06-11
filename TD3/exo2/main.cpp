#include "site.h"


int main() 
{
    site monSite;

    document doc1("C++ Tutoriel");
    doc1.ajouter("programmation");
    doc1.ajouter("langage");
    doc1.ajouter("objet");

    document doc2("Python Guide");
    doc2.ajouter("script");
    doc2.ajouter("interprete");

    monSite.ajouter(doc1);
    monSite.ajouter(doc2);

    monSite.afficher(); // 👈 Affiche tous les documents
}