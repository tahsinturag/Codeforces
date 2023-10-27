#include<bits/stdc++.h>
using namespace std;
long long n,mid,ans=0,sum=0,a[100005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	if(n%2==0)
	{
		mid=n/2;
		for(int i=n;i>=mid+1;i--)ans+=a[i];
		for(int i=mid;i>=1;i--)sum+=a[i];
	}
	else
	{
		mid=(n+1)/2;
		for(int i=n;i>=mid;i--)ans+=a[i];
		for(int i=mid-1;i>=1;i--)sum+=a[i];
	}
	cout<<ans*ans+sum*sum;
	return 0;
}
