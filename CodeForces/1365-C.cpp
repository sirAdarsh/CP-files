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
    int arrA[n];
    
    unordered_map<int,int> m; //number,index(IN A)
    
    for(int i=0; i<n; i++){
    	cin >> arrA[i];
    	m[arrA[i]] = i;
	} 
    int arrB[n];
    for(int i=0; i<n; i++) cin >> arrB[i];
    
    unordered_map<int,int> shifts; //shifts,matches
    
    for(int i=0; i<n; i++){
    	
    	int shift = ( m[arrB[i]] - i );
    	
    	
    	if(shift<=0){
    		shift = shift+n;
		}
		
		shifts[shift]++;
		
    	
	}
	
	int maxx=-1;
	
	
	for(auto i : shifts){
		if(i.second>maxx){
			maxx=i.second;
		}
	}
	cout << maxx<<endl;
    
}

