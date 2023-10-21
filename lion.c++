#include<iostream>
using namespace std;
int main(){
    bool ch=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0,j =n-1; i<n && j >=0; i++, j--)
    {
        if(arr[i]!=arr[j]) {
            ch=1;
            break;
        }
    }
        if(ch == 0){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        return 0;

        
    }



 


