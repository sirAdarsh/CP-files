#include<iostream>
using namespace std;
#define ll double

ll fib(ll f, ll s, ll n){
	
	if(n==1){
		return f;
	}
	if(n==2){
		return s;
	}
	ll ans;
	for(int i=3; i<=n; i++){
		
		ans = f + (s*s);
		f = s;
		s = ans;
	}
	return ans;
}
int main(){
	ll f,s,n;
	cin >> f >> s >> n;
	printf("%0.lf",fib(f,s,n));
}
