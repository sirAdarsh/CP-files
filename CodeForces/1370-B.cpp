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
    	int arr[2*n];
    	
    	vector<int> odds;
    	vector<int> evens;
    	
    	for(int i=0; i<(2*n); i++){
    		cin >> arr[i];
    		if(arr[i]%2){
    			odds.push_back(i);
			}
			else{
				evens.push_back(i);
			}
		}
		
		int idl = n-1;
		int count=0;
		
		int o=odds.size();
		int e=evens.size();
		
		for(int i=0; i<o-1; i+=2){
			if(count==idl){
				break;
			}
			cout << odds[i]+1<< " "<<odds[i+1]+1<<endl;;
			count++;
			
		}
		for(int i=0; i<e-1; i+=2){
			if(count==idl){
				break;
			}
			cout << evens[i]+1<< " "<<evens[i+1]+1<<endl;
			count++;
			
		}
		
		
	}
    
}

