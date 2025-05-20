#include"matrice.h"

matrice::matrice(int l, int c)
{ 
    cout <<"apl du constructeur :"<< this<<endl;

    ligne = l;
    colone = c;
    tab = new int*[ligne];

    if (tab)
    {
        for (int i = 0; i < ligne; ++i)
        {
            tab[i] = new int[colone];
            
            for (int j = 0; j < colone; ++j)
            {
                tab[i][j] = 0;
            }
        }
    }
}

// constructeur de recopie 
matrice::matrice(const matrice& m)
{
    cout <<"apl du constructeur de copie :"<< this<<endl;
    ligne = m.ligne;
    colone = m.colone;
    tab = new int*[ligne];
    for (int i = 0; i < ligne; ++i)
    {
        tab[i] = new int[colone];
    }
    for (int i = 0; i < ligne; ++i)
    {
        for (int j = 0; j < colone; ++j)
        {
            tab[i][j] = m.tab[i][j];
        }
    }
}

//getteur

int matrice :: getelment(int i, int j) const
{
  if ((i >= 0 && i < ligne) && (j >= 0 && j < colone))
    {
        return tab[i][j];
    }
    else
    {
        cerr << "Erreur : indices (" << i << ", " << j << ") hors limites." << endl;
        return -1; // ou lancer une exception
    }
   
}

void matrice:: setelement(int i, int j , int x)
{
    if ((i >= 0 && i < ligne) && (j >= 0 && j < colone))
    {
        tab[i][j]=x;
    }
    
}

matrice matrice::produit(const matrice& m)
{
    if (colone != m.ligne)
    {
        cerr << "Erreur : dimensions incompatibles pour le produit matriciel." << endl;
        // Tu peux lever une exception ici ou retourner une matrice vide
        return matrice(0, 0);
    }

    matrice p(ligne, m.colone); 

    for (int i = 0; i < ligne; ++i)
    {
        for (int j = 0; j < m.colone; ++j)
        {
            int somme = 0;
            for (int k = 0; k < colone; ++k)
            {
                somme += tab[i][k] * m.tab[k][j];
            }
            p.setelement(i, j, somme);
        }
    }

    return p;
}

void matrice::afficher()
{
    cout << "-----------------------------------" << endl;
    cout << "         MATRICE (" << ligne << " x " << colone << ")         " << endl;
    cout << "-----------------------------------" << endl;

    for (int i = 0; i < ligne; ++i)
    {
        for (int j = 0; j < colone; ++j)
        {
            cout << tab[i][j];
            cout<< "  ";  
        }
        cout << endl;
    }

    cout << "-----------------------------------" << endl;
}


matrice & matrice :: operator=(const matrice& m)
{
    if (this!=&m)
    {
       delete [] this;
       ligne = m.ligne;
    colone = m.colone;
    tab = new int*[ligne];
    for (int i = 0; i < ligne; ++i)
    {
        tab[i] = new int[colone];
    }
    for (int i = 0; i < ligne; ++i)
    {
        for (int j = 0; j < colone; ++j)
        {
            tab[i][j] = m.tab[i][j];
        }
    }
    
    }
    return *this;
}
 
 matrice::~matrice()
 {
    cout <<"apl du destructeur :"<< this<<endl;

    for (int i = 0; i < ligne; i++)
    {
        delete [] tab[i];
    }

    delete [] tab;
    
   
 }
