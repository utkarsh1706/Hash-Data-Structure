#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int lcs(int* arr,int n)
{
	unordered_map<int,int>mp;
	int maxi=INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		mp[arr[i]]=i;
	}
	for (int i = 0; i < n; ++i)
	{
		if(mp.find(arr[i]-1)==mp.end())
		{
			int j=arr[i];
			while(mp.find(j)!=mp.end())
			{
				j++;
			}
			maxi=max(maxi,j-arr[i]);
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
	cout<<lcs(arr,n)<<endl;
	return 0;
}