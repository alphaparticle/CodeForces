#include <iostream>
using namespace std ;


int main(){
int test , i, j , k , n ,p ;
cin >> test ;
while ( test -- ){
	  cin >> n >> p ;
	  int x = 2 * n + p ;
	  for ( i = 0 ; i < n  && x > 0 ; i++ )
	  for ( j = i+1 ; j < n  && x > 0 ; j++)
	  {
	  	 cout <<i+1 <<" "<< j+1 << endl ;
	  	 x-- ;
	  }
}
return 0 ;

}
