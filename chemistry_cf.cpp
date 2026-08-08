#include <bits/stdc++.h>
using namespace std ;
void her_answer(){
    int n , k ;
    cin >> n >> k ;
    vector<int> count (26,0) ;
    for(int i = 0 ; i < n ; i++){
        char x ;
        cin >> x ;
        count[x-'a']++ ;
    }
    for(int i = 0 ; i< 26 ; i++){
        if(k > 0 && count[i] % 2 != 0){
            count[i]--; 
            k-- ;
        }
    }
    if(k){
        for(int i = 0 ; i < 26 ; i++){
            if(k==0 )
            break ;

            int p = count[i] ;
            count[i] = max(0 , count[i]-k) ;
            k = k - min(k,p) ;

        }
    }
    int odd_count = 0 ;
    for(int i = 0 ; i < 26 ; i++){
        if(odd_count==0 && count[i] % 2 != 0){
            odd_count = 1 ;
            continue ; 
        }
        if(count[i] % 2 != 0 ){
            cout<< "no" << endl ;
            return ; 
        }
    }
    cout << "yes" << endl ;
    
}
int main(){
    ios_base :: sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long long t ; 
    cin >> t   ;
    while(t--) {
        her_answer() ;
    }
}