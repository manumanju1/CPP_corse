
//addition of two numbers
/*#include<iostream>
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
}*/


/*//square of a number
#include<iostream>
using namespace std;
int square(int a)
{

    return a*a;
}

int main()
{
    int b;
    cout<<"enter the value of b :"<<endl;
    cin>>b;
    int result=square(b);
    cout<<"square of a entered value :"<<result<<endl;
}*/

/*//greet function
#include<iostream>
#include<string>
using namespace std;
void greet(string name)
{
    cout<<"welcome "<<name<<endl;

}
int main()
{
    string name;
    cout<<"enter the name :"<<endl;
    getline(cin,name);
    greet(name);
}*/

/*//find a max and min value in a list
#include<iostream>
#include<vector>
using namespace std;
void findmam(vector<int> v)
{
    int max=v[0];
    int min=v[0];
    int size=v.size();
    for(int i=0;i<size;i++)
    {
        if(v[i]>max)max=v[i];
        if(v[i]<min)min=v[i];
    }
    cout<<"max is : "<<max<<endl;
    cout<<"min is : "<<min<<endl;
}
int main()
{
vector<int> v={23,45,10,40,60};
findmam(v);
}*/

/*//default arguments
#include<iostream>
#include<cmath>
using namespace std;
void power(int base,int exp =2)
{
    cout<<"power :"<<pow(base,exp);
}
int main()
{
    int a,b;
    cout<<"enter the value of a and b :"<<endl;
    cin>>a>>b;
    power(a,b);
}*/

/*//recursive function factorial
#include<iostream>
using namespace std;
 int fact(int n)
 {
    if(n <1)
    {
        return 1;
    }
    return n*fact(n-1);
 }
 int main()
 {
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    cout<<"factorial of n : "<<fact(n)<<endl;
 }*/

 /*//function overloading
 #include<iostream>
 using namespace std;
 void add(int a, int b)
 {
    cout<<"integer variable :"<< a+b<<endl;
 }
 void add(double a, double b)
 {
    cout<<"double variable :"<< a+b;

 }
 int main()
 {
    int a=2,b=3;
    double c=2.3,d=4.4;
    add(a,b);
    add(c,d);
    
 }*/

 /*//inline function
 #include<iostream>
 using namespace std;
 inline int add(int a, int b)
 {
    return a+b;
 }
 int main()
 {
    int a=10,b=20;
    int k=add(a,b);
    cout<<"sum of 2 numbers using inline: "<<k<<endl;
 }*/

 /*//lambda function which sort the pair based on second element
 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 int main()
 {
    vector<pair<int,int>> v={{2,3},{1,2},{4,3},{3,5}};
    std::sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){
        return a.second<b.second;
    });
    for(auto j:v)
    {
        cout<<"{"<<j.first<<" ,"<<j.second<<"}";
    }
 }*/

 /*//pass by value and resference
#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}
void swap(int &c, int &d)
{
    c=c+d;
    d=c-d;
    c=c-d;
}

int main()
{
    int a=10,b=20;
    int c=2,d=3;
    cout<<add(a,b)<<endl;
    cout<<"before swap c , d: "<<c<<d<<endl;
    swap(c,d);
    cout<<"after swap c , d: "<<c<<d<<endl;
}

#include <iostream>
using namespace std;

void incrementByValue(int x) {
    x++;
}

void incrementByReference(int &x) {
    x++;
}

int main() {
    int a = 5, b = 5;
    incrementByValue(a);
    incrementByReference(b);
    cout << "After pass by value: " << a << endl;
    cout << "After pass by reference: " << b << endl;
    return 0;
}*/