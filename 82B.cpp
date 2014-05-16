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

/*
GCD
ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
*/
static const int L =210 ;

typedef vector <int> vi ;

int main(){
    int n , i , j, k , l ,cont ;
    vector <vi> hash  , sets;
    gi(n) ;
    hash.assign( 201, vi()) ;
    //cout<<"AA" ; 
    repu( i , 1 , n*(n-1)/2 ){
    	 gi(k) ;
    	 //cout << k << endl;
    	 rep(j,k)
    	 {
    	 	 gi(l) ;
    	 	 hash[l].pb(i) ;
    	 }
    }
    if( n == 2 ){
    	  for( i = 1 ; i<= 200 ;i++)
    	  if(hash[i].size() > 0){
    	  cout <<"1 "<<i<<endl;
    	  break;
    	  }
    	  int p =0 , z = i ;
    	  for(i =z+1 ; i <= 200; i++)
    	  if(hash[i].size() > 0)
    	  p++;
    	  
    	  cout <<p;
    	  for(i =z+1 ; i <= 200; i++)
    	  if(hash[i].size() > 0)
    	  cout << " "<<i;
    	  
    	  
    	  return 0;
    } 
  /* cout <<"BB\n" ;
    repu(i,1,200)
    if(hash[i].size() > 0)
    {  
    	cout << i <<"-> " ;
    	rep(j,hash[i].size())
    	cout<<hash[i][j] << " ";
    	cout << endl;
    }
    */
    int used[201] ;
    memset ( used, 0 , sizeof used) ;

    repu( i , 1, 200)
    if( !used[i] && hash[i].size() > 0)
    {    
    	 int sz1,sz2 ;
    	 sz1 = hash[i].size() ;
    	 vector <int> temp ;
    	 temp.pb(i) ;
    	 used[i] = 1 ;
         //cout <<"\n->"<<i ;
    	 repu(j,1,200)
         if( i != j && hash[j].size() == hash[i].size())
    	 {
              sz2 = hash[j].size() ;
              if ( sz1 == sz2 ){
              	  bool f  = true ;
              	  rep(k,sz1)
              	  if ( hash[i][k] != hash[j][k]){ f = false ; break ;}
              	  if(f){
              	  //	cout<<" "<<j;
              	  	temp.push_back(j) ;
              	  	used[j] = 1 ;
              	  }
              }
    	 }
       sets.pb(temp) ;
    }
    
    //pi(sets.size());
    rep(i,sets.size()){
    	cout<< sets[i].size() ;
    	rep(j,sets[i].size())
    	cout<<" "<<sets[i][j] ;
    	cout<<"\n" ;
    }


	return 0;
}
