/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;
int r,g,b,w;
int odds;

string solve(){
	
	int minn =INT_MAX ;
    	
    	minn = min(minn, r);
    	minn = min(minn,g);
    	minn = min(minn,b);
    	if(w%2){
    		
    		if(odds==0){
    			return "Yes";
			}
    		else if(odds>=2 && minn>0){
    			return "Yes";
			}
			else{
				return "No";
			}
    		
		}
		else{
			if(odds<=1){
				return "Yes";	
			}
			if(odds==3 && minn>0){
				return "Yes";
			}
			else{
				return "No";
			}
			
		}
    	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	
    	cin >> r >> g >> b >> w;
    	
    	odds = 0;
    	if(r%2) odds++;
    	if(g%2) odds++;
    	if(b%2) odds++;
    	cout << solve()<<endl;
    	
	}
    
}

