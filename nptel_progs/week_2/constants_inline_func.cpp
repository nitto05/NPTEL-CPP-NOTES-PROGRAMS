#include<iostream>
#include<cmath>
using namespace std;

#define TWO 2
#define PI 4*atan(1.0)
#define SQUARE(x) (x) * (x)

inline int square(int x) {
    return x * x;
}

void func1()
{
    int r = 10;
    double peri = TWO * PI *r;
    cout << "PERIMETER = " << peri << endl;

    //prefer global const variables over manifest constant
    //because the manifest constant has not type and can't be watched by a debugger
    //manifest constants evaluated as many times called.
    //the global const int are evaluated only on initialisation


    
}
void func2()
{
    //for const int, their pointer looks like const int*p = &n (wehre n is the const int)
    //for pointer to be constant we need to use  int * const p = &n (n value can change, p cant change the address it stores.)

}

void func3()
{
    int a = 5;
    int b, c, d;

    b= SQUARE(a);
    c = SQUARE(a+1);
    d = SQUARE(++a);

    //in case of SQUARE(a+1) if it was SQUARE(x) x*x
    // the answer would have been a + 1 * a + 1 as value by macros are replaced by text not value...

    cout << b << " " << c << " " << d << "\n";
}

void func4()
{
    int a = 5;
    int res1 = square(a);       // 5 * 5 = 25
    int res2 = square(a + 1);   // (5 + 1) * (5 + 1) = 36
    int res3 = square(++a);     // ++a becomes 6, then square(6) = 36 safely!
    cout << "Inline Square results: " << res1 << " " << res2 << " " << res3 << "\n";
}

int main()
{
    // func1();
    // func2();
    // func3();
    func4();
    return 0;
}