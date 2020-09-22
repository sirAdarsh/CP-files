#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int k){
	
	int p = k/2;
	int q = k- p;
	cout<<p*q<<endl;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    	int k;
    	cin >> k;
    	solve(k);
	}
}

