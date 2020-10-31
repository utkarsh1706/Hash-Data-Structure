#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
void distinct(int* arr,int n,int m)
{
	unordered_map<int,int>mp;
	sort(arr,arr+n);
	int start=0, k=1;
	for (int i = 0; i < n; ++i)
	{
		if(mp.find(arr[i])!=mp.end())
		{
			if(mp[arr[i]]+1==i)
			{
				start=i;
				mp[arr[i]];
			}
		}
		else
		{
			mp[arr[i]]=i;
			k++;
			if(k==m)
			{
				cout<<start<<" "<<start+k<<endl;
			}
		}
	}
	return;
}
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int* arr=new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	distinct(arr,n,k);
	return 0;
}