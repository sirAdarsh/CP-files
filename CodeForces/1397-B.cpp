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
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
    	cin >> ar[i];
	}
	sort(ar,ar+n);
	
	ll ans = 1e12;
	
	int diff=0;
	
	diff = (ar[0]-1);
	
	// second
	
	ll lo=1,hi=ar[1];
	ll mid;
	
	while(lo<=hi){
		mid = (lo-(lo-hi)/2);
		ll cur_dif=0;
		cur_dif += mid-ar[1];
		
		for(int i=2; i<n; i++){
			cur_dif += abs(mid-ar[i]);
		}
		
		cur_dif += diff;
		
		if(cur_dif<ans){
			ans = cur_dif;
			hi--;
		}
		else{
			lo++;
		}
		
	}
	
	cout << ans << endl;
	
}

