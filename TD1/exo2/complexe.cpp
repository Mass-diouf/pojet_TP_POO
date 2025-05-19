#include"complexe.h"



complexe::complexe(double i, double r)
{
    image=i;
    reel=r;
}

complexe::~complexe()
{
}

double complexe ::imaginaire()
{
    return image;
}

double complexe ::reelle()
{
    return reel;
}
double module()
{

}

complexe & complexe::ajouter(const complexe & c)
{

}
complexe & complexe::multiplier(const complexe & c)
{

}

void complexe :: afficher()
{
    cout<< image <<" + "<< reel <<"i" <<endl;
}




// complexe::complexe(double r, double i) : reel(r), image(i) {}

// complexe::~complexe() {}

// complexe complexe::operator+(const complexe& c) const {
//     return complexe(reel + c.reel, image + c.image);
// }

// complexe complexe::operator*(const complexe& c) const {
//     return complexe(
//         reel * c.reel - image * c.image,
//         reel * c.image + image * c.reel
//     );
// }

// ostream& operator<<(ostream& out, const complexe& c) {
//     out << c.reel;
//     if (c.image >= 0) out << " + " << c.image << "i";
//     else out << " - " << -c.image << "i";
//     return out;
// }
