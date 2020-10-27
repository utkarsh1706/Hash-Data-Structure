#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
void element(int* arr,int n)
{
	if(n<4)
	{
		cout<<"Invalid"<<endl;
	}
	unordered_map<int,pair<int,int>>hp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int sum=arr[i]+arr[j];
			if(hp.find(sum)==hp.end())
			{
				hp[sum]=make_pair(i,j);
			}
			else
			{
				pair<int,int>p=hp[sum];
				cout<<arr[p.first]<<" "<<arr[p.second]<<" and "<<arr[i]<<" "<<arr[j]<<endl;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int* arr=new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	element(arr,n);
	return 0;
}