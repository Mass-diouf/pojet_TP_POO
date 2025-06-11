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

    taille =p.taille;
   tab = new element[5]; 
   int i=0;
   while (i!=taille)
   {
    tab[i]=p.tab[i++];
   }
   
}

pile & pile :: operator=(const pile & p)
{
  if (this!=&p)
  {
    delete[] tab;
    taille =p.taille;
   tab = new element[5]; 
   int i=0;
   while (i!=taille)
   {
    tab[i]=p.tab[i++];
   }
  }
  else
  {
    //exection
  }

  return *this;
  
}



pile ::~pile()
{
     cout<<"-------------------APL DU DESTRUCTEUR-------------------------"<<endl;

    delete [] tab;
}


void pile ::empiler(element val)
{
   

     
      if (taille+1 < 10) 
      {
        taille++;
        
      } 
      
       int i=taille;
      while (i > 0) 
      {
        tab[i] = tab[i-1 ];
        i--;
      }

      tab[0] = val;

    
}

void pile:: depiler()
{
  if (!estvide())
  {
  
    cout << "Pile vide ! Impossible de dépiler." << endl;
      taille--;
  }
 
 
  
}

int pile :: sommet() const
{
  if (!estvide())
   {
        return tab[0];
    } 
    else
    {
        cout << "Pile vide ! Aucun sommet." << endl;
        // ou lever une exception
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



int priorite(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string infixeVersPostfixeInteractif() {
    vector<string> tokens;
    string token;

    cout << "Entrez l'expression infixée un jeton à la fois (ex: 3, +, (, etc.). Tapez 'fin' pour terminer :" << endl;

    while (true) {
        cout << ">> ";
        cin >> token;

        if (token == "fin") break;
        tokens.push_back(token);
    }

    stringstream sortie;
    stack<string> op_stack;

    auto priorite = [](const string& op) {
        if (op == "+" || op == "-") return 1;
        if (op == "*" || op == "/") return 2;
        return 0;
    };

    for (const string& t : tokens) {
        if (isdigit(t[0]) || (t.size() > 1 && isdigit(t[1]))) {
            sortie << t << " ";
        }
        else if (t == "(") {
            op_stack.push(t);
        }
        else if (t == ")") {
            while (!op_stack.empty() && op_stack.top() != "(") {
                sortie << op_stack.top() << " ";
                op_stack.pop();
            }
            if (!op_stack.empty()) op_stack.pop(); // pop '('
        }
        else { // opérateur
            while (!op_stack.empty() && priorite(op_stack.top()) >= priorite(t)) {
                sortie << op_stack.top() << " ";
                op_stack.pop();
            }
            op_stack.push(t);
        }
    }

    while (!op_stack.empty()) {
        sortie << op_stack.top() << " ";
        op_stack.pop();
    }

    return sortie.str();
}

void pile::evaluation2() {
    string expr_postfixe = infixeVersPostfixeInteractif();

    cout << "Expression postfixée : " << expr_postfixe << endl;

    stringstream ss(expr_postfixe);
    string mot;

    while (ss >> mot) {
        if (isdigit(mot[0]) || (mot.size() > 1 && mot[0] == '-')) {
            empiler(stoi(mot));
        } else {
            if (taille < 2) {
                cout << "Erreur : pas assez d'éléments pour effectuer l'opération." << endl;
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
        }
    }

    
}
