#include<bits/stdc++.h>
#define l long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		l n;
		cin>>n;
		 l arr[n];
		 for(l i=0;i<n;i++){
		 	cin>>arr[i];
		 }
		 sort(arr,arr+n,greater<>());
		 l ans=arr[0];
		 l i=1;
		 l c=1;
		 while(arr[i]!=0 && i<=n-1){
		 	if(c>arr[i]){
		 		break;
			 }
		 	ans += (arr[i]-c);
			 c++; 
			 i++;
		 }
		 cout<<ans<<endl;
	}
}
