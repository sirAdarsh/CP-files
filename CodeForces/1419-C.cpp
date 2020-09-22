/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	
    	int n,k;
    	cin >> n >> k;
    	int ar[n];
    	bool zero=true;
    	int pos=0;
    	int neg=0;
    	for(int i=0; i<n; i++){
    		cin >> ar[i];
    		if(ar[i]!=k)zero=false;
    		if(ar[i]-k>0)pos+=ar[i]-k;
    		else neg+=k-ar[i];
		}
		if(zero){
			cout<<0<<endl;
			continue;
		}
		if(pos==neg){
			cout<<1<<endl;
			continue;
		}
		cout<<2<<endl;
	}
    
}

