#include<bits/stdc++.h>
using namespace std;
#define ll long long





ll count_1s_in_Num(ll n)
{
   	ll count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 ll T;
 cin>>T;
 while(T--)
 {
  ll N,Q,i,r;
  cin>>N>>Q;
  ll A[N];
  for(i=0;i<N;++i)
  {cin>>A[i];}
  while(Q--)
  {
   ll  k=0;
   ll P;
   cin>>P;
ll arr[N];
   for(i=0;i<N;++i)
  {
   arr[i]=P ^ A[i];
   r=count_1s_in_Num(arr[i]);
   if(r%2==0)
   {
    k++;}
   
  }
  cout<<k<<" "<<N-k<<endl;

  }
  }
}





