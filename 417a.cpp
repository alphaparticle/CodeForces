#include <bits/stdc++.h>
using namespace std ;


int main(){
int c,d,n,m , q , k ;
cin >> c >> d >> n >> m >> k ;
q = 0 ;
int part = n*m - k ;
while ( part > 0){
	int z = part%n ;
	if ( z != 0)
	z = 1 ;
    else
    z = 0 ;

	 if ( c*(part/n) + z*c < d*(part) ){
	 	q += c ;
	 	part -= n;
	 }
	 else {
	 	 q += d ;
	 	 part -= 1;
	 }
}
cout << q << endl;
return 0 ;
}
