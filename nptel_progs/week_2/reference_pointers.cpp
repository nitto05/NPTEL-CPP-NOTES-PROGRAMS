#include<iostream>
using namespace std;

void func1()
{
    // cpp works mostly on the basis of goodnames
    int i = 10; // i is goodname
    int &j = i; // j is nickname
    //j and i are name of the exact same address
    cout << i << " "<< j << endl;
    cout << &i << " " << &j;
    // int &i; //it will give error as nickname with no good name is making no sense
    // int &j = 5; //j is a good boy... ok now who is j, no idea? cpp knows everybody by good name not nickname


}

void func3(int &b, int c)
{
    cout << "b = " << b << ", &b = " << &b << endl << endl;
    cout << "c = " << c << ", &c = " << &c << endl << endl;
    
}

void func2()
{
    int a = 20; 
    cout << "a = " << a << ", &a = " << &a << endl << endl;
    func3(a, a);
}





int main()
{
    func2(); 
    return 0;
}