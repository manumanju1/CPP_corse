/*//largest element in an array
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

    
}*/

/*//second largest element
#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,6,3,7,22,10};
    int first=0;
    int second=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second&& arr[i]!=first)
        {
            second=arr[i];
        }

    }
   cout<<second;
}*/

//reverse an arry
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={5,6,3,7,22,10};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end =n-1;
    while(start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}