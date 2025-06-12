 #include "matricecreuse.h"


// // on suppose que le matrice donner est une matrice creuse 

// matricecreuse :: matricecreuse( matrice m)
// {
//     int occ=0;
//    for (int i = 0; i < m.ligne; i++)
//    {
//     for (int  j = 0; j < m.colone; j++)
//     {
//         if (m.mat[i][j])
//         {
//             occ++;
//         }
  
//     }
//    nb_elemnt=occ; 
//    }
//    for (int  i = 0; i < 3; i++)
//    {
//      tab[i]= new int[occ];
//    }
//    int indice =0;
//    for (int i = 0; i < m.ligne; i++)
//    {
//     for (int  j = 0; j < m.colone; j++)
//     {
//         if (m.mat[i][j]!=0)
//         {
//             tab[0][indice]=i;
//             tab[1][indice]=j;
//             tab[2][indice]=m.mat[i][j];
//             indice++;
//         }
  
//     }
//    }
   
 
// }

// matricecreuse::~matricecreuse()
// {
//    for (int  i = 0; i < 3; i++)
//    {
//      delete [] tab[i];
//    } 
// }

// void matricecreuse:: affichaege()
// {  
//     cout<<"ROW  :";
//     for (int  i = 0; i < nb_elemnt; i++)
//     {
//       cout<< tab[0][i]<<"  ";
//     }
//     cout<<endl;
//      cout<<"COLUM  :";
//     for (int  i = 0; i < nb_elemnt; i++)
//     {
//        cout<< tab[1][i]<<"  ";
//     }
//        cout<<endl;
//      cout<<"VALUE  :";
//     for (int  i = 0; i < nb_elemnt; i++)
//     {
//        cout<< tab[2][i]<<"  ";
//     }
    
// }

//================= PARTIE II ================


matricecreuse ::matricecreuse()
{
    start=nullptr;

}




void matricecreuse::ajouter(l nouveau) {
    if (!start) {
        start = nouveau;
    } else {
        l tmp = start;
        while (tmp->suiv) {
            tmp = tmp->suiv;
        }
        tmp->suiv = nouveau;
    }
    nouveau->suiv = nullptr;
}


l matricecreuse :: tete()
{
    return start;
}

void matricecreuse::affichage() {
    l tmp = start;
    while (tmp) {
        cout << "Ligne: " << tmp->row << ", Colonne: " << tmp->col << ", Valeur: " << tmp->val << endl;
        tmp = tmp->suiv;
    }
}



matricecreuse::matricecreuse(const matricecreuse& m) {
    start = nullptr;
    l tmp = m.start;
    while (tmp) {
        l nouveau = new liste{tmp->row, tmp->col, tmp->val, nullptr};
        ajouter(nouveau);
        tmp = tmp->suiv;
    }
}

matricecreuse& matricecreuse::operator=(const matricecreuse& m) {
    if (this != &m) {
        // vider l’actuelle
        while (start) {
            l tmp = start;
            start = start->suiv;
            delete tmp;
        }

        // copier la nouvelle
        start = nullptr;
        l tmp = m.start;
        while (tmp) {
            l nouveau = new liste{tmp->row, tmp->col, tmp->val, nullptr};
            ajouter(nouveau);
            tmp = tmp->suiv;
        }
    }
    return *this;
}




matricecreuse::~matricecreuse() {
    l tmp;
    while (start) {
        tmp = start;
        start = start->suiv;
        delete tmp;
    }
}
