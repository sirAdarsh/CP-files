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
    
    ll a,k;
    cin >> a >> k;
    
    s = to_string(a);
    int n = s.size();
    
    for(int i=0; i<n-1; i++){
    	if(k==0) break;
    	if(s[i+1]>s[i]){
    		swap(s[i+1],s[i]);
    		k--;
    		i=-1;
		}
	}
	cout << s << endl;
    
}

