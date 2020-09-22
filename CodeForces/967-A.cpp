/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,s;
    cin >> n >> s;
    
    int prevhrs=0;
    
    int a,b;
    
    int currhrs;
    
    for(int i=0; i<n; i++){
    	
    	cin >> a >> b;
    	
		currhrs = (60*a+b);
		
		int diff = currhrs-prevhrs;
		
		if(i==0){
			if(diff>s){
				cout << 0 <<" "<<0;
				return 0;
			}
		}
		
		if(diff>2*s+1){
			prevhrs += s+1;
			cout << prevhrs/60 << " " << prevhrs%60;
			return 0;
		}
		prevhrs= currhrs;
    	
	}
    
    currhrs += s+1;
   	cout << currhrs/60 <<" "<<currhrs%60;
}

