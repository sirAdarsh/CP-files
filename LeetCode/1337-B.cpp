/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    float a,b,c,d;
    cin >> a >> b >> c >> d;
    
    if( a<c || b<d ){
    	
    	float m1,m2;
    	m1 = c/a;
    	m2 = d/b;
    	
    	m1 = max(m1,m2);
    	
    	a = m1*a;
    	b = m1*b;
    	
    	if( a==c ){
    		float nmr = b-d;
			float dnr = b;
			
			int gcd = __gcd(nmr,dnr);
			nmr/=gcd;
			dnr/=gcd;
			cout<<nmr<<"/"<<dnr<<endl;
		}
		else if( b==d ){
			float nmr,dnr;
			nmr = a-c;
			dnr = a;
			int gcd = __gcd(nmr,dnr);
			nmr/=gcd;
			dnr/=gcd;
			cout << nmr <<"/"<<dnr<<endl;
		}
    	
	}
	else{
		
		float m1,m2;
		m1= a/c;
		m2 = b/d;
		
		m1 = max(m1,m2);
		
		c = c*m1; d= d*m1;
		
		cout<<m1<<' '<<m2<<endl;
		
		if(b==d){
			int nmr = c-a;
			int dnr = c;
			int gcd = __gcd(nmr,dnr);
			nmr=gcd;
			dnr/=gcd;
			cout <<nmr<<"/"<<gcd<<endl;
		}
		else if(a==c){
			int nmr = d-a;
			int dnr = d;
			int gcd=__gcd(nmr,dnr);
			nmr/=gcd;
			dnr/=gcd;
			cout<<nmr<<"/"<<dnr<<endl;
		}
		
	}
	
    
}

