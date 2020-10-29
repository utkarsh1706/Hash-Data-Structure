#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
void lics(int* arr,int n)
{
	unordered_map<int,int>mp;
	int* dp=new int[n];
	memset(dp,0,sizeof(dp));
	int maxi=INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		if(mp.find(arr[i]-1)!=mp.end())
		{
			int lastindex=mp[arr[i]-1]-1;
			mp[arr[i]]=i+1;
			dp[i]=1+dp[lastindex];
		}
		else
		{
			mp[arr[i]]=i+1;
			dp[i]=1;
		}
		maxi=max(maxi,dp[i]);
	}
	cout<<maxi<<endl;
	return;
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
	lics(arr,n);
	return 0;
}