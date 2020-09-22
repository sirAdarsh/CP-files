/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++) cin>>ar[i];
    int max=1;
    int cur=1;
    int prev=ar[0];
    for(int i=1; i<n; i++){
    	if(ar[i]>=prev){
    		cur++;
    		prev=ar[i];
		}
		else{
			if(cur>max) max=cur;
			cur=0;
			prev=ar[i];
			i--;
		}
	}
	if(cur>max) max=cur;
	cout << max << endl;
    
}

