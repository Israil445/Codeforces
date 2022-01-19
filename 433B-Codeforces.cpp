//Bismillah Hir Rehmanir Rahim
//Allah knows best
#pragma GCC optimize("Ofast")
#pragma  GCC optimize ("O3")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

#define   ll        long long
#define   lli       long long int
#define   ld        long double
#define   PI        2*acos(0.0)
#define   pb        push_back
#define   ppb       pop_back
#define   pf        push_front
#define   ppf       pop_front
#define   inf       1e18
#define   ff        first
#define   ss        second
#define   mp        make_pair
#define   vi        vector<int>
#define   si        set<int>
#define   ii        pair<int,int>
#define   all(v)    (v).begin(),(v).end()
#define   rall(v)   (v).begin(),(v).end(),greater<ll>()
#define   rall1(v)  (v).rbegin(),(v).rend()
#define   uniq(v)   (v).erase(unique(all(v)),(v).end())
#define   read(v)   for(auto &it:v) cin>>it
#define   write(v)  for(auto &it:v) cout<<it<<" "
#define   GCD(a,b)   __gcd(a,b)
#define   nl         "\n"
#define   lb         lower_bound
#define   up         upper_bound
#define   ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

using namespace __gnu_pbds;
using namespace std;




void solve()
{
   ll n; cin>>n;
   ll arr[n];
   ll pre[n+1];
   ll pres[n+1];
   pres[0]=0;
   pre[0]=0;
   vector<ll>v;
   for(int i=1;i<=n;i++){
      cin>>arr[i];
      pre[i]=pre[i-1]+arr[i];
      v.pb(arr[i]);
   }

   sort(v.begin(),v.end());
   //cout<<arr[5]<<nl;

   for(int i=0;i<n;i++){
      pres[i+1]=pres[i]+v[i];
   }

  ll q;cin>>q;
  while(q--){
   ll l,r,type; cin>>type>>l>>r;

   if(type==1){
      cout<<pre[r]-pre[l-1]<<nl;
   }
   else{
      cout<<pres[r]-pres[l-1]<<nl;
   }

  }


}
int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(0),cout.tie(0);

   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
   #endif

   // ll t; cin>>t;

   //  while(t--)
   //   {

     solve();

   //   }



	return 0;
}
