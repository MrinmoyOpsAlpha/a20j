#include <bits/stdc++.h>
using namespace std;

int main(){

    int sx=0,sy=0,sz=0;
    bool ans=false;
    int n;
    cin>>n;

    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
       sx+=x;
       sy+=y;
       sz+=z;

       if(sx==0 && sy==0 && sz==0){
        ans=true;
        break;
       }
        
    }

    if(ans==true){
        cout<<"YES";
    }
    else if(ans==false){
        cout<<"NO";
    }
}