#include<iostream>
using namespace std;
main()
{
    char array[5];
    cout<<"enter a charher of hello:";
    for(int x=0;x<5;x++)
    {
        cin >> array[x];
    }
    cout<<"element in reverse order are:";
    for(int i=4 ; i >= 0 ;i--)
    {
        cout<< array[i] <<"   ";
    }

}
