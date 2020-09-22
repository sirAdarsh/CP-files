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
    string s1,s2;
    cin >> s1 >> s2;
    int ans=INT_MAX;
    
    int sz2 = s2.size();
    
    for(int i=0; i<s1.size()-sz2+1; i++){
    	
    	int un_match=0;
    	
    	for(int j=0; j<sz2; j++){
    		if( s2[j]!=s1[i+j] ){
    			un_match++;
			}
		}
    	
    	ans = min(ans,un_match);
    	
	}
    cout << ans << endl;
}

