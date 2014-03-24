//alphaparticle
#include <bits/stdc++.h>
using namespace std ;
typedef pair  <int , char> ic ;

int main(){
 
 int len ;string s ;
 vector < ic > v ;
 int i , j, k , ans ;
 cin >> len ;cin >> s ;
 bool stand [len] ;
 memset ( stand , true , sizeof stand );
for ( i = 0 ;  i < len ; i++){
	 if (s[i] == 'L' )
	 {
	 	 v.push_back ( ic( i , s[i])) ;
	 	
	 }
	 else if (s[i] == 'R' )
	 {
	 	 v.push_back ( ic( i , s[i])) ;
	 }
}
if ( v.size() > 0){
if ( v[0].second == 'L' ){
	 int  k = v[0].first ;
	 stand[k] = false ;
	
	 while (k >= 0)
	 stand[k] = false , k-- ;
}

if ( v[ v.size()-1].second == 'R' ){
	int k = v[v.size()-1].first ;
	for ( ; k < len ; k++)
	stand[k] = false ;
}
}


for ( i = 1 ; i < v.size() ; i++){
   if (v[i].second == 'L' && v[i-1].second == 'R' ){
   	  for ( j = v[i-1].first ; j <= v[i].first ; j++)
   	  stand[j] = false ;

   	  if ( (v[i].first - v[i-1].first)%2 == 0)
   	  stand [ (v[i].first + v[i-1].first)/2 ] = true ;
   }
}

ans = 0 ;
for ( i = 0 ; i < len ; i++){
//cout << stand[i] ;
if ( stand[i])
ans++;
}
//cout <<endl;
cout << ans << endl; 


	return 0;
}
