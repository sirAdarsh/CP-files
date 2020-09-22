#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct Letter{
	int num, width, height;
};

bool comp(Letter l1, Letter l2){
	
	if(l1.width < l2.width){
		return true;
	}
	else if( l1.width == l2.width && l1.height < l2.height  ){
		return true;
	}
	return false;
}

void solve(int n, int w, int h, vector<Letter> letters){
	
	int dp[n+1] = {};
	
	sort(letters.begin(),letters.end(),comp);
	
	dp[0] = 0;
	
//	cout<<"\n\n";
//	
//	for(int i=0; i<n; i++){
//		cout<<"i = "<<i<<"  "<<letters[i].width<<" "<<letters[i].height<<endl;
//	}
//	
//	cout<<"\n\n"<<"w = "<<w<<"  h = "<<h<<endl;
	
	
	for(int i=0; i<n; i++){
		
		if( letters[i].width > w && letters[i].height > h ){
			
			for(int j=i-1; j>=0; j--){
			
				if( letters[j].width < letters[i].width && letters[j].height < letters[i].height && dp[j+1]!=0 ){
					if(dp[i+1] < dp[j+1]){
						dp[i+1] = dp[j+1];
					}
				}
//				dp[3]=2;
			}
			dp[i+1] += 1;
		}
		else{
			
			dp[i+1] = 0;
			
		}
		
		
		
	}
	
//	cout<<"\n\n";
	
//	for(int i=0; i<=n; i++){
//		cout<<"i = "<<i<<"  -> "<<dp[i]<<endl;
//	}
	
	int index;
	
	int maxm = 0;
	
	for(int i=1; i<=n; i++){
		if(dp[i]>maxm){
			maxm=dp[i];
			index = (i-1);
		}
	}
//	cout<<"maxm = "<<maxm<<" index= "<<index<<endl;
	int size = 1;
	if(maxm == 0){
		cout<<0<<endl;
		return;
	}
	
	vector<int> ans;
	ans.push_back(letters[index].num);
	
	int w2 = letters[index].width , h2= letters[index].height;
	int x = maxm-1;
	for(int i=index-1; i>=0; i--){
		
//		cout<<"\n"<<letters[i].num<< " "<< letters[i].width << ' '<< letters[i].height<<" dp - > "<<dp[i+1];
		
		if(x == 0){
			break;
		}
		if( letters[i].width < w2 && letters[i].height < h2 && dp[i+1] == x){
			size++;
			ans.push_back(letters[i].num);
			w2 = letters[i].width;
			h2 = letters[i].height;
			x -= 1;
		}
		
	}
	cout<<maxm<<endl;
	
	for(int i=ans.size()-1; i>=0; i--){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, w, h;
    cin >> n >> w >> h;
    
    vector<Letter> letters(n);
    
    int w1,h1;
    for(int i=0; i<n ; i++){
    	cin >> w1 >> h1;
    	letters[i].num = i+1;
    	letters[i].width = w1;
    	letters[i].height = h1;
	}
    
    solve(n,w,h,letters);
}

