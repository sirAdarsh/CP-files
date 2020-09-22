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
    
    int m,x;
    cin >> m >> x;
    
    int tmp[m];
    for(int i=0; i<m; i++) cin >> tmp[i];
    
    vector<int> arr;
    
    for(int i=0; i<m; i++){
    	for(int j=1; j<=tmp[i]; j++){
    		arr.push_back(j);
		}
	}
////	
//	for(auto i :arr){
//		cout<<i<<" ";
//	}cout<<endl;
	
	int n = arr.size();
    
    int  l, r;
    
    int max = 0;
    
    for(int i=0; i<n; i++){
    	
    	int sum = 0;
    	
    	if( i+x-1 <n ){
    		
    		for(int j=i; j<(i+x); j++){
    			sum += arr[j];
			}
    		if(sum>max){
    			max = sum;
			}
		}
		
		else{
			
			
			
			for(int j=i; j<n; j++){
				sum += arr[j];
			}
			
			int k = x-(n-i);
			
			for(int j=0; j<k; j++){
				sum += arr[j];
			}
			
			if(sum > max){
				max= sum;
			}
			
		}
    	
//    	cout <<sum<<endl;
    	
	}
	
	cout << max<<endl;
    
}

