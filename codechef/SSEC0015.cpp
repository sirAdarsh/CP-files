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
    
    cin >> s;
    
    ll max=-1;
    ll l,r;
    
    ll n = s.size();
    
    for(int i=0; i<n; i++){
    	
    	ll last=s[i]-'0';
    	ll sum=last;
    	if(sum>max){
    		max=sum;
    		l=i+1;
    		r=i+1;
		}
    	
    	for(int j=i+1; j<n; j++){
    		
    		if(s[j]-'0'!=last+1){
    			break;
			}
			
    		sum += (s[j]-'0');
    		last = s[j]-'0';
    		if(sum>max){
    			max=sum;
    			l=i+1;
    			r=j+1;
			}
		}
    	
	}
	
	cout << max << ':' << l << '-' << r;
    
}

