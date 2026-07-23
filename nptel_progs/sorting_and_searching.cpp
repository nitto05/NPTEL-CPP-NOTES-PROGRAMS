#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void replace1()
{
    int arr []= {1, 2, 3, 4 ,5};
    replace (arr, arr+5, 2, 3);
    for (int i = 0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
}

void search()
{
    vector<int> arr = {32, 71, 12, 45, 26};
    sort(arr.begin(), arr.end()); 
    if (binary_search(arr.begin(), arr.end(), 12))
    {
        // print("element found");
        cout << "element found";
    }
}

bool compare(int i, int j)
{
    return (i>j); //typecasting not needed
}

void sorting()
{
    vector<int> arr = {32, 71, 12, 45, 26}; 
    // sort(arr, arr+4); // it works for array only
    sort(arr.begin(), arr.end(), compare);
    for (int i = 0; i<arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    // sorting();
    // search();
    replace1();
    return 0;
}