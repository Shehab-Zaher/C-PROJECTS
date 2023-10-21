#include<iostream>
using namespace std;
typedef long long ll;
int main(){
ll a,b,k;
cin>>a>>b>>k;
if(a%k==0 && b%k==0){
    printf("Both");
}
else if(a%k==0){
    printf("Memo");
}
else if(b%k==0){
    printf("Momo");
}
else{
    printf("No one");
}
return 0;

}
