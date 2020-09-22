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
    int n,m;
    cin >> n >> m;
    int ar[n],ara[m];
    for(int i=0; i<n; i++){
    	cin >> ar[i];
	}
	for(int i=0; i<m; i++){
		cin >> ara[i];
	}
	
	int ans=INT_MAX;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			
			s="";
			
			if(ar[i]==ara[j]){
				s += ar[i]+'0';
			}
			else{
				s+=(ar[i]+'0');
				s+=(ara[j]+'0');
			}
			
			ans = min(ans,stoi(s));
			reverse(s.begin(),s.end());
			ans = min(ans,stoi(s));
		
		}
	}
	cout << ans << endl;
}

