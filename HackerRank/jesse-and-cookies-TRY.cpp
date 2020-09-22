#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> arr;
    for(int i=0; i<n; i++){
    	int p; cin >> p;
    	arr.push(p);
	}
	
	int ops = 0;
	
	while(!arr.empty()){
		
		if( arr.size() == 1 ){
			cout<<-1<<endl;
		}
		
		if( arr.top() > k ){
			break;
		}
		
		int q = arr.top();
		
		if(q<k){
			
			int a = q;
			
			arr.pop();
			
			int b = arr.top();
			
			arr.pop();
			
			int num = a + (2*b);
			
			arr.push(num);
			ops++;
		}
		
		
	}
	
	
    cout<<ops<<endl;
}

