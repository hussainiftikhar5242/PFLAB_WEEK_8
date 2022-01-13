#include<iostream>
using namespace std;
main()
{
    int array[10];
    for(int x=0;x<10;x++)
    {
        cout<<"enter value:";
        cin >> array[x];
    }
    cout<<"element in reverse order are:";
    for(int i=9 ; i >= 0 ;i--)
    {
        cout<< array[i] <<"   ";
    }

}
