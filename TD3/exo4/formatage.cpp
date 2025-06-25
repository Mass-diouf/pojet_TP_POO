
#include"formatage.h"


    // Constructeur par défaut
    str ::str() {
        long_str=0;
        chaine=nullptr;
        
    }
    
    str::str(const char* c) {

        int i=0;
        while (c[i])
        {
            i++;
        }
        long_str=i;
        chaine=new char[long_str];
        i=0;
        while (i<long_str)
        {
            chaine[i]=c[i];
            i++;
        }
          
    }
   
     str::str(const str& s) {
        
        long_str=s.long_str;
        chaine=new char [long_str];
          int i=0;                
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


    str& str::operator=(const str& s) {
    if (this != &s) { 
        delete[] chaine; 

        long_str = s.long_str;
        chaine = new char[long_str];
        for (int i = 0; i < long_str; i++)
        {
            chaine[i] = s.chaine[i];
        }
    }

    return *this; 
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
       
       char* c=new char [long_str+s.long_str +1];
       int i=0;
       while (i< long_str)
       {
        c[i]=chaine[i];
        i++;

       }
        while (i< long_str+ s.long_str)
       {
        c[i]=s.chaine[i-long_str];
        i++;

       }
       c[i] = '\0';  // fin de chaîne correcte

       
        str resultat(c);
      

        return resultat;
    }

    // Opérateur d'indexation []
    char&  str:: operator[](int i) {
        if (i < 0 || i >= long_str) {
            throw std::out_of_range("Index hors limites");
        }
        return chaine[i]; 
    }


    void str :: affichage()
    {
        
        int i=0;
        while (i<long_str)
        {
            cout<<chaine[i];
            i++;
        }
        
    }


//=========================== FORMATAGE =============================

formatage :: formatage()
{
    f='n';//pour dire que la c est a sa forme normale
    couleur = new char[6]; // "black" + '\0'
    strcpy(couleur, "black");// la couleur par defaut
}

formatage :: formatage(const char * s, char F ,char *col) : str (s)
{
    f=F;
     couleur = new char[strlen(col) + 1];
   strcpy(couleur, col) ;
}
formatage ::formatage(const str &s , char F, char * col) : str(s)
{
     f=F;  
      couleur = new char[strlen(col) + 1];
     strcpy(couleur, col);
}
  formatage ::formatage(const formatage & s): str(s)
  {
    f=s.f;
     couleur = new char[strlen(s.couleur) + 1];
    strcpy(couleur, s.couleur);
  }

formatage& formatage::operator=(const formatage& s) {
    if (this == &s) return *this;

    str::operator=(s);
    f = s.f;

    delete[] couleur;
    couleur = new char[strlen(s.couleur) + 1];
    strcpy(couleur, s.couleur);

    return *this;
}


  formatage& formatage::operator=(const str& s) {
    str::operator=(s);
    f = 'n';

    delete[] couleur;
    couleur = new char[6];
    strcpy(couleur, "black");

    return *this;
}


  void formatage :: italique()
  {
    f='i';
  }
   
  void formatage :: bold()
  {
    f='b';
  }
   void formatage :: colorer(char * col)
  {
     couleur = new char[strlen(col) + 1];
       strcpy(couleur, col);
  }
  void formatage :: affichage()
  {
     if(f=='n') str::affichage();
     if(f=='i') 
     {
         cout<<"<i>   " ;
         if(strcmp(couleur, "black")==0)
         str::affichage();
         else
         {
          cout<<"<font couleur = #"<<couleur<<">";
           str::affichage();
          cout<<"  </font>";
         }
          cout<<"   </i>" ;

     }
     if(f=='b') 
     {
         cout<<"<b>    " ;
         if(strcmp(couleur, "black")==0)
         str::affichage();
         else
         {
          cout<<" <font couleur = #"<<couleur<<"   >";
           str::affichage();
          cout<<"    </font>";
         }
          cout<<"    </b>" ;

     }

  }
  formatage :: ~formatage()
  {

  }

