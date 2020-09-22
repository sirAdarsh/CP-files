#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	
    	int n,k;
    	cin >> n >> k;
    	
    	int A[n], B[n];
    	
    	vector<int> temp;
    	
    	for(int i=0; i<n; i++){
    		cin >> A[i];
		}
		sort(A,A+n,greater<int>());
		
		for(int i= n-k; i<n; i++){
			temp.push_back(A[i]);
		}
		
		for(int i=0; i<n; i++){
			cin >> B[i];
			temp.push_back(B[i]);
		}
		
		sort(temp.begin(), temp.end(),greater<int>());
		
		int sum = 0;
		
		for(int i=0; i<n-k; i++){
			sum += A[i];
		}
		for(int i =0; i<k; i++){
			sum += temp[i];
		}
		
		
    	cout<<sum<<endl;
	}
    
}

