#include <bits/stdc++.h>
using namespace std ;
#define m 2000000

vector <long> prime ;
bool p[m];
bool used[m] ;
void seive(){
   
    p[0]=p[1] = false;
    long long i, j ;
    for ( i = 2 ; i < m ; i++){
        if(p[i]){
        prime.push_back(i);
        for ( j = i*i ; j < m ; j += i)
        {  
        	p[j] = false ;
        }
    }
}
}


int main(){

memset (used,false ,sizeof p);
memset ( p ,true ,sizeof p);
seive() ;
long n , k , i, j ;
cin >> n >> k ;
i = 0 ;

if ( n >= 2 && k == 0){
  cout<<"-1";return 0;
}
if ( n == 1 && k == 1){
	 cout<<"-1"; return 0 ;
}

if ( n/2  - 1  >= k  ||   (n == 1 && k > 1) ){
   cout<<"-1" ; return 0 ;
}

i = 0 ;

long  left = k - (n/2) ;
//cout << left ; return 0;

if ( left > 0 ){
i = 2;

cout<<left+1<<" "<<(left+1)*2 <<" ";}

if (left < m && left > 0){
used[left+1] = used[(left+1)*2] = true ;
i = 2 ;
}

long index = 0;

while ( i < n){
  //cout << i <<" >>> "<<prime[index]<<endl;  
    if ( used[prime[index]] == false ){
    	used[prime[index]] = true;
    	cout<<prime[index++]<<" "; i++ ;
    }
    else
    	index++;

}
/*
for ( i = 0 ; i < n-2 ; i++){
	cout<<prime[2*i]<<" "<<prime[2*i+1]<<" ";
}*/

	return 0 ;
}
