#include<iostream>
using namespace std;

class Stack
{
    private : char data_[10];
    int top_;

    public:
    Stack(): top_(-1) {}
    int empty (){return (top_ == -1);}
    void push (char x) {data_[++top_] = x;}
    void pop() {--top_;}
    char top (){return data_[top_];}
};

void func1()
{
    char str[10] = "ABCDE";
    Stack s;

    for (int i = 0; i<5; i++)
    {
        s.push(str[i]);
    }

    while(!s.empty()) 
    {
        cout << s.top(); 
        s.pop();
    }
}

int main()
{
    func1();
    return 0;
}