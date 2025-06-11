#include"site.h"


document:: document(string t)
{
   titre=t;
   
}


document::~document()
{
  
}
void document::ajouter(string s)
{
  tab_mot.push_back(s);
}
void document::afficher() const {
    cout << "Titre: " << titre << "\nMots-clés: ";
    for (const auto& mot : tab_mot)
        cout << mot << " ";
    cout << endl;


}

string document::getTitre() const {
    return titre;
}

bool document::operator==(const document& b) const {
    return titre == b.titre;
}



site ::site( )
{
  
}
site ::~site( )
{
   
}
void site::ajouter(document d)
{
   tab.push_back(d);
}
void site::supprimer()
{

   tab.pop_back();
}


void site :: afficher()
{
  int i =0;
  while (i<tab.size())
  {
    tab[i].afficher();
    i++;
  }
 

}