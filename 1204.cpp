//
// Created by star on 2024/2/25.
//

#include <iostream>
#include <algorithm>
using namespace std;
const int N=1e4+10;
int a[N];
int k;
int main() {
    cin>>k;
    k=0;
    while(scanf("%d",&a[k])!=EOF){
        k++;
    }
    sort(a,a+k);
    int n=0,m=0;
    for(int i=1;i<k;i++){
        if(a[i]==a[i-1])
            n=i;
        if(a[i]-a[i-1]!=1 && i!=n)
            m=i;
        if(n && m)
            break;
    }
    printf("%d %d\n",a[m]-1,a[n]);
    return 0;
}