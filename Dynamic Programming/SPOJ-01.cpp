#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		
		double n,m;
		ll a,d;
		cin >> n >> m >> a >> d;
		
		ll s = ceil(n/a);
		ll e = floor(m/a);
		
		ll v1 = (e-s+1);
		
		s = ceil(n/(a+d));
		for(ll i=s*(a+d);i<=m; i+=(a+d) ){
			if(i%a!=0){
				v1++;
			}
		}
		ll v2=0;
		s = ceil(n/(a+2*d));
		
		for(ll i=s*(a+(2*d)); i<=m; i+=(a+(2*d))){
			if(i%a!=0 && i%(a+d)!=0){
				v2++;
			}
		}
		
		ll v3=0;
		s = ceil(n/(a+3*d));
		
		for(ll i=s*(a+3*d); i<=m; i+=(a+(3*d))){
			if(i%a!=0 && i%(a+d)!=0 && i%(a+2*d)!=0){
				v3++;
			}
		}
		ll v4=0;
		s = ceil(n/(a+3*d));
		
		for(ll i=s*(a+4*d); i<=m; i+=(a+(4*d))){
			if(i%a!=0 && i%(a+d)!=0 && i%(a+2*d)!=0 && i%(a+(3*d))!=0 ){
				v4++;
			}
		}
		cout<<(m-n+1)-(v1+v2+v3+v4)<<endl;
		 		
	}
}

