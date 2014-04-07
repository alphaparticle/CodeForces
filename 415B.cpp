#include <bits/stdc++.h>
using namespace std ;

long long n ,i , j, k, a, b ;

//long arr[100005] ;
long long bs ( long long left , long long right , long long maxi){
 	   //cout<<left<<" "<<right<<endl;
 	   
 	   int mid = (left+right)/2 ;
       
       if ( left == right && a*mid >= b*maxi)
       return left ;
       else if(left == right)
       return -1;

 	   if ( mid*a == b*maxi)
 	   return mid ;
 	   else if(mid*a < b*maxi)
 	   return bs (mid+1 ,right ,maxi);
 	   else if (mid*a > b*maxi)
 	   return bs(0,mid,maxi);    
 

}


int main(){
  cin >> n >> a >> b ;
 for ( i = 0 ;  i < n ; i++){
 	  cin >> j ;
 	  if ( j*a == b){
 	  	 cout<<"0 "; continue ;
 	  }
 	  else if (j*a < b){
 	  	 cout<<j<<" ";
 	  }
 	  else {
         long long maxi = (j*a)/b ;
         long long temp = bs ( 0 , j , maxi) ;
         if ( temp == -1)
         {
         	cout<<"0 ";continue;
         }

         cout<<j-temp<<" ";
 	  }
 }

	return 0 ;
}
