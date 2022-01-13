#include<iostream>
using namespace std;
main()
{
    char name[8];
    for(int x=0;x<8;x++)
    {
        cout<<"enter a character:";
        cin>>name[x];
    }
    for(int i=0;i<8;i++)
    {
        cout<<name[i];
    } 
}