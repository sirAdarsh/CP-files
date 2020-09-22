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
    
    cin >> s;
    
    int ghata = -1;
    
    unordered_map<int,bool> used;
    
    for(int i=0; i<n-k+1; i++){
    	if(i+k<n){
    		if( s[i+k]-'0' > s[i]-'0' ){
	    		ghata = i+k;
	    		break;
			}
		}
		used[i]++;
		used[i+k]++;
	}
	
	if(ghata!=-1){
		int i;
		bool found=false;
		for(i=ghata-1; i>=0; i--){
			if(s[i]!='9' && used[i]!=0){
				s[i]++;
				break;
			}
		}
		if(found){
			i++;
			for( ; i<ghata; i++){
				s[i]='0';
			}
		}
		else{
			s[ghata]=s[ghata-k];
		}
		
	}
	
//	cout << ghata << endl;
	
	vector<char> ans(n,'#');

	for(int i=0; i<n; i++){
		
		int ch = s[i]-'0';
		
		if(ans[i]!='#'){
			continue;
		}
		
		for(int j=i; j<n; j+=k){
			
			ans[j]=ch;
				
		}
			
	}
	
	
    cout << n << endl;
    for(int i:ans){
    	cout <<i;
	}
	cout << endl;
    
}

