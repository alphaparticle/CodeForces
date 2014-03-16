#include <iostream>
using namespace std ;



int main(){

 int i , j , K ,V , A ,B ;
 cin >> K >> A >> B >>V ;
 int ans = 0 ;
 if ( B+1 >= K ){
 	 while ( A > 0 && B+1 >= K ){
 	 	 ans++ ;
 	 	 A -= V  * (K) ;
 	 	 B -= K-1 ;
  	 }
 }
if ( A > 0 ){
	ans++ ;
	A -= V * (B+1) ;
}
while ( A > 0 ){
	 ans++ ;
	 A -= V ;
}

cout << ans << endl ;


	return 0 ;
}
