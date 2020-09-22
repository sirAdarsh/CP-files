#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	
	ll n;
	cin >> n;
	
	if(n%2){
		ll p = n/2;
		cout << -1*(p+1)<<endl; 
	}else{
		cout<< n/2 <<endl;
	}
	
}
