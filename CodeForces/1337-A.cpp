#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c,d;
		cin >> a >> b >> c >>d;
		int arr[3]={c,c,b};
		sort(arr,arr+3);
		for(int i=0;i<3;i++){
			cout<<arr[i]<<" ";
		}cout<<endl;
	}
}
