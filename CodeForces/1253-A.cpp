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
    	int n;
    	cin >> n;
    	int a[n],b[n];
    	for(int i=0; i<n; i++){
    		cin >> a[i];
		}
		for(int i=0; i<n; i++){
			cin >> b[i];
		}
		bool done=false;
		int in=0,fi=n-1;
		
		for(int i=0; i<n; i++){
			if(a[i]>b[i]){
				cout<<"NO"<<endl;
				done=true;
				break;
			}
		}
		if(done)continue;
		for(int i=0; i<n; i++){
			if(a[i]!=b[i]){
				in=i;
				break;
			}
		}
		for(int i=n-1; i>=0; i--){
			if(a[i]!=b[i]){
				fi=i;
				break;
			}
		}
		
		for(int i=in+1; i<=fi; i++){
			if( b[i]-a[i]!=b[i-1]-a[i-1] ){
				cout<<"NO"<<endl;
				done=true;
				break;
			}
		}
		if(!done)cout<<"YES"<<endl;
		
	}
}

