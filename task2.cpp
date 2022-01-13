#include<iostream>
using namespace std;
main()
{
   
    int array[10];
    int value[10];
    for(int x=0;x<10;x++)
    {
        cout<<"enter value:";
        cin >> array[x];
    }
    int number=array[0];
    for (int i=0;i<10;i++)
    {
        if(number > array[i])
        {
            number=array[i];
        }
    }
    cout<<"smallest number are :"<<number;
}
