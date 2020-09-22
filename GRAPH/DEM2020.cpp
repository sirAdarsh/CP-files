/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
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
    	int ar[n];
    	for(ll i=0; i<n; i++){
    		cin >> ar[i];
		}
    	
    	ll a=0;
    	
    	a = ar[0];
    	
    	ll TMP=0;
    	for(int i=1; i<n; i++){
    		TMP+=ar[i];
		}
    	
    	
		ll	tmp1=0;
		ll tmp2=0;
		
		int sec;
		
		for(int i=1; i<n; i+=2){
			tmp1+=ar[i];
		}
		if(1<n){
			tmp2+=ar[1];
		}
		for(int i=2; i<n; i+=2){
			tmp2+=ar[i];
		}
		
		sec = max(tmp1,tmp2);
    	
    	
    	a += (TMP-sec);
    	
    	if(sec > a ){
    		cout << "second";
		}
		else if(sec==a){
			cout <<"draw";
		}
		else{
			cout <<"first";
		}
		cout << endl;
    	
	}
    
}

