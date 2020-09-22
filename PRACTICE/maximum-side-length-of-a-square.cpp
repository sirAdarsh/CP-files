/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int checkSum(vector<vector<int>> &vec, int mid){
	
	int sum=INT_MAX;
	int n,m;
	n = vec[0].size();
	m = vec.size();
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			int Tsum=0;
			if(i+mid-1<n && j+mid-1<m){
				
				for(int k=i; k<i+mid; k++){
					for(int l=j; l<j+mid; l++){
						Tsum += vec[l][k];
					}
				}
				sum = min(Tsum,sum);
			}
			
		}
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    vector<vector<int>> vec = {{1,1,3,2,4,3,2},{1,1,3,2,4,3,2},{1,1,3,2,4,3,2}};
    int threshold = 4;
    
    int n=7, m=3;
    
    int sd = min(n,m);
    
    int lo=2, hi=sd, mid;
    int ans = 0;
    
    while(lo<=hi){
    	mid = lo+(hi-lo)/2;
    	
    	if(checkSum(vec,mid) <= threshold ){
    		lo = mid + 1;
    		cout << checkSum(vec,mid)<<endl;
    		ans = max(ans,mid);
		}
		else{
			hi = mid - 1;
		}
	}
    cout << ans << endl;
}

