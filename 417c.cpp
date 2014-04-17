#include <bits/stdc++.h>
using namespace std ;


int main(){
long nteams , matches , kwins , i , j , temp;
cin >> nteams >> kwins ;
matches = nteams*kwins ;

/*
if ( kwins*nteams != matches){
	printf("-1\n"); return 0 ;
}
*/

int wins[nteams+1] ;
for ( i = 1 ; i <= nteams ; i++)
wins[i] = 0 ;
bool f = true ;
//printf("%ld\n",matches);
for ( i = 1 ; i <= nteams && matches  ; i++){

 	 for ( j = i+1 ; j <= nteams && matches  ; j++){
           if ( wins[i] < kwins ){
           	//printf("%ld %ld\n",i,j); 
           	wins[i]++ ; matches-- ;
           }
           else if ( wins[j] < kwins ){
           	//printf("%ld %ld\n",j,i) ;
              wins[j]++;
           	  matches--;
           	} 
	 }
}
if ( matches != 0){
	cout<<"-1\n" ;return 0 ;
}

for ( i = 1 ; i <= nteams ; i++ ){
//cout << i <<" "<<wins[i] << endl;
if ( wins[i] != kwins){
	cout <<"-1\n" ; return  0 ;
}

}
matches = nteams*kwins ;
cout << matches << endl;
for ( i = 1 ; i <= nteams  ; i++){

 	 for ( j = i+1 ; j <= nteams  ; j++){
           if ( wins[i] > 0 ){
           	printf("%ld %ld\n",i,j); 
           	wins[i]-- ; 
           }
           else if (wins[j] > 0){
           	 printf("%ld %ld\n",j,i) ;
             wins[j]--;
           } 
	 }
}

return 0 ;
}
