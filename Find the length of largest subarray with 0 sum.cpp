#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int subarr(int* arr,int n)
{
	unordered_map<int,int>mp;
	int maxi=0,sum=0;
	for (int i = 0; i < n; ++i)
	{
		sum=sum+arr[i];
		if(sum==0)
		{
			maxi=max(maxi,i);
		}
		else if(mp.find(sum)!=mp.end())
		{
			maxi=max(maxi,i-mp[sum]);
		}
		else
		{
			mp[sum]=i;
		}
	}
	return maxi;
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
	cout<<subarr(arr,n)<<endl;
	return 0;
}