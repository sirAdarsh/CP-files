
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int tc;
    cin >> tc;
    while(tc--){
    	string s;
    	cin >> s;
    	int sz =s.size();
    	
    	stack<int> zero,one;
    	
    	int chance=0;
    	
    	for(int i=0; i<sz; i++){
    		
    		if(s[i]==48){
    			
    			if(one.size()==0){
    				zero.push(0);
				}
				else{
					one.pop();
					chance++;
				}
    			
			}
			else{
				if(zero.size()==0){
					one.push(1);
				}
				else{
					zero.pop();
					chance++;
				}
			}
    		
		}
		
		if(s.size()==1){
			cout<<"NET"<<endl;
		}
		else{
			if(chance%2){
			cout <<"DA"<<endl;
		}
		else{
			cout<<"NET"<<endl;
		}
		}
		
    	
	}
    
}

