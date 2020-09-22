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
    
    int n,k;
    cin >> n >> k;
    
    int m = k/2;
    string s;
    cin >> s;
    
    stack<char> st;
    int cnt=0;
    
    for(int i=0; i<n; i++){
    	
    	if(s[i]=='('){
    		if(cnt<m){
    			st.push('.');
    			cout<<'(';
    			cnt++;
			}
		}
		else{
			if(st.size()!=0){
				st.pop();
				cout<<')';
			}
		}
	}
    
}

