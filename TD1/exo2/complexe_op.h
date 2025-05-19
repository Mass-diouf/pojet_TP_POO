#include<iostream>
using namespace std;

class complexe
{
private:
    double reel;
    double image;

public:
    complexe(double r = 0.0, double i = 0.0);
    ~complexe();

    complexe operator+(const complexe&) const;
    complexe operator*(const complexe&) const;

    friend ostream& operator<<(ostream& out, const complexe& c);
};
