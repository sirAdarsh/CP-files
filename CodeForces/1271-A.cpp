#include<bits/stdc++.h>
#define max 100001
using namespace std;

int minOf3(int a,int b,int c){
	int p = min(a,b);
	return min(p,c);
}


int main(){
	int a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e >> f;
	
	int ans=0;
	
	if(d*f > d*e){
		int p = minOf3(b,c,d);
		ans += p*f;
		d -= p;
		if(d>0){
			int j = min(a,d);
			ans += j*e;
		}
		
	}
	else{
		
		int p = min(a,d);
		ans += p*e;
		d -= p;
		if(d>0){
			int j = minOf3(b,c,d);
			ans += j*f;
		}
	}
	cout<<ans<<endl;
	
	
	
	
}
