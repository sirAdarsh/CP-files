#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		
		bool RC = false;
		
		int posForLastAl;
		
		for(int i=1; i<s.size(); i++){
			if( s[i] >=65 && s[i] <= 90 ){
				if( s[i-1] >=48 && s[i-1] <= 57){
					RC = true;
					break;
				}
				posForLastAl=i;
			}
		}

		if( RC ){
			
			int cNum=0;
			
			int posOfC;
			
			for(int i = s.size()-1, j=0; i>=0; i--,j++){
				
				if(s[i]>=48 && s[i]<=57){
					cNum += pow(10,j) * ( s[i] - 48) ;  
				}
				else{
					posOfC = i;
					break;
				}
			}
			
			string row = "";
			char c = 64;
//			cout<<cNum<<endl;
			while( cNum > 26 ){
				cNum = cNum - 26;
				c++;
				cout<<c<<endl;
			}
			
			if(c!=64)
			row += c;
			
			if(cNum!=0){
				row += (64+cNum);
			}
			
//			cout<<row;

			int num=0;
//			cout<<posOfC<<endl;
			for(int i=posOfC-1, j=0; i>0; i--,j++){
				num += pow(10,j) * (s[i]-48);
			}
			

			cout<<row<<num<<endl;
		}
		
		else{
			
			
			int col = 0;
			
			for(int i= s.size()-1, j = 0;  i>=0 ; i--){
				
				if(s[i]>=65 && s[i<=90]){
					col += pow(26,j) * (s[i]-64);
					j++;
				}
				
			}
			
			
			
			
//			cout<<col<<endl;
			int cNum=0;
			for(int i = s.size()-1, j=0; i>=0; i--,j++){
				
				if(s[i]>=48 && s[i]<=57){
					cNum += pow(10,j) * ( s[i] - 48) ;  
				}
				else{
					break;
				}
			}
			cout<<"R"<<cNum<<"C"<<col<<endl;
		}
		

	}
}
