/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;


int solve(string s, int sz){
	
	if(sz==1 || sz==2){
		return 0;
	}
	
	int first = s[0]-'0';
	int last = s[sz-1]-'0';
	
	int zero =0, one = 0;
	
	for(int i=0; i<sz; i++){
		if(s[i]-'0'==1){
			one++;
		}
		else{
			zero++;
		}
	}
	
	
	// if making all 0s
	
	int a = one;
	
	// if making all 1s
	
	int b = zero;
	
	// mkaing 000000001111111
	
	int zidx=-1, oidx=-1;
	
	bool oneChecked = false , z=false;
	
	for(int i=0; i<sz; i++){
		
		if(s[i]-'0'==1){
			oneChecked=true;
		}
		if(oneChecked==true && s[i]-'0'==0){
			if(z==false){
				zidx = i;
				z= true;
			}
		}
	}
	
	int c = INT_MAX;
	if(zidx!=-1)
		c = sz - zidx-1 ;
	
	
	
	// making 1111111110000000000
	
	bool zeroChecked = false, o=false;
	
	for(int i=0; i<sz; i++){
		
		if(s[i]-'0'==0){
			zeroChecked=true;
		}
		if(zeroChecked==true && s[i] -'0'== 1 ){
			if(o==false){
				oidx = i;
				o= true;
			}
		}
	}
	
	int d = INT_MAX;
	if(oidx!=-1)
		d = sz-oidx-1 ;
	
	cout<<"a = "<<a<<" b= "<<b<<" c="<<c<<" d= "<<d<<endl;;
	
	int min1 = min(a,b);
	int min2 = min(c,d);
	return min(min1,min2);
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	
    	string s;
    	cin >> s;
    	
    	int sz = s.size();
    	
    	cout << solve(s,sz)<<endl;
	}
    
}

