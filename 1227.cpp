//
// Created by star on 2024/2/22.
//

#include <iostream>

using namespace std;
const int N=1e5+10;
int h[N],w[N];
int n,k;
bool check(int x)
{
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+(h[i]/x) * (w[i]/x);
    }
    return ans>=k;
}
int main() {
    cin>>n>>k;
    for(int i=0;i<n;i++)
        scanf("%d %d",&h[i],&w[i]);
    int l=1,r=1e5+1;
    while(l<r){
        int mid=l+r+1>>1;
        if(check(mid))
            l=mid;
        else
            r=mid-1;
    }
    printf("%d\n",l);
    return 0;
}