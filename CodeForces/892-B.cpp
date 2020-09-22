/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	
	bool ar[n];
	memset(ar,0,sizeof(ar));
	
	int dead= 0;
	
	int shedTillPos = n;;
	
	for(int i = n-1; i>=0; i--){
		
		if(i >= shedTillPos){
			dead++;
		}
		
		int tshedTillPos = max( 0, i-arr[i] );
		if(tshedTillPos < shedTillPos){
			shedTillPos = tshedTillPos;
		}
//		cout << shedTillPos <<endl;
		
		
	}
	cout << n-dead<<endl;
    
}

