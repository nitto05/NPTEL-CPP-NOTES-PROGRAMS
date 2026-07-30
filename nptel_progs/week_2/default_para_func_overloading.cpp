#include<iostream>
using namespace std;

int sum(int a, int b = 10)
{
    return a+b;
}

int sum (int a, int b, int c = 30) //goes fine when 1 argument, causes error when two args are used
//function overloading got bombed lol
{
    return a+b+c;
}

void func1()
{
    int a = 5;
    cout << sum(a, 5) ;

}

int main()
{
    func1();
    return 0; 
}