/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	int n,m;
    	cin >> n >> m;
    	cin >> s;
    	
    	int alpha[26];
    	memset(alpha, 0, sizeof(alpha));
    	
    	int A[26];
    	memset(A,0,sizeof(A));
    	
    	unordered_map<int,int> ops;
    	
    	
    	int tmp;
    	
    	for(int i=0; i<m; i++){
    		cin >> tmp;
    		ops[tmp-1]++;
		}
		
		for(int i=0; i<n; i++){
			alpha[s[i]-'a']++;
			if( ops[i] ){
				while(ops[i]--){
					for(int j=0; j<26; j++){
						A[j] += alpha[j];
					}
				}
			}
		}
    	
    	for(int i=0; i<26; i++){
    		A[i] += alpha[i];
		}
    	
    	for(int i=0; i<26; i++){
    		cout << A[i] <<" ";
		}
		cout << endl;
    	
	}
    
}

