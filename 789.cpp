//
// Created by star on 2024/2/22.
//

#include <iostream>

using namespace std;
const int N=1e5+10;
int a[N];
int n,q,k;
int main() {
    cin>>n>>q;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(q--){
        scanf("%d",&k);
        int l=0,r=n-1;
        while(l<r){
            int mid=l+r>>1;
            if(a[mid]>=k)
                r=mid;
            else
                l=mid+1;
        }
        if(a[r]==k){
            printf("%d ",l);// l==r
            r=n-1;
            while(l<r){
                int mid=l+r+1>>1;
                if(a[mid]<=k)
                    l=mid;
                else
                    r=mid-1;
            }
            printf("%d\n",r);// l==r
        }else{
            printf("-1 -1\n");
        }
    }
    return 0;
}