// Hare Krishna

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	
	ll max_so_far = arr[0];
//	int max_sum_here = 0;
	
	ll max_el = arr[0];
	
	ll maxScore = max_so_far - max_el;
	
	ll prevIdx = 0;
	
	
	ll tempScore = maxScore;
	
	for(int i=1; i<n; i++){
		
		max_so_far += arr[i];
		
		if(max_so_far <= 0){
			max_so_far = 0;
//			cout<<" HERE : "<<i<<endl;
			prevIdx = i+1;
		}
		
		else{
			
			ll tempM = INT_MIN;
			
			for(int j=prevIdx; j<=i; j++){
				cout << "tempM = "<<tempM<<" ";
				if( arr[j] > tempM ){
					tempM = arr[j];
				}
			}
			
			cout << "prevIdx = "<<prevIdx <<"  ";
			
			max_el = tempM;
			
			tempScore = max_so_far - max_el;
			if(tempScore > maxScore){
				maxScore = tempScore;
			}
			
		}
		
		cout << max_so_far << " " << maxScore << endl;
		
	}
	cout<<maxScore<<endl;
	
}

