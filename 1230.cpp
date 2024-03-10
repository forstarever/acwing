//
// Created by star on 2024/2/22.
//

#include <iostream>

using namespace std;
const int N=1e5+5;
int a[N],s[N],res[N];
int n,k;
int main() {
    cin>>n>>k;
    long long  ans=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        s[i]=(s[i-1]+a[i])%k;
        ans+=res[s[i]];
        res[s[i]]++;
    }
    printf("%lld\n",ans+res[0]);
    return 0;
}