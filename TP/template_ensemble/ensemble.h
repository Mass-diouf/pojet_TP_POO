#ifndef ENSEMBLE_H
#define ENSEMBLE_H
#include<iostream>
using namespace std;

template<class t>
class ensemble
{
private:
    int taille;
    int position;
    int courant ;
    t *tab;
public:
    ensemble(int );
    ensemble(const ensemble& e);
    int cardinal();
    void ajouter(t ); // j ai mis void parsceque c est l objet appelant qui est modifier
    void supprimer(t); // j ai mis void parsceque c est l objet appelant qui est modifier
    bool contient(t ); // ici j verifie si un element donner en parametre est dans l ensemble
    void afficher();
    ensemble & operator<<(t ); // j retourner une referance parceque on modifie l objet apple cette fonction permet d ajouter un element dans le tableau
    ensemble & operator>>(t ); // j retourner une referance parceque on modifie l objet apple cette fonction permet de supprimer un element dans le tableau
    bool operator%(t ) const; //permet de verient la presence d un elemnt dans le tableau
    ensemble & operator=(const ensemble &); 
    ensemble operator+(const ensemble &); // ici j ne retoune pas de reference car c est un variable local qu on vas retourner cette foncton fait l union de deux ensemble
    ensemble operator*(const ensemble &); // ici j ne retoune pas de reference car c est un variable local qu on vas retourner cette fonction fait l intersection de deux ensemble 
    void init(); //initialise le parcour d un ensemble
    bool existe();//teste s il y a encors un elemnt a traiter
    t * prochain(); // retounr le prochain element a traiter 

};


#endif

//==================== IMPLEMENTATION ===============================


template<class t>
ensemble< t> :: ensemble(int val)
{
    taille=val;
    position=0;
    courant=0;
    tab = new t [taille];

}

template<class t>
ensemble< t> :: ensemble(const ensemble & e)
{
    taille =e.taille;
    position=e.position;
    courant = e.courant;
    tab= new t[taille];
    int i =0;
    for (int i = 0; i < courant; i++)
    {
        tab[i]=e.tab[i];
    }
    
    
}

template<class t>
void ensemble< t> :: ajouter(t a)
{
    if (!contient(a))
    {
        tab[courant]=a;
        courant++;
    }
    
}

template<class t>
bool ensemble< t> :: contient(t a)
{
    int i=0;
    while (i<courant)
    {
      if (tab[i]==a)
      {
        return true;
      }
      i++;
    }
    return false;
    
}

template<class t>
void ensemble< t> :: afficher()
{
   int i=0;
    while (i<courant)
    {
        cout<< "  "<< tab[i]<< endl;
        i++;
    }
}
template<class t>
void ensemble<t>::supprimer(t a) {
    for (int i = 0; i < courant; i++) {
        if (tab[i] == a) {
            for (int j = i; j < courant - 1; j++) {
                tab[j] = tab[j + 1];
            }
            courant--;
            break;
        }
    }
}

template<class t>
ensemble<t>& ensemble<t>::operator<<(t a) {
    ajouter(a);
    return *this;
}

template<class t>
ensemble<t>& ensemble<t>::operator>>(t a) {
    supprimer(a);
    return *this;
}

template<class t>
bool ensemble<t>::operator%(t a) const {
    for (int i = 0; i < courant; i++) {
        if (tab[i] == a) return true;
    }
    return false;
}
template<class t>
ensemble<t>& ensemble<t>::operator=(const ensemble<t>& e) {
    if (this != &e) {
        delete[] tab;
        taille = e.taille;
        courant = e.courant;
        position = e.position;
        tab = new t[taille];
        for (int i = 0; i < courant; i++) {
            tab[i] = e.tab[i];
        }
    }
    return *this;
}
template<class t>
ensemble<t> ensemble<t>::operator+(const ensemble<t>& e) {
    ensemble<t> resultat(taille + e.taille);
    for (int i = 0; i < courant; i++) {
        resultat.ajouter(tab[i]);
    }
    for (int i = 0; i < e.courant; i++) {
        resultat.ajouter(e.tab[i]);
    }
    return resultat;
}

template<class t>
ensemble<t> ensemble<t>::operator*(const ensemble<t>& e) {
    ensemble<t> resultat(min(taille, e.taille));
    for (int i = 0; i < courant; i++) {
        if (e.contient(tab[i])) {
            resultat.ajouter(tab[i]);
        }
    }
    return resultat;
}

template<class t>
void ensemble<t>::init() {
    position = 0;
}

template<class t>
bool ensemble<t>::existe() {
    return position < courant;
}

template<class t>
t* ensemble<t>::prochain() {
    if (existe()) {
        return &tab[position++];
    }
    return nullptr;
}
