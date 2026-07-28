#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring> //string library from c
#include<stack> //class of stack added
using namespace std;

void func1() //reversing an array
{
    char str[10] = "SATYAM";
    stack <char> s;
    for (int i = 0; i<strlen(str); i++)
    {
        s.push(str[i]);
    }
    cout << "reversed string: ";
    while(!s.empty())
    {
        cout<< s.top();
        s.pop(); //pop returns void here...
    }
}

int main()
{
    func1();
    return 0;
}