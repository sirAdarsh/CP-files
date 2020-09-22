/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

void solve(int n, int k){
	
	if(n==k){
		cout<<-1<<endl;
		return ;
	}
	
	int arr[n+1];
	
	int i;
	int tick=0;
	
	for(int i=n; i>=1; i--){
		if(k>0){
			arr[i]=i;
			k--;
		}
		else{
			if(tick==0) tick=i;
			arr[i]=i-1;
		}
	}
	if(tick) arr[1] = tick;
	for(int i=1; i<n+1; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,k;
    cin >> n >> k;
    
    solve(n,k);
    
}

