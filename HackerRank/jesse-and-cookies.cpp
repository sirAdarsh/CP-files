#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin >> n >> k;
    set<int> arr;
    for(int i=0; i<n; i++){
    	int p; cin >> p;
    	arr.insert(p);
	}
	
//	if(n==1){
//		cout<<-1<<endl;
//	}
	
    int ops = 0;
    
    for( auto it = arr.begin(); it!=arr.end(); it++ ){
    	arr.insert(2);
//    	if( *it < k ){
//    		
//    		if( arr.size() == 1 ){
//    			cout<<-1<<endl;
//			}
//			auto it2 = arr.begin();
//			it2 = std::next(it,1);
//			int x = *it2;
//			
//			int num = *it + (2*x);
//			arr.erase(it,it2);
//			arr.insert(num);
//			ops++;
//    		
//		}
//		cout<<arr.size()<<endl;
    	
	}
    cout<<ops<<endl;
}

