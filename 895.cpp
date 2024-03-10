//
// Created by star on 2024/2/23.
//

#include <iostream>

using namespace std;
const int N=1005;
int a[N];
int f[N];
int n;
int main() {
    cin>>n;
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    int res=0;
    for(int i=1;i<=n;i++){
        f[i]=1;
        for(int j=1;j<i;j++){
            if(a[i]>a[j])
                f[i]=max(f[i],f[j]+1);
        }
        res=max(res,f[i]);
    }
    printf("%d\n",res);
    return 0;
}