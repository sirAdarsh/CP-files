/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
    while(t--){
    	cin >> s;
    	
    	int  n = s.size();
    	
    	int zer[n+1],one[n+1];
    	zer[0]=0;one[0]=0;
    	
    	for(int i=0; i<n; i++){
    		if(s[i]=='0'){
    			zer[i+1]=zer[i]+1;
    			one[i+1]=one[i];
			}
			else{
				zer[i+1]=zer[i];
    			one[i+1]=one[i]+1;
			}
		}
    	
    	int ans=INT_MAX;
    	
    	// 11--00--
    	
    	for(int i=-1; i<n; i++){
    		
    		int z,o;
    		
    		z = zer[i+1];
    		o = one[n]-one[i+1];
    		
    		int cur = z+o;
    		ans = min(ans,cur);
    		
		}
    	
    	// 00---11--
    	
    	for(int i=-1; i<n; i++){
    		
    		int z,o;
    		
    		o = one[i+1];
    		z = zer[n]-zer[i+1];
    		
    		int cur = z+o;
    		ans = min(ans,cur);
    		
		}
    	cout << ans << endl;
	}
}

