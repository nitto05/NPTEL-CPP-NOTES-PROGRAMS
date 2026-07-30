#include<iostream>

using namespace std;

void farenheitToCelsius()
{
    float f, c;
    cout << "enter a temperature in farenheit : ";
    cin >> f;

    c = (f-32.0) * (5.0/9.0);
    cout << "the temperature in celsius is : " << c;
    
}

void opToConsole()
{
    int x = 10;
    int y = 20;
    // readability upgrade using std cout
    std::cout << "x = " << x <<"\n"
              << "y = " << y << "\n";
    
    //using namespace...
    cout << "x = " << x <<"\n"
         << "y = " << y << "\n";

}

void arithmeticOpe()
{
    int a = 10;
    int b = 20;
    // float c = b/a;
    // int c = a%b;
    a++;
    std :: cout << a;
}

void constantVar()
{

    const int a = 10;
    const float b = 20.5;
    // a = 50;
    // b = 1.5;
    // std :: cout << a << " " << b;

}
// %%
void swapByValue()
{
    int a = 1;
    int b = 2;

    int temp = b;
    b = a;
    a = temp;

    std :: cout << a << " " << b ;
}

int main()
{
    // swapByValue();
    // constantVar(); // error will come
    // arithmeticOpe();
    // opToConsole();
    farenheitToCelsius();
    return 0;
}