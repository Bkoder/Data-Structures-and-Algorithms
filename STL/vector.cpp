#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	cout<<"Capacity="<<v.capacity()<<endl;
	v.push_back(1);
	cout<<v.capacity()<<endl;
	v.push_back(2);
	v.push_back(4);
	cout<<v.capacity()<<endl;
	cout<<v.size()<<endl;
	cout<<v.front()<<endl;
	cout<<v.back()<<endl;

	v.push_back(6);
	v.push_back(8);
	cout<<"Before pop"<<endl;
	for(int i:v){
	    cout<<i<<" ";
	}cout<<endl;
	v.pop_back();
	cout<<"After pop"<<endl;
	for(int i:v)
	{
	    cout<<i<<" ";
	}
}
