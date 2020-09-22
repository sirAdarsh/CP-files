#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> a){
	
	
	int size=0;
	int max = 0;
	
	for(int i=0; i<a.size() ;i++){
		
		for(int j =0; j<a.size() ;j++){
		
			if(abs(a[j]-a[i])<=1){
				cout<<a[j]<<" "<<a[i]<<endl;
				size++;
			}

		}
		if(size>max){
			max=size;
		}
		size = 1;
	}
	return max;
	
	
}
int main(){
	vector<int> a = {4,6,5,3,3,1};
	cout<<solve(a)<<endl;
}
