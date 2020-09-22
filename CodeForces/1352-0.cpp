#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		
		vector<int> arr;
		
		int i =0;
		
		while(n != 0){
			
			int p = n%10;
			if(p!=0){
				arr.push_back(p * pow(10,i) );
				
			}
			i++;
			n /= 10;
			
		}
		cout<<arr.size()<<endl;
		for(auto i : arr){
			cout<<i<<" ";
		}
		cout<<endl;
		
	}
	
	
}
