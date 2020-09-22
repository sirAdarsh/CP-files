/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	ll l,r,m;
    	cin >> l >> r >> m;
    	ll n;
    	ll rem1, rem2;
    	
    	ll remMin = 0;
    	ll remMax = r-l;
    	
    	ll a,b,c;
    	
    	ll rem;
    	
    	for(int i=l; i<=r; i++){
    		
    		n = m/i;
    		if(n==0){
    			rem1 = INT_MAX;  //to be subtracted
    			rem2 = -1*((n+1)*i - m);      // to be added
			}
			else{
				rem1 = (m%i); // to be subtr
				rem2 =  -1*((n+1)*i - m);// to be added 
			}
//			cout<<" i = "<<i<<"  rem = "<<rem<<"  n = "<<n<<"  (m%i)= "<<m%i<<endl;
			if(abs(rem1)>=remMin && abs(rem1)<=remMax){
				a = i;
				rem = rem1;
				break;
			}
			else if(abs(rem2)>=remMin && abs(rem2)<=remMax){
				a = i;
				rem = rem2;
				break;
			}
    		
		}
//		cout<<rem<<endl;
		if(rem>=0){
			b = r;
			c = (b-rem);
		}
		else{
			rem = abs(rem);
			c = r;
			b = (c-rem);
		}
    	cout<<a<<" "<<b<<" "<<c<<endl;
	}
    
}

