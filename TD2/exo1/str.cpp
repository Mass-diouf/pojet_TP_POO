
#include"str.h"


    // Constructeur par défaut
    str::str() {
        long_str=0;
        chaine=nullptr;
        
    }
    //une autre methode pour le constructeur
    //str::str() :long_str(0), chaine(new char[1]) {chaine[0] = '\0';}

    // Constructeur à partir d'une chaîne C
    str::str(char* c) {

        int i=0;
        while (c[i])
        {
            i++;
        }
        long_str=i+1;
        chaine=new char[long_str];
        i=0;
        while (i<long_str)
        {
            chaine[i]=c[i];
            i++;
        }
          
    }
    //les consequance de mon choix de ne pas terminer ma chaine par le carctere null
    //Afficher avec cout << chaine	❌ Non, car chaine n’a pas de '\0'

    // Constructeur de copie
     str::str(const str& s) {
        
        long_str=s.long_str;
        chaine=new char [long_str];// ici faut comprendre que le constructeur de copie n a pas besoin de free 
          int i=0;                // car elle permet l initialisation 
        while (i<long_str)
        {
           chaine[i]=s.chaine[i];
           i++;
        }
        
    }

    // Destructeur
    str:: ~str() {
        delete[] chaine;
    }

    // Opérateur d'affectation (=)
    // On retourne une référence pour permettre l'affectation multiple : a = b = c;
    str& str::operator=(const str& s) {
    if (this != &s) { //  Protection contre l’auto-affectation
        delete[] chaine; //  Libère l'ancienne mémoire

        long_str = s.long_str;
        chaine = new char[long_str];
        for (int i = 0; i < long_str; i++)
        {
            chaine[i] = s.chaine[i];
        }
    }

    return *this; //  Pour permettre l'affectation multiple : a = b = c;
}


    // Opérateur d'égalité (==)
    bool str:: operator==(const str& s) {
        if (long_str != s.long_str) return false;
        int i=0;
        while (i<long_str)
        {
            if (chaine[i]!=s.chaine[i])
            {
                return false;
            }
            
          i++; 
        }
        return true;
    }

    // Opérateur de concaténation (+)
    str str:: operator+(const str& s) {
        str result;
        result.long_str=long_str+s.long_str;
        result.chaine= new char[result.long_str];
        int i=0;
        while (i<result.long_str)
        {
          if (i)
          {
            /* code */
          }
           
        }
        
      

        return result;
    }

    // Opérateur d'indexation []
    char&  str:: operator[](int i) {
        if (i < 0 || i >= long_str) {
            throw std::out_of_range("Index hors limites");
        }
        return chaine[i]; // On retourne une référence
    }

   

