#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		string s;
		cin >> s;
		
		int arr[s.size()];
		
		bool first=false,last=false;
		int indexFirst=-1;
		int indexLast=-1;
		
		for(int i=0;i<s.size();i++){
			arr[i] = s[i] - 48;
			
			if(first == false && arr[i]==1){
				indexFirst = i;
				first=true;
			}else{
				
				if(arr[i]==1){
					indexLast = i;
				}
				
			}
		}
//		cout<<indexFirst<<" "<<indexLast;
		if(indexFirst==indexLast || indexFirst == -1 || indexLast == -1 ){
			cout<<0<<endl;
		} else{
			int zeros=0;
			for(int i = indexFirst;i<=indexLast;i++){
				if(arr[i]==0){
					zeros++;
				}
			}
			
			cout<<zeros<<endl;
		}
		
		
		
		
		
		
		
	}
	
}
