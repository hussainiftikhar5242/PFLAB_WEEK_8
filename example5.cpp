#include<iostream>
using namespace std;
main()
{
    float array[6];
    float sum=0;
    float average=0;
    for(int x=0;x<6;x++)
    {
        cout<<"enter value:";
        cin >> array[x];
    }
    for(int i=0;i<6;i++)
    {
        sum=sum+array[i];
    }
    cout<<" sum= " << sum<<endl;
    average=sum/6;
    cout<<" average= " << average;
}