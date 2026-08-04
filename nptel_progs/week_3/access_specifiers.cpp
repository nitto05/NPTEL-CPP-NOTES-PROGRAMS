#include<iostream>
#include<cmath>
using namespace std;

class Complex_pub
{
    public : int a, b;

    public:
    double magni () {return sqrt(pow(a, 2) + pow(b,2));}

};

class Complex_priv
{
    private : int a, b;

    public: 
    double magni() {return sqrt(pow(a, 2) + pow(b,2));} 
};



void func1()
{
    Complex_pub pubc = {12, 13};
    cout << pubc.magni() << endl;

    Complex_priv pric = {12, 13}; //gives error
    cout << pubc.magni() << endl;    
}

int main()
{
    func1();
    return 0;
}