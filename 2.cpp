//
// Created by star on 2024/2/23.
//

#include <iostream>

using namespace std;
const int N=1005;
int v[N],w[N];
int f[N];
int n,V;
int main() {
    cin>>n>>V;
    for(int i=0;i<n;i++)
        scanf("%d %d",&v[i],&w[i]);
    for(int i=0;i<n;i++){
        for(int j=V;j>=v[i];j--){
            f[j]=max(f[j],f[j-v[i]]+w[i]);
        }
    }
    printf("%d\n",f[V]);
    return 0;
}