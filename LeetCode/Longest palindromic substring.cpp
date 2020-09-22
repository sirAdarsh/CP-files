/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

string solve(string s){
	
	// s is a palindrome if s[l] == s[r] && string s[l+1...r-1] is a palindrome
	int n = s.size();
	if(n<2){
		return s;
	}
	
	int isPal[n][n]; // isPal[size][ending index]
	
	memset(isPal, 0, sizeof(isPal));
	
	for(int i=0; i<n; i++){
		isPal[1][i]  = 1;
	}
	
	int max_size = 1;
	int ending_index = 0;
	
	for(int i=1; i<n; i++){
		if(s[i]==s[i-1]){
			isPal[2][i] = 1;
			if(2>max_size){
				max_size =2;
				ending_index = i;
			}
		}
	}
	
	
	for(int i=3; i<=n; i++){
		
		for(int j= (i-1); j<n; j++ ){
			
			if(s[j] == s[j-i+1] && isPal[i-2][j-1]==1 ){
				isPal[i][j] = 1;
				if( i > max_size ){
					max_size = i;
					ending_index = j;
				}
			}
			
		}
		
	}
	
	cout << " max_size = "<<max_size<<"  ending_index = "<<ending_index<<endl;
	
	string str="";
	
	for(int i= (ending_index - max_size + 1 ); i<=ending_index; i++ ){
		str += s[i];
	}
	return str;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    
    cout << solve(s);
    
}

