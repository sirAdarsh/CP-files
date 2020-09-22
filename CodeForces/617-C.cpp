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
    
    int n,x1,y1,x2,y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    
    ll r1=  0, r2=0;
    
    while(n--){
    	
    	int a,b;
    	cin >> a >> b;
    	
    	ll d1, d2;
    	
    	d1 = pow( abs(a-x1),2) + pow(abs(b-y1),2);
    	d2 = pow( abs(a-x2),2) + pow(abs(b-y2),2);
    	
    	cout <<"d1= "<<d1<<"   d2= "<<d2<<endl;
    	
    	if( d1<d2 ){
    		
    		if(d1>r1 && d2>r2){
    			r1 = d1;
			}
		}
		if( d2<=d1 ){
			if(d2>r2 && d1>r1 ){
				r2 = d2;
			}
		}
		
		cout <<"r1 = "<<r1 <<"  r2= "<<r2<<endl;
		cout<<endl;
    	
	}
    cout << r1 <<"  "<<r2;
}

