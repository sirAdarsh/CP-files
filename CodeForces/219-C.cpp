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
int n,k;


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> n >> k;
    cin >> s;
    
    int ans=0;
    
    if(k==2){
    	
    	int min1=0;
    	
    	for(int i=0; i<n; i+=2){
    		if(s[i]!='A'){
    			min1++;
			}	
			if(i+1<n && s[i+1]!='B'){
				min1++;
			}
		}
		
		int min2=0;
		
		for(int i=0; i<n; i+=2){
			if(s[i]!='B'){
				min2++;
			}
			if(i+1<n && s[i+1]!='A'){
				min2++;
			}
		}
		
		if(min1<min2){
			cout << min1 << endl;
			for(int i=0; i<n; i+=2){
				if(i==n-1){
					if(n%2){
						cout <<'A';
					}
					else{
						cout <<"AB";
					}
					break;
				}
				cout << "AB";
			}
		}
		else{
			cout << min2 << endl;
			for(int i=0; i<n; i+=2){
				if(i==n-1){
					if(n%2){
						cout <<'B';
					}
					else{
						cout <<"BA";
					}
					break;
				}
				cout <<"BA";
			}
		}
		return 0;
    	
	}
    
    for(int i=0; i<n; i++){
    	
    	bool ok=false;
    	if(i+2<n){
    		
    		char f = s[i];
    		for(int j=i; j<=i+2; j++){
    			if(s[j]!=f){
    				ok=true;
				}
			}
			if(!ok){
				ans++;
				s[i+1]=char((f+1-65)%k+65);
			}
		}
		if(i+1<n){
			char f=s[i];
			ok = false;
			for(int j=i; j<=i+1; j++){
				if(s[j]!=f){
					ok=true;
				}
			}
				if(!ok){
					ans++;
					s[i]=char((f+1-65)%k+65);
					if(s[i]==s[i-1]){
						s[i]=char((f+2-65)%k+65);
					}
					ok=true;
				}
			
		}
    	
	}
    cout << ans << endl << s << endl;
}

