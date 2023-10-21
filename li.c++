#include<iostream>
using namespace std;
int main() {
    long long a,b;
    cin>>a>>b;
    if(a==b && b!=0 && a!=0){
        printf("YES");
    }
    
    
     else if( b-a==1 || a-b==1){
        
        printf("YES");
    }
    else{
        printf("NO");
    }
}
