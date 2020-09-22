/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int b,g,n;
    cin >> b >> g >> n;
    if(g>b){
    	swap(b,g);
	}
	int z,k;
	z = min(b,n);
	k = n-z;
	cout<<"z = "<<z<<" k = "<<k<<endl;
	int ans=1;
	while(z>0 && k<g){
		ans++;
		k++;
		z--;
	}
    cout<<ans<<endl;
}

