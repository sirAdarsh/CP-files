#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		
	string s;
	cin >> s;
	
	unordered_map<char,int> map;
 	string ans="";
 	int size = s.size();
		
		for(int i=0;i<size;i++){
			
			if(i==size-1){
				if(s[i]!=s[i-1]){
					if(map.find(s[i])==map.end()){
					ans+=s[i];
					map[s[i]]++;
					}
				}
			}
			
			if(s[i]==s[i+1]){
				i++;
			}else{
				if(map.find(s[i])==map.end()){
					ans+=s[i];
					map[s[i]]++;
				}
			}
			
		}
		int ansSize = ans.size();
		int arr[ansSize];
		for(int i=0;i<ansSize;i++){
			arr[i] = (int) ans[i];
		}
		sort(arr,arr+ansSize);
		for(int i=0;i<ansSize;i++){
			ans[i]=(char) arr[i];
		}
	
		cout<<ans<<endl;
	}
	
}
