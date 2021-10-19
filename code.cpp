#include <bits/stdc++.h>
int main(){
    int n;
    cin>>n;
    cnt=0;
    while(n--){
        int p,v,t;
        cin>>p>>v>>t;
        if(p+v+t>=2){
            cnt+=1;
        }
    }cout<<cnt<<endl;
    return 0;
    
}
