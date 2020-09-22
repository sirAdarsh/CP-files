#include<bits/stdc++.h>
#define ll long long
using namespace std;

void swap(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

int findIndex(string s,int n,int arr[]){
	
	
	for(int i= n-1; i>=0; i--){
		
		for(int j= i-1; j>=0; j--){
//			cout<<arr[j]<<" "<<arr[i]<<"\n";
			if( arr[j] < arr[i] ){
				swap(arr[j],arr[i]);
				return j;
			}
			
		}
		
	}
	return -1;
	
}

string solve(string s){
	
	int n = s.size();
	int arr[n];
	
	for(int i=0; i<n ; i++){
		arr[i] = s[i];
	}
	
	int index=findIndex( s,n,arr);
	
	
	if(index==-1){
		return "no answer";
	}
	
	
	vector<int> temp;
	
//	cout<<"index = "<<index<<endl;
	
	for(int i=index+1; i<n; i++){
//		cout<<arr[i]<<' ';
		temp.push_back(arr[i]);
	}
	sort(temp.begin(),temp.end());
	
	
	string second= "";
	
	for(auto i : temp){
		
		second += i;
		
	}
//	cout<<second<<endl;
//	
	string ans = "";
//	
	for(int i=0; i<=index; i++){
		ans += arr[i];
	}
//	
	ans += second;
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	cout<<solve(s)<<endl;
	}
    
}

