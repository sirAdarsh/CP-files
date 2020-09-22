#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	
    	double a;
    	ll b,c,d;
    	cin >> a >> b >> c >> d;
    	
    	if( a <= b ){
    		cout << b <<endl;
		}
		else{
			
			a -= b;
			
			if( (c-d) <=0 ){
				
				cout <<-1 <<endl;
				
			}
			else{
				ll times;
				ll diff = (c-d);
				
				times = ceil( a / diff);
				
				cout << b + ( times * c )<<endl;
			}
			
		}
    	
	}
    
}

