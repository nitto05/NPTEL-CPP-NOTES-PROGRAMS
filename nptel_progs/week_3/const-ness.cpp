#include <iostream>
using namespace std;

class MyClass
{
    int myPriMember_;

public:
    int myPubMember_;

    MyClass(int mPri, int mPub)
        : myPriMember_(mPri), myPubMember_(mPub)
    {
    }

    int getMember()
    {
        return myPriMember_;
    }

    void setMember(int i)
    {
        myPriMember_ = i;
    }

    void print()
    {
        cout << myPriMember_ << ", " << myPubMember_ << endl;
    }
};

class MyClass
{
    int myPriMember_;

public:
    int myPubMember_;

    MyClass(int mPri, int mPub)
        : myPriMember_(mPri), myPubMember_(mPub)
    {
    }

    int getMember() const
    {
        return myPriMember_;
    }

    void setMember(int i)
    {
        myPriMember_ = i;
    }

    void print() const
    {
        cout << myPriMember_ << ", " << myPubMember_ << endl;
    }
};

void func1()
{
    const MyClass myConstObj(5, 6);   // Constant object

    cout << myConstObj.getMember() << endl;   // Error 1
    myConstObj.setMember(7);                  // Error 2
    myConstObj.myPubMember_ = 8;              // Error 3
    myConstObj.print();                       // Error 4

}

void func2()
{
    MyClass myObj(0,1);
    const MyClass myConstObj(5, 6);   

    cout << myObj.getMember() << endl;   
    myObj.setMember(2); // can do  
    myObj.myPubMember_ = 3; //can do        
    myObj.print(); //can do                      

    cout << myConstObj.getMember() << endl; //can do
    // myConstObj.setMember(7); //cant do this...
    //const object can write and invoke only const data member and member_function
    myConstObj.print();//can do
}

int main()
{
    func2();
    return 0;
}