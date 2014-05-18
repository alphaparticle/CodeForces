/*
Date : 
Time : 
author - @alphaparticle
Problem id : 377A
Problem name : MAZES
Problem Link : http://codeforces.com/problemset/problem/377/A
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

char maze[510][510] ;

bool used[510][510] ;
int n , m ,K ;
bool valid( int x , int y){
	 if ( x >= 0 && x < n && y >= 0 && y < m)
	 	return true;
	 else
	 	return false ;
}

int dx[] = { 1, -1  , 0 , 0};
int dy[] = { 0  ,0 , 1 ,-1} ;

void dfs ( int u , int  v ){
	  
	  used[u][v] = true ;
	  K-- ;

	  rep( i , 4){
	  	 if (K)
	  	 {
	  	 	 int x ,y ;
	  	 	 x = u + dx[i] ; y = v +dy[i] ;
	  	 	 if ( valid(x,y))
	  	 	 if( maze[x][y] == '.' )
	  	 	 if( !used[x][y] )
	  	 	 dfs(x,y) ;	
	  	 }
	  }
}

int main(){
   memset ( used , false ,sizeof used) ;
   int i , j ;
   g3i(n,m,K) ;
   
   rep(i,n)
   scanf("%s",maze[i]) ;

   vii safe ;

   rep(i,n)
   rep(j,m)
   if( maze[i][j] == '.' )
   safe.pb(ii(i,j)) ;
  
   K = safe.size() - K ;
  
   dfs(safe[0].P , safe[0].Q );

  rep(i,safe.size())
  if(!used[ safe[i].P] [safe[i].Q])
  maze [ safe[i].P] [safe[i].Q] = 'X' ;
   
   rep(i,n)
   puts(maze[i]) ;
  
	return 0;
}
