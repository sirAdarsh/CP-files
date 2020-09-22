// Hare Krishna

#include<bits/stdc++.h>
#define ll long long
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
     	unordered_map<int,int> m;
     	
     	for(int i=0; i<n; i++){
     		int x;
     		cin >> x;
     		arr[i] = x-1;
     		m[arr[i]]++;
		 }
		 
		 sort(arr,arr+n);
		 
		 int p = 0;
		 
		 bool kasht= false;
		 int i;
		 
		 for(i=0; i<n-1; i++){
		 	
		 	cout<<p<<"  " <<endl;
		 	
//		 	if(i!=n-1)
		 		if(arr[i+1]==arr[i]){
				 	if(i==n-2){
				 		kasht = true;
					 }
		 			continue;
				 }
			 
			 int tempP = ( i + p );
			 
			 if( tempP >= arr[i] ){
			 	p = i;
			 }
			 
		 }
		 if(kasht){
		 	i++;
		 	if( i + p >= arr[i] ){
		 		p = i;
		 		cout << p<<endl;
			 }
		 }
		 
		 
	 }
    
}

