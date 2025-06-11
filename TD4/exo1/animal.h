#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
#include<string>

using namespace std;


//----------------------ANIMAL-------------------------------------
class animal
{
private:
  string nom;
public:
    animal(string );
  virtual  void exprimer() =0;
  virtual string getnom();
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
  virtual string getnom();
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
     virtual  string getnom();
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
      string getnom();
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
    string getnom();

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
    string getnom();
};




















#endif