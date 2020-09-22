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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> s;
    int n = s.length();
    
    int Q[n];
    Q[n-1]=0;
    for(int i=n-2; i>=0; i--){
    	if(s[i+1]=='Q'){
    		Q[i]=Q[i+1]+1;
		}
		else{
			Q[i]=Q[i+1];
		}
	}
    
	int ans=0;
	
	for(int i=0; i<n; i++){
		
		if(s[i]=='Q'){
			
			for(int j=i+1; j<n; j++){
				
				if(s[j]=='A'){
					
					ans += Q[j];
					
				}
				
			}
			
		}
		
	}
    cout << ans << endl;
}

