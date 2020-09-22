#include<bits/stdc++.h>
#define l long
using namespace std;

void solve(l arrC[],l arrF[],int n){
	
	unordered_map<l,int> map;
	
		sort(arrC,arrC+n);
		sort(arrF,arrF+n);
		
		for(int i=0;i<n;i++){
			
			if(i==0){
				map[arrC[i]]++;
			}
			else{
				if(map.find(arrC[i]) !=map.end() ){
					map[arrC[i]]++;
				}
				else{
					cout<<"NO"<<endl;;
					return;
				}
			}
			
			if(arrF[i]>arrC[i]){
				map[arrF[i]]++;
			}
			else{
				cout<<"NO"<<endl;
				return;
			}
		}
		cout<<"YES"<<endl;
}

int main(){
	int t;
	int x;
	cin>>t>>x;
	while(t--){
		int n;
		cin>>n;
		
		l arrC[n],arrF[n];
		for(int i=0;i<n;i++){
			cin>>arrC[i];
		}
		for(int i=0;i<n;i++){
			cin>>arrF[i];
		}
		solve(arrC,arrF,n);
	}
	
	
	
	
	
	
	
}
