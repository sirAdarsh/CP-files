#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		
		string s;
		cin >> s;
		int z=0, o=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='0'){
				z++;
			}else{
				o++;
			}
		}
		string ans = "";
		if(z==0 || o==0){
			ans = s;
		}
		else{
			
			if(s[0]=='0'){
				
				int times = s.size();
				string str = "01";
				while(times--){
					ans += str;
				}
	
			}
			
			else if(s[0]=='1'){
				
				int times = s.size();
				string str = "10";
				while(times--){
					ans += str;
				}	
			}
			
		}
		cout<<ans<<endl;
		
	}
}
