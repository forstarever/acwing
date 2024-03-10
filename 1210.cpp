//
// Created by star on 2024/2/25.
//

#include <iostream>

using namespace std;
const int N=1e4+5;
int a[N];
int n;

int main() {
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int res=0;
    int mmax,mmin;
    for(int i=1;i<=n;i++){
        mmax=a[i],mmin=a[i];
        for(int j=i;j<=n;j++){
            mmax=max(mmax,a[j]);
            mmin=min(mmin,a[j]);
            if(mmax-mmin==j-i)
                res++;
        }
    }
    printf("%d\n",res);
    return 0;
}