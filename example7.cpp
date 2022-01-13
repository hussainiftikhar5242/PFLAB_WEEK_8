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
    int number;
    cout<<"enter a number:";
    cin>>number;
    for(int i=0;i<10;i++)
    {
        cout<< number*array[i] << "  is the product of " << "  number " << number <<"  and array is "<<array[i]<<endl;
    }
}