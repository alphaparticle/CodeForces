/*
Date :
Time :
author - @alphaparticle
Problem id :
Problem name :
Problem Link :
*/

#include <bits/stdc++.h>
using namespace std ;

#define INF 18446744073709551610
#define LIM 1000000
#define gi(n)                      scanf("%d", &n)
#define gc(c)                      scanf("%c", &c)
#define g2i(n,m)                   scanf("%d %d", &n , &m)
#define g3i(a,b,c)                 scanf("%d %d %d",&a ,&b ,&c)
#define gl(n)                      scanf("%ld",&n)
#define g2l(a,b)                   scanf("%ld %ld",&a ,&b)
#define g3l(a,b,c)                 scanf("%ld %ld %ld",&a,&b,&c)
#define pb                         push_back
#define rep(i,n)                   for( int i = 0 ; i < n ; i++)
#define repu(i,a,b)                for(int i = a ; i <= b ; i++)
#define repd(i,b,a)                for(int i = b ; i >= a ; i--)
#define P                          first
#define Q                          second
#define pi(n)                      printf("%d\n",n)
#define ps(s)                      printf("%s\n",s.c_str())
#define p2i(a,b)                   printf("%d %d\n",a,b)
#define FILL (x,a)                 memset ( x , a ,sizeof x)

typedef long long ll ;
typedef pair <int,int> ii ;
typedef vector < ii > vii ;
typedef vector < vii > viii ;
typedef vector <ll> vi ;
/*
GCD
ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
*/

ll arr [100010] ;
set < ll > even ;
set < ll > odd ;

vector  < vi > V ;

int main(){
 ll n , k , p , i , j  ;
 cin >> n >> k >> p ;
 ll es , eo ;
 es = p ; eo = k-p ;
  for( i = 0 ; i < n ; i++){
     cin >> arr[i] ;
     if ( arr[i] %2 == 0)
        even.insert ( arr[i] ) ;
     else
        odd.insert ( arr[i]) ;
  }

  if( p  > even.size() + odd.size()/2  ){
     cout <<"NO" ; return 0 ;
  }

  if ( p > even.size() ){
       ll se = even.size() ; ll so = odd.size() ;
       so -=  (p - se) * 2 ;
       if ( so < k-p )
       {
           cout <<"NO" ; return 0 ;
       }
  }

  if ( k-p > odd.size() ){
      cout <<"NO" ; return 0 ;
  }

  ll noodds = k - p ;
  //cout <<"YES\n" ;
  V.assign ( k , vi() ) ;

  set < ll > :: iterator it , fit , zit , mit ;

  int index = 0 ;
  if( even.size() > 0 )
  for ( it = even.begin() ; it != even.end() && p ; it++ )
  {
       V[index++].pb( *it ) ; p-- ;

  }
  mit = it ;
  it = odd.begin() ;
  if ( p > 0 &&  ( mit == even.end() || even.size() == 0 ) ){
     //cout <<"yahan";
      for ( it = odd.begin() ; it != odd.end()  && p;  ){
             //cout << *it <<" ";
             fit = it ;
             fit++ ;
             if( fit == odd.end())
             break ;
             p-- ;
             V[index].pb(*it) ; V[index++].pb(*fit) ;
             it = fit ;
             if( it != odd.end())
             it++ ;
      }
   // cout <<"wahan" ;
  }

      for (   ; it != odd.end() && noodds ; it++ ){
         V[index++].pb(*it) ; noodds -- ;
      }
//cout <<"idhar" ;
      if ( it != odd.end() ){
            index -- ;
           while ( it !=  odd.end())
           V[index].pb(*it) , it++ ;
      }
//cout <<"kidhar" ;

if ( p == 0  || mit != even.end())
if( even.size() > 0)
{   while ( mit != even.end() )
    V[0].pb(*mit) , mit++ ;
}
bool f = true ;
ll y , z ;
y = z = 0 ;
for( i = 0 ; i < k ; i++){
    // printf("%d", (int) V[i].size());
     ll temp = 0 ;
     for ( j = 0 ; j < (int)V[i].size() ; j++)
      temp += V[i][j] ;
     if( temp % 2 == 0)
      y++;
      else
      z++ ;

}
//cout << y <<" " << z << endl;
//cout << es <<" "<<eo << endl;
if( y != es)
f = false ;
if( z != eo)
f = false ;

if( !f ){
     cout <<"NO\n" ;return 0 ;
}
else
    cout << "YES\n" ;

for( i = 0 ; i < k ; i++){
     printf("%d", (int) V[i].size());
     for ( j = 0 ; j < (int)V[i].size() ; j++)
     cout <<" "<<V[i][j] ;

     printf("\n");
}



	return 0;
}
