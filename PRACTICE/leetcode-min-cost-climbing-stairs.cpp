/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    vector<int> v= {10,15,20};
    int sz = v.size();
    
    int minCost[sz+1];
    minCost[0] = 0;
    minCost[1] = 0;
    
    for(int i=2; i<=sz; i++){
    	minCost[i] = min( minCost[i-1] + v[i-1] , minCost[i-2] +v[i-2] );
	}
    cout<<minCost[sz]<<endl;
}

