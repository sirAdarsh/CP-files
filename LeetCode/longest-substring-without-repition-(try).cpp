/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int solve(string s){
	
	int l=0,r=1;
	int n = s.length();
	
	if(n<2){
		return n;
	}
	
	int max_len = 1;
	
	int len;
	
	unordered_map<char,int> arr;
	
	arr[s[l]]++;
	
	while( l <n && r<n ){
		
		if( arr[s[r]] == 0 ){
			
			len = r-l+1;
			if(len > max_len){
				max_len =len;
			}
			arr[s[r]]++;
			r++;
		}
		else{
			
			arr[s[l]]--;
			l++;
			
		}
		
//		cout << " l ="<<l<<" r= "<<r<<endl;
		
	}
	return max_len;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s;
    cin >> s;
    
    cout << solve(s)<<endl;
    
}

