#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
bool sub(int* arr,int n)
{
	unordered_map<int,int>mp;
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		sum=sum+arr[i];
		if(mp.find(sum)==mp.end())
		{
			mp[sum]=i;
		}
		else if(sum==0 or mp.find(sum)!=mp.end())
		{
			cout<<i-mp[sum]<<endl;
			return true;
		}
	}
	return false;
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
	if(sub(arr,n))
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
	return 0;
}