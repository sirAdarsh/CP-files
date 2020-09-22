/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void fillArr( int arr[] ){
	for(int i=3; i<=10001; i++){
		if(i%2){
			arr[i]=arr[i-1]+1;
		}
		else{
			arr[i]=arr[i-1]+3;
		}
	}
}

int solve(int x, int y, int arr[]){
	if(x<0 || y<0){
		return -1;
	}
	if(x==0){
		if(y==0){
			return arr[0];
		}
		return -1;;
	}
	if(x==1){
		if(y==1){
			return arr[1];
		}
		return -1;
	}
	
	
	if( y==x-2 || y==x ){
		if(y==x-2){
			return arr[x];
		}
		else{
			return arr[x]+2;
		}
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int arr[100001];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    fillArr(arr);
    int n;
    cin >> n;
    while(n--){
    	int x,y;
    	cin >> x >> y;
    	
    	if(solve(x,y,arr)==-1){
    		cout << "No Number"<<endl;
		}else{
			cout << solve(x,y,arr)<<endl;
		}
    	
	}
    
}

