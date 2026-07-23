#include<iostream>
#include<vector>
#include<string>
using namespace std;
#define MAX 100

void func2()
{
    string str1 = "HELLO ";
    string str2 = "WORLD";

    string str = str1 + str2;

    cout << str;
}

void func1()
{
    // dynamic array in cpp

    cout << "ENTER A SIZE : ";
    int count;
    cin >> count;

    vector <int> arr; // array declared with size 0
    cout << arr.size() << endl;
    arr.resize(count);
    cout << arr.size();
}

void intro_vector()
{
    int arr[MAX]; //short is of size 2 bytes... each elem is of 2 bytes..
    int size;
    vector<int> arr1(MAX);
    cout << "enter a size : " ;
    cin >> size ;
    
    for (int i = 0; i<size; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i<size; i++)
    {
        arr1[i] = 2*i;
    }
    cout<< "c like array values : ";
    for (int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "vector array values : ";
    for (int i = 0; i<size; i++)
    {
        cout << arr1[i] << " ";
    }

}

int main()
{
    // intro_vector();
    // func1();
    func2();
    return 0;
}