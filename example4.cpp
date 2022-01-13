#include<iostream>
using namespace std;
main()
{
    int size=9;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter value in array:";
        cin >> array[i];
    }
    cout<<"the array are:";
    for(int x=0;x<9;x++)
    {
        cout<<array[x]<<"   ";
    }
}