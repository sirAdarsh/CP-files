#include<iostream>
#define ll long long
using namespace std;

int main(){
	ll f1,f2;
	cin>>f1>>f2;	
	ll fn;
	cin>>fn;
	
	
	if( (fn-1)%3==0  ){
		//fn is a sequence of f1
		ll n=(fn-1)/3;
		if(n%2==0){
			fn=f1;
		}
		else{
			fn=-f1;
		}
	}
	else if( (fn-2)%3==0 ){
		//fn is sequence of f2
		ll n=(fn-2)/3;
		if(n%2==0){
			fn=f2;
		}
		else{
			fn=-f2;
		}
	}
	
	else if( fn%3==0 ){
		ll a=fn-1;
		ll b=fn+1;
		
		if( (a-1)%3==0  ){
		//fn is a sequence of f1
		ll n=(a-1)/3;
		if(n%2==0){
			a=f1;
		}
		else{
			a=-f1;
		}
	}
	else if( (a-2)%3==0 ){
		//fn is sequence of f2
		ll n=(a-2)/3;
		if(n%2==0){
			a=f2;
		}
		else{
			a=-f2;
		}
	}
		
		if( (b-1)%3==0  ){
		//fn is a sequence of f1
		ll n=(b-1)/3;
		if(n%2==0){
			b=f1;
		}
		else{
			b=-f1;
		}
	}
	else if( (b-2)%3==0 ){
		//fn is sequence of f2
		ll n=(b-2)/3;
		if(n%2==0){
			b=f2;
		}
		else{
			b=-f2;
		}
	}
		
		fn=a+b;
	}
	ll ans=(fn%1000000007);
	if(ans<0){
		ans=1000000007+ans;
	}
	cout<<ans<<endl;
}
