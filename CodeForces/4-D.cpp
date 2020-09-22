#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct Letter{
	int num, width, height;
};

bool comp(Letter l1, Letter l2){
	
	if(l1.width < l2.width){
		return true;
	}
	if(l1.height < l2.height){
		return true;
	}
	return false;
}

int findMaxLetters(vector<Letter> letters, int w, int h){
	
	sort(letters.begin(), letters.end(), comp);
	
	int n = letters.size();
	int dp[n+1] ;  // memoizing the max num of letters inherited
	
	for(int i=0; i<n; i++){
		
		dp[i] = 0;
		
		for(int j = 0; j<n; j++){
			
			if( letters[j].width > w && letters[j].height > h ){
				
				if( dp[j] > dp[i] ){
					dp[i] = dp[j];
				}
				
			}
			
		}
		dp[i] += 1;
		
	}
	return  *max_element(dp,dp+n);
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, w, h;
    cin >> n >> w >> h;
    
    int w1, h1;
    
    vector<Letter> letters(n+1);
    
    for(int i=1; i<=n; i++){
    	cin >> w >> h;
    	letters[i].num = i;
    	letters[i].width = w;
    	letters[i].height = h;
	}
	
	cout<<findMaxLetters(letters,w,h);
	
    
}

