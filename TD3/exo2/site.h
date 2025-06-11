#ifndef SITE_H
#define SITE_H
#include <iostream>
#include <vector>
using namespace std;

class document {
private:
    string titre;
    vector<string> tab_mot;

public:
    document(string);
    ~document();
    void ajouter(string);
    void afficher() const;        // ➕ afficher les infos du document
    string getTitre() const;      // ➕ utile pour rechercher/supprimer
    bool operator==(const document&) const; // ➕ pour comparer deux documents
};
;

class site {
private:
    vector<document> tab;
public:
    site();
    ~site();
    void ajouter(document);
    void supprimer(); // il faudra définir operator== dans document pour pouvoir cible un document et le supprimmer
    void afficher();
};

#endif
