/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,k;
    cin >> n >> k;
    
    int sum_min=INT_MAX;
    int cur_sum=INT_MAX;
    
    vector<int> vec;
    vector<int> pre;
    vec.push_back(0);
    pre.push_back(0);
    int idx=-1;
    
    for(int i=1; i<=n; i++){
    	cin >> t;
    	vec.push_back(t);
    	pre.push_back(pre[i-1]+t);
	}
    
    for(int i=1; i<=n-k+1; i++){
    	
    	cur_sum = pre[i+k-1]-pre[i-1];
    	if(cur_sum<sum_min){
    		idx=i;
    		sum_min=cur_sum;
		}
    	
	}
    cout << idx ;
}

