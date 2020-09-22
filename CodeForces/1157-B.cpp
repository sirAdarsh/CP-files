/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    string seq;
    cin >> seq;
    
    int arr[n];
    for(int i=0; i<n; i++){
    	arr[i] = seq[i]-'0';
	}
	
	int check[10];
	
	for(int i=1; i<=9; i++){
		cin >> check[i];
	}
	bool e =false;
	
	for(int i=0; i<n; i++){
		
		if(!e){
			if(arr[i] < check[arr[i]]){
			
				e = true;
				
				cout<<check[arr[i]];
				i++;
				for(int j= i; j<n; j++ ){
					if(arr[j]>check[arr[j]]){
						break;
					}
					cout<<check[arr[j]];
					i++;
				}
			}
		}
		if(i<n)
		cout<<arr[i];
	}
	
    
}

