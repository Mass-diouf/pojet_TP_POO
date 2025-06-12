#include"pile.h"


pile ::pile()
{
     cout<<"-------------------APL DU CONSTRUCTEUR-------------------------"<<endl;

    taille =0;
   tab = new element[5]; 
}
pile ::pile(const pile & p)
{
     cout<<"-------------------APL DU CONSTRUCTEUR DE COPIE-------------------------"<<endl;

     taille = p.taille;
    tab = new element[taille];
    for (int i = 0; i < taille; ++i)
        tab[i] = p.tab[i];
   
}


pile& pile::operator=(const pile& p)
{
    if (this != &p)
    {
        delete[] tab;
        taille = p.taille;
        tab = new element[taille];
        for (int i = 0; i < taille; ++i)
            tab[i] = p.tab[i];
    }
    return *this;
}




pile ::~pile()
{
     cout<<"-------------------APL DU DESTRUCTEUR-------------------------"<<endl;

    delete [] tab;
}


void pile::empiler(element val)
{
    if (taille < 5)
    {
        for (int i = taille; i > 0; --i)
            tab[i] = tab[i-1];
        tab[0] = val;
        taille++;
    }
    else
        cout << "Pile pleine." << endl;
}

void pile::depiler()
{
    if (!estvide())
    {
        for (int i = 0; i < taille - 1; ++i)
            tab[i] = tab[i + 1];
        taille--;
    }
    else
        cout << "Pile vide." << endl;
}



element pile::sommet() const
{
    if (!estvide())
        return tab[0];
    else
    {
        cout << "Pile vide ! Aucun sommet." << endl;
        // Si tu peux, lever une exception sinon retourner une valeur par défaut
        return element{};  // valeur par défaut
    }
}

bool pile :: estvide() const
{
    return (taille==0);
}

void pile :: afficher()
{
   cout<<endl;
   cout<<"--------------------------------------------"<<endl;
   cout<<endl;
   int i=0;
     while (i<taille)
     {
        cout<< tab[i]<<"  "; 
        i++;
     }
     cout<<endl;
     cout<<"--------------------------------------------"<<endl; 
    cout<<endl;
   
}

void pile::evaluation() {
    string mot;
    cout << "Entrez l'expression postfixée un élément à la fois." << endl;
    cout << "Tapez 'fin' pour évaluer l'expression." << endl;

    while (true) {
        cout << ">> ";
        cin >> mot;

        if (mot == "fin") break;

        if (isdigit(mot[0]) || (mot.size() > 1 && mot[0] == '-')) {
            empiler(stoi(mot));
        } else if (mot == "+" || mot == "-" || mot == "*" || mot == "/") {
            if (taille < 2) {
                cout << "Erreur : pas assez d'éléments dans la pile" << endl;
                return;
            }

            int b = sommet(); depiler();
            int a = sommet(); depiler();

            if (mot == "+") empiler(a + b);
            else if (mot == "-") empiler(a - b);
            else if (mot == "*") empiler(a * b);
            else if (mot == "/") {
                if (b == 0) {
                    cout << "Erreur : division par zéro" << endl;
                    return;
                }
                empiler(a / b);
            }
        } else {
            cout << "Symbole inconnu : " << mot << endl;
        }
    }

   
}



// int priorite(char op) {
//     if (op == '+' || op == '-') return 1;
//     if (op == '*' || op == '/') return 2;
//     return 0;
// }

// string conversionInfixeVersPostfixe() {
//     const int TAILLE_MAX = 100;
//     string jetons[TAILLE_MAX];
//     int nb_jetons = 0;
//     string saisie;

//     cout << "Entrez l'expression infixée un jeton à la fois (ex: 3, +, (, etc.). Tapez 'fin' pour terminer :" << endl;

//     // Lecture des jetons
//     while (true) {
//         cout << ">> ";
//         cin >> saisie;
//         if (saisie == "fin") break;

//         if (nb_jetons >= TAILLE_MAX) {
//             cout << "Nombre maximal de jetons atteint." << endl;
//             break;
//         }

//         jetons[nb_jetons++] = saisie;
//     }

//     stringstream sortie;
//     pile pileOperateurs;  // ta pile pour stocker les opérateurs

//     // Fonction interne pour donner la priorité aux opérateurs
//     auto priorite = [](const string& op) {
//         if (op == "+" || op == "-") return 1;
//         if (op == "*" || op == "/") return 2;
//         return 0;
//     };

//     for (int i = 0; i < nb_jetons; ++i) {
//         string jeton = jetons[i];

//         if (isdigit(jeton[0]) || (jeton.size() > 1 && isdigit(jeton[1]))) {
//             // C'est un nombre : on le met directement dans la sortie
//             sortie << jeton << " ";
//         }
//         else if (jeton == "(") {
//             pileOperateurs.empiler(jeton);
//         }
//         else if (jeton == ")") {
//             // On dépile jusqu'à trouver '('
//             while (!pileOperateurs.estvide() && pileOperateurs.sommet() != "(") {
//                 sortie << pileOperateurs.sommet() << " ";
//                 pileOperateurs.depiler();
//             }
//             if (!pileOperateurs.estvide()) {
//                 pileOperateurs.depiler();  // retirer '('
//             }
//         }
//         else { // opérateur + - * /
//             while (!pileOperateurs.estvide() && priorite(pileOperateurs.sommet()) >= priorite(jeton)) {
//                 sortie << pileOperateurs.sommet() << " ";
//                 pileOperateurs.depiler();
//             }
//             pileOperateurs.empiler(jeton);
//         }
//     }

//     // Vider le reste des opérateurs
//     while (!pileOperateurs.estvide()) {
//         sortie << pileOperateurs.sommet() << " ";
//         pileOperateurs.depiler();
//     }

//     return sortie.str();
// }

// void pile::evaluation2() {
//     string expr_postfixe =  conversionInfixeVersPostfixe();

//     cout << "Expression postfixée : " << expr_postfixe << endl;

//     stringstream ss(expr_postfixe);
//     string mot;

//     while (ss >> mot) {
//         if (isdigit(mot[0]) || (mot.size() > 1 && mot[0] == '-')) {
//             empiler(stoi(mot));
//         } else {
//             if (taille < 2) {
//                 cout << "Erreur : pas assez d'éléments pour effectuer l'opération." << endl;
//                 return;
//             }

//             int b = sommet(); depiler();
//             int a = sommet(); depiler();

//             if (mot == "+") empiler(a + b);
//             else if (mot == "-") empiler(a - b);
//             else if (mot == "*") empiler(a * b);
//             else if (mot == "/") {
//                 if (b == 0) {
//                     cout << "Erreur : division par zéro" << endl;
//                     return;
//                 }
//                 empiler(a / b);
//             }
//         }
//     }

    
// }
