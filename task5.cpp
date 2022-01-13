#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"enter a name:";
    cin>>name;
    int i=0;
    int count=0;
    while( name[i] != '\0')
    {
        if(name[i] == 'a')
        {
            count=count+1;
        }
        else if(name[i] == 'e')
        {
            count=count+1;
        }
        else if(name[i] == 'i')
        {
            count=count+1;
        }
        else if(name[i] == 'o')
        {
            count=count+1;
        }
        if(name[i] == 'u')
        {
            count=count+1;
        }
        i++;

    }
    cout<<count;
}