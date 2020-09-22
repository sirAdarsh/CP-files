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
    
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr[n];
    	
    	int initSum=0;
    	
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
    		if(i%2==0) initSum+=arr[i];
		}
	
		int evs=arr[0], ods=0;
		int max_diff=0;
		int curr_diff=0;
		
		int size=1;
		
		for(int i=1; i<n; i++){
			
			if(i%2==0){
				evs+=arr[i];
			}
			else{
				ods+=arr[i];
			}
			size++;
			
			
			curr_diff = ods-evs;
			
//			cout <<"i = "<<i<<" curr_diff = "<<curr_diff<<" size = "<<size<<endl;
			
			if(curr_diff<=0){
				
				if(size%2==0) curr_diff=0,size=0,ods=0, evs=0;; 
				
			}
			else{
				if(curr_diff>max_diff && size%2==0 ){
					max_diff=curr_diff;
				}
			}
			
		}
		
		
		
		evs=0; ods=arr[1]; size=1;
		
		for(int i=2; i<n; i++){
			
			if(i%2==0){
				evs+=arr[i];
			}
			else{
				ods+=arr[i];
			}
			size++;
			
			
			curr_diff = ods-evs;
			
//			cout <<"i = "<<i<<" curr_diff = "<<curr_diff<<" size = "<<size<<endl;
			
			if(curr_diff<=0){
				
				if(size%2==0) curr_diff=0,size=0,ods=0, evs=0;; 
				
			}
			else{
				if(curr_diff>max_diff && size%2==0 ){
					max_diff=curr_diff;
				}
			}
			
		}
		
		
//		cout <<" sum = "<<initSum<<endl;
		cout << max_diff+initSum<<endl;
		
		
	}
    
}

