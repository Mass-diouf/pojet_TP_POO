#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;


 class file
 {
 private:
   
 public:
    file();
    void enfiler(int );
    void defiler();
    int tete() const;
    bool estvide() const;
    void afficher();
    ~file();
 };
 
 
 

#endif