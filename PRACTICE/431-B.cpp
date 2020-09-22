/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int qu[5] = {0,1,2,3,4};
    
    int arr[5][5];
    for(int i=0; i<5; i++){
    	for(int j=0; j<5; j++){
    		cin >> arr[i][j];
		}
	}
	
    
    int max=0;
    
    do{
    	int cur = 0;
    	
    	for(int i=0; i<5; i++){
    		for(int j=i; j+1<5; j+=2){
    			cur += arr[qu[j]][qu[j+1]];
    			cur += arr[qu[j+1]][qu[j]];
			}
		}
    	
    	if(cur > max) max = cur;
	}
	while(next_permutation(qu,qu+5));
    cout << max << endl;
}

