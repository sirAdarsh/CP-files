#include<bits/stdc++.h>
using namespace std;
int main(){
	float n;
	cin >> n;
	int arr[(int)n];
	unordered_map<int,int> map;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		map[arr[i]]++;
	}
	if(n==1){
		cout<<"YES"<<endl;
	}
	else{
		
		int maxOcc = 0;
		int maxOccElement = -1;
		
		for(auto m : map){
			if(m.second > maxOcc){
				maxOcc = m.second;
				maxOccElement = m.first;
			}
		}
//		cout<<maxOcc<<" "<<maxOccElement; maxOcc = 2, el=1
		if( maxOcc <= ceil(n/2) ){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
		
	}
}
