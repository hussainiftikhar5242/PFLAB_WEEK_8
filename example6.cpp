#include<iostream>
using namespace std;
main()
{
    int array[6];
    for(int x=0;x<6;x++)
    {
        cout<<"enter value:";
        cin >> array[x];
    }
    int number;
    cout<<"enter a number you want to find in array:";
    cin >> number;
    for(int i=0;i<6;i++)
    {
        if(number==array[i])
        {
            cout<<number<<"present in array";
            break;
        }
        else 
        {
            cout<<number<<"not present in array";
            break;
        }
    }
}