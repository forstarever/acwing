//
// Created by star on 2024/2/22.
//

#include <iostream>

using namespace std;
const int N=1e5+10;
int H[N];
int n;
bool check(int E,int m)
{
    for(int i=0;i<n;i++){
        if(H[i+1]>E)
            E=E-(H[i+1]-E);
        else
            E=E+(E-H[i+1]);
        if(E<0)
            return false;
        if(E>=m)
            return true;
    }
    return true;
}
int main() {
    cin>>n;
    int m=-1;
    for(int i=1;i<=n;i++){
        scanf("%d",&H[i]);
        m=max(m,H[i]);
    }
    int l=0,r=m;
    while(l<r){
        int mid=l+r>>1;
        if(check(mid,m))
            r=mid;
        else
            l=mid+1;
    }
    printf("%d\n",l);
    return 0;
}