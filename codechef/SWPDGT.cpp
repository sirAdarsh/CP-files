#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int A,B;
		cin>>A>>B;
		int sum=A+B;
		
		int a,b,c,d;
		
		b=A%10;
		A/=10;
		a=A%10;
		
		d=B%10;
		B/=10;
		c=B%10;
		
		
		int bigger=A;
		if(B>A){
			bigger=B;
		}
		if(bigger==A){
			if(c>a || d>a){
				if(c>=d){
					//swap c
					int t=c;
					c=a;
					a=t;
				}
				else{
					//swap d
					int t=d;
					d=a;
					a=t;
				}
			}
			else if(c>b || d>b){
					if(c>=d){
					//swap d
					int t=d;
					d=b;
					b=t;
				}
				else{
					//swap c
					int t=c;
					c=b;
					b=t;
				}
			}
		}
		else if(bigger==B){
			if(a>c || b>c){
				if(a>=b){
					//swap b
					int t=b;
					b=c;
					c=t;
				}
				else{
					//swap a
					int t=a;
					a=c;
					c=t;
				}
			}
			else if(a>d || b>d){
					if(a>=b){
					//swap b
					int t=b;
					b=d;
					d=t;
				}
				else{
					//swap a
					int t=a;
					a=d;
					d=t;
				}
			}
		}
		cout<<(a*10 + b + c*10 +d);
	}
}
