#include <bits/stdc++.h>
using namespace std ;

vector <int> input ,temp;

int main(){
 int n , k , x ;
 cin >> n >> k >> x ;
 int i , j  ;
 for ( i = 0; i < n ; i++)
 {
 	 cin >> j ;
 	 input.push_back(j) ;
 }

 int ans = 0 ;


 for ( i = 0 ; i < n ; )
 if ( input[i] == x)
 {
 	 int p = 1 ;

 	 for ( j = i+1 ; j < n ; j++)
 	 if ( input[j] == input[i] )
 	 p++;
 	 else
 	 break ;
 	// cout << i <<" yahan "<<p<<endl;
 	 if ( p >= 2 ){
           int left = i-1 , right = j ;
           int tans = p ; ;
           int l = left ; int r = right ;
         //  cout<<i <<" ----------------------------\n";
         //  cout << left <<" "<<right << " "<<p << endl;
             
              while( left >= 0 || right < n ){
                 
                 p = 0 ;
                 
                 if( input[left] == input[right]) {   
                      
                       while ( l >= 0 && input[l] == input[left] ){
                       	    l-- ; p++;
                         }
                        while ( r < n && input[r] == input[right] ){
                        	 r++;  p++ ;
                        }
              //       cout << p << endl;
                           if  ( p >= 3){
                                left = l ; right = r ; tans += p;
                               // cout << "== "<<left <<" "<<right << " "<< p << endl;
                       }
                      else
                     	break ;
                }
                else {
                           bool q =false ;
                           p = 0 ;
                           while ( l >= 0 && input[l] == input[left] ){
                             l-- ; p++;
                            }
                           
                            if  ( p >= 3){
                              left = l ; tans += p; q = true ;
                             // cout << "< "<<left <<" "<<right << " "<< p << endl;
                            }
                            p = 0 ;
                             while ( r < n && input[r] == input[right] ){
                             r++;  p++ ;
               
                             }

                             if  ( p >= 3){
                             
                              right = r ; tans += p; q = true ;
                             // cout <<"> " <<left <<" "<<right << " "<< p << endl;
                            }
                        if(!q)
                        break ;

                }
             

           }
        // cout << i <<" "<<tans<<endl;
          ans = max( ans , tans) ;
          i = j;
 	 }
 	 else
 	 	i++ ;
 }
 else
 i++ ;

cout << ans << endl; 
return 0 ;
}
