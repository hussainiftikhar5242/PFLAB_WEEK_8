#include<iostream>
using namespace std;
main()
{
    int number=0;
    int array[10];
    for(int x=0;x<10;x++)
    {
        cout<<"enter value:";
        cin >> array[x];
    }
    for(int i=0;i<10;i++)
    {
        if(number < array[i])
        {
            number=array[i];
        }
    }
    cout<<"largest number are :"<<number;
}
