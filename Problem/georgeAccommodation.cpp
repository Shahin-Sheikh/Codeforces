#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int p,q;
    for(int i=0;i<n;i++){
        cin>>p>>q;
        if(p != q){
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}