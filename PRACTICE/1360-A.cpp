#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	ll a,b;
    	cin >> a >> b;
    	ll minm = min(a,b);
    	ll maxm = max(a,b);
    	if  ( 2*minm > maxm ){
    		cout<<pow((2*minm),2)<<endl;
		}
    	else{
    		cout<<pow(maxm,2)<<endl;
		}
	}
}

