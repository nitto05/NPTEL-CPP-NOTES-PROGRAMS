#include<iostream>
using namespace std;

int init_m1 (int a)
{
    cout << a << endl;
    return a;
}


int init_m2 (int b)
{
    cout << b << endl;
    return b;
}

//order of functions executed will show the order of members initialized

class X
{
    private : int m2_, m1_; //here the order of writing the variables also dictates the order of initialization...

    public: 
    X(int m1, int m2): m1_ (init_m1(m1)), m2_(init_m2(m2))
    {
        // cout<<"Ctor: "<<endl
    }

    ~X() {}

};

void func1()
{
    X a (2, 3);
    // cout << a.m1_ << endl;
    // cout << a.m2_ << endl;
    X b(a); //can also be written X b = a; 

    //why again the numbers were not printed for b???
//     X::X(const X& other)
// {
//     m2_ = other.m2_;
//     m1_ = other.m1_;
// }

    //this is the meaning of copy constructor...
}

int main()
{
    func1();
    return 0;
}