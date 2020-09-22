#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v={1,5,4,2,3};
	int m =2;
	int size = v.size();
	sort(v.begin(),v.end());
	int parts = size/m;
	int sum = 0;
	cout<<parts<<endl;
	
	int arr[(int)size];
	int add=0;
	int c=0;
	int times=0;
	
	int jun = parts*parts;
	
	for(int i = 0;i<size;i++){
		
		if( i == jun ){
			for(int k = i ; k<size; k++){
				arr[k] = add;
			}
			break;
		}
		
		if( c % m == 0 ){
			add++;
		}
		arr[i] = add;
		c++;
		
	}
	int ans=0;
	for(int i=0;i<size;i++){
		ans+=(v[i]*arr[i]);
//		cout<<v[i]<<" ";
//		cout<<arr[i]<<" ";
//		cout<<endl;
	}
	cout<<ans<<endl;
}
