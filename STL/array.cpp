#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int,4> a={2,3,4,5};
	int size=a.size();
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
		
	}
	cout<<a.back()<<endl;
	cout<<a.front()<<endl;
	cout<<a.empty()<<endl;
	cout<<"Array at second element"<<a.at(2);
}
