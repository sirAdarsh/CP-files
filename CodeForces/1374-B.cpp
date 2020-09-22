/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

ll solve(int n){
	
	if(n==1){
		return 0;
	}
	if(n==2){
		return -1;
	}
	
	int count=0;
	while(1){
		
		if(n==1){
			return count;
		}
		if(n==2){
			return -1;
		}
		
		if(n%6==0){
			n/=6;
			count++;
		}
		else if(n%3==0){
			n/=3;
			count += 2;
		}
		else{
			return -1;
		}
		
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	cout << solve(n) << endl;
	}
    
}

