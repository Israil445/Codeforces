
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

// int ternarySearch(int n,int arr[],int x){
// int l=0,h=n-1;
// while(l<=h){
//    int mid1=l+(h-l)/3;
//    int mid2=h-(h-l)/3;
//    if(arr[mid1]==x) return mid1;
//   else if(arr[mid2]==x) return mid2;
//   else if(arr[mid1]>x) h=mid1-1;
//   else if(arr[mid2]<x) l=mid2+1;
//   else {h=mid2-1;l=mid1+1;}
// }   
// return -1;//time complexity=log3(n)
// }

void solve()
{
   ll n,m,rb,cb,rd,cd;
   cin>>n>>m>>rb>>cb>>rd>>cd;

   ll ans=0;
   bool ok=true;
   bool okk=true;

   while(rb!=rd && cb!=cd){
      if(n>rb && ok){
         rb++;
      }
      else{
         rb--;
         ok=false;
      }

      if(m>cb && okk){
         cb++;
         
      }
      else{
         cb--;
         okk=false;
      }
      ans++;
   }

   cout<<ans<<nl;
   
   
 
}

int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(0),cout.tie(0);

   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
   #endif
 
   ll t; cin>>t;

    while(t--)
     {

    solve();

     }



	return 0;
}