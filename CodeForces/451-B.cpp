/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

bool check(int arr[], int n){
	for(int i=1; i<n; i++){
		if(arr[i-1]>=arr[i]){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	
	int l=-1,r=-1,size=1;
	bool mil=false;
	
	for(int i=n-1; i>0; i--){
		
		if(arr[i] <= arr[i-1]){
			if(!mil){
				r = i;
				mil = true;
				size++;
			}
			else{
				size++;
			}
		}
		else{
			if(mil){
				break;
			}
		}
		
	}
	
	l = r-size+1;
	
//	cout <<"l= "<<l<<" r= "<<r<<endl;
	int p=0;
	for(int i=l; i<=(l+r)/2; i++){
//			cout <<"ew";
			swap(arr[i],arr[r-p]);
//			cout << arr[i]<<" "<<arr[r-p]<<endl;
			p++;
	}
    
//    for(int i=0; i<n; i++){
//    	cout << arr[i] <<" ";
//	}
	
	if(check(arr,n)){
		cout<<"yes"<<endl;
		if(l!=r){
			cout<<l+1<<" "<<r+1<<endl;
		}
		else{
			cout <<1 << " "<<1<<endl;
		}
		
	}
	else{
		cout << "no"<<endl;
	}
    
}

