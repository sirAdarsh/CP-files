#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
unordered_map<ll,ll> mp;
ll go(ll n,ll mx)
{
	if(n==0)
	{
		return 0;
	}
	if(n<0)
		return 0;
	if(mp.count(n))
		return mp[n];
	ll res=INT_MAX;
	for(ll i=1;i<=mx;i++)
	{
		if(i*i<=n)
		res=min(res,1+go(n-i*i,mx));
	}
	return mp[n]=res;
}
int main()
{
	// take_input;
	fast;
	ll n;
	cin>>n;
	ll mx=ceil(sqrt(n));
	cout<<go(n,mx);
}
