/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int countBitDiff(int num, int cmp){
	
	int x = num^cmp;
	int count=0;
	if(x&1) count++;
	while(x!=0){
		x>>=1;
		if(x&1) count++;
	}
	return count;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,m,k;
    cin >> n >> m >> k;
    m++;
    int arr[m];
    for(int i=0; i<m; i++) cin>>arr[i];
    int cmp = arr[m-1];
    int friends=0;
    for(int i=0; i<m-1; i++){
    	if(countBitDiff(arr[i],cmp) <= k ) friends++;
	}
    cout<<friends<<endl;
}

