#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	
	stack<int> st;
	stack<int> maxSt;
	maxSt.push(-1);
	int max = -1;
	
	for(int i = 0; i< n ; i++){
		
		int p;
		cin >> p;
		if(p==1){
			
			int val;
			cin >> val;
			
			st.push(val);
			
			if(val>=max){
				max = val;
				maxSt.push(max);
			}
		}
		
		if(p==2){
			
			int s = st.top();
			st.pop();
			if(s==maxSt.top()){
				maxSt.pop();
				max = maxSt.top();
			}
		}
		
		if(p==3){
			cout<<maxSt.top()<<endl;
		}
		
		
	}
	
	
}
