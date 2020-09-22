/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int a,b,x;
    	cin >> a >> b >> x;
    	
    	int n=0,m=0;
    	
    	int ta=a, tb=b;
    	
    	int num = ta;
    	
    	int e=1;
    	
    	if(a > x || b > x){
    		cout<<0<<endl;
		}
		else{
			while(num<=x || tb<=x ){
    		if(e){
    			num += tb;	
			}
    		else{
    			tb += num;
			}
			n++;
			e^=1;
		}
		
		num = b;
		e = 1;
		
		while(num<=x || ta<=x){
			if(e){
				num += ta;
			}
			else{
				ta += num;
			}
			m++;
			e^=1;
		}
		
		cout<<min(n-1,m-1)<<endl;
		}
    	
    	
    	
	}
    
}

