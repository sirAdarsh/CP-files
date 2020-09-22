/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

bool eq ( int arr[], int tmp[], int n){
	for(int i=0; i<n; i++){
		if(arr[i]!=tmp[i]){
			return false;
		}
	}
	return true;
}

int solve(int arr[], int n ){
	
	bool ch[1025];
	memset(ch,0,sizeof(ch));
	sort(arr,arr+n);
	
//	for(int i=0; i<n; i++){
//		cout << arr[i] << ' ';
//	}
//	cout<<endl;
	
	for(int i=1; i<1025; i++){
		
		int tmp[n];
		
		for(int j=0; j<n; j++){
			
			int temp;
			temp = arr[j] ^ i;
			tmp[j] = temp;
		}
		sort(tmp,tmp+n);
		
//		for(int i=0; i<n; i++){
//			cout << tmp[i] << ' ';
////		}
//		cout<<endl;
		
		if(eq(arr,tmp, n)){
			return i;
		}
		
	}
	return -1;
	
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
	    int arr[n];
	    for(int i=0; i<n; i++){
	    	cin >> arr[i];
		}
		
		cout << solve(arr,n)<<endl;
	}
    
    
}

