//
// Created by star on 2024/2/22.
//

#include <iostream>

using namespace std;
const int N=1e5+10;
int a[N];
int b[N];
int n,m;
int main() {
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        b[i]=b[i-1]+a[i];
    }
    while(m--){
        int l,r;
        scanf("%d %d",&l,&r);
        printf("%d\n",b[r]-b[l-1]);
    }
    return 0;
}