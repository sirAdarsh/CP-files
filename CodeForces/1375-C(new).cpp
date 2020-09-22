/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		
		stack<int> st;
		int tp;
		for(int i=1; i<n; i++){
			
			if( arr[i]>arr[i-1] ){
				if(st.size()!=0){
					if( st.top() < arr[i] ){
						st.pop();
						i++;
					}
				}
				else{
					arr[i]=arr[i-1];
				}
			}
			else{
				st.push(arr[i-1]);
			}
		}
		
		if(st.size()==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;	
		}
		
	}
    
}

