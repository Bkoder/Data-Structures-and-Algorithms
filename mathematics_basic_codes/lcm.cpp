#include <iostream>
#include <limits.h>
using namespace std;

int lcm(int a,int b)
{

    int res=max(a,b);
    while(true)
    {
        if(res%a==0 && res%b==0)
            return res;
        else
            res++;
    }
return res;
}
int main(){
    int a,b;
cout<<"Enter first number: ";
cin>>a;
cout<<"Enter second number: ";
cin>>b;
cout<<lcm(a,b);
return 0;
}

