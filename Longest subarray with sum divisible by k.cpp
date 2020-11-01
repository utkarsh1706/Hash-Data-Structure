#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int longest(int* arr,int n,int k)
{
	unordered_map<int,int>hp;
	int maxi=0;
	int* modarr=new int[n];
	int curr_sum=0;
	for (int i = 0; i < n; ++i)
	{
		curr_sum=curr_sum+arr[i];
		curr_sum=((curr_sum%k)+k)%k;
		modarr[i]=curr_sum;
	}
	for (int i = 0; i < n; ++i)
	{
		if(modarr[i]==0)
		{
			maxi=i+1;
		}
		else if(hp.find(modarr[i])==hp.end())
		{
			hp[modarr[i]]=i;
		}
		else
		{
			if(maxi<i-hp[modarr[i]])
			{
				maxi=i-hp[modarr[i]];
			}
		}
	}
	return maxi;
}
int main(int argc, char const *argv[])
{
	int n;
	int k;
	cin>>n>>k;
	int* arr=new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<longest(arr,n,k)<<endl;
	return 0;
}