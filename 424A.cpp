#include <bits/stdc++.h>
using namespace std; 

int main(){

  int stand ,sit , n , i,ans  ;
  string s ;
  cin >> n >> s ;
  stand = sit = 0; 
  for ( i = 0 ; i < s.length() ; i++)
  if ( s[i] == 'X' )
  stand++;
else
	sit++ ;

if (  stand >= n/2 ){
	 ans = stand - n/2 ;
	 int temp = ans ;
	 for ( i = 0 ; i < s.length() && ans ; i++){
	 	 if ( s[i] == 'X')
	 	 {
	 	 	s[i] ='x' ; ans-- ;
	 	 }
	 }
	 cout << temp << endl << s << endl; 
}
else {
	 ans = sit - n/2 ;
	 int temp = ans ;
	 for ( i = 0 ; i < s.length() && ans ; i++){
	 	 if ( s[i] == 'x')
	 	 {
	 	 	s[i] ='X' ; ans-- ;
	 	 }
	 }
	 cout << temp << endl << s << endl; 
}


	return 0 ;
}
