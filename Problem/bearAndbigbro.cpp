#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    if(a>b){
        count = 0;
    }
    else{
        while(a<=b){
            a=a*3;
            b=b*2;
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}