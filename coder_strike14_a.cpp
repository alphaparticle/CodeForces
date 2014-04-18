#include <bits/stdc++.h>
using namespace std ;


int main(){
 int n , pos;
 string s ;
 cin >> n >> pos ;
 cin >> s ;
 pos -= 1 ;
 if ( pos < s.length()-pos-1 ){
     while ( pos > 0){
     	 cout<<"LEFT\n" ; pos-- ;
     }    
     while ( pos < s.length()){
     	 cout <<"PRINT "<<s[pos]<<endl;
     	 if ( pos != s.length()-1)
     	 cout<<"RIGHT\n" ; 
     	pos++ ;
     }
 }
 else{
     while (pos < s.length()-1 ){
     	cout <<"RIGHT\n" ; pos++ ;
     }
     while ( pos >= 0){
     	 cout<<"PRINT "<<s[pos]<<endl;
     	 if (pos != 0)
     	 cout<<"LEFT\n"; pos-- ;
     }
 }



	return 0 ;
}
