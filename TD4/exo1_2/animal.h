#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
#include<string>

using namespace std;

//ici on voulais tester avec protected pour afficher le nom mais ca marche 
// avec private cela ne marche pas car les donnees sont proteger
//----------------------ANIMAL-------------------------------------
class animal
{
protected:
  string nom;
public:
    animal(string );
  virtual  void exprimer() =0;
    ~animal();
};
//----------------------MAMMIFERE-----------------------------------------------
class mammifere : public animal
{
private:
   string nom; 
public:
mammifere(string);
 ~ mammifere();
  virtual  void exprimer() =0;

};

//---------------------OISEAU-------------------------------------
class oiseau : public animal
{
private:
   string nom;
public:
    oiseau(string);
    ~oiseau();
     virtual  void exprimer() =0;
    
};
//-----------------------CHAT---------------------------------------
class chat : public mammifere
{
private:
  string nom;
  
public:
    chat(string);
    ~chat();
      void exprimer() ;
      
};
//-------------------SOURIS-----------------------------------------
class souris : public mammifere
{
private:
   string nom;
public:
    souris(string);
    ~souris();
   void exprimer() ;
   

};

//---------------CANARIS-------------------------------------------
class canaris : public oiseau
{
private:
    string nom;
public:
    canaris(string);
    ~canaris();
    void exprimer() ;
    
};


#endif