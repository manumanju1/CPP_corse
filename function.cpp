#include<iostream>
using namespace std;
int add(int a, int b);
int main()
{
    int a=2,b=10;
    int sum=add(a,b);
    cout<<"Sum is: "<<sum;
}

int add(int a, int b)
{
    return a+b;
}