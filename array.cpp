//largest element in an array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,6,3,7,22,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"maximum element :"<<max<<endl;

    
}