//
// Created by star on 2024/2/25.
//

#include <iostream>
#include <algorithm>
using namespace std;
const int N=1e5+10;
int a[N],b[N],c[N];
long long bb[N];// bb[i]表示a数组中比b[i]小的数的个数
int n;
// 双指针
int main() {
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&c[i]);
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
    int p=0;
    long long cnt=0;
    for(int i=0;i<n;i++){
        while(a[p]<b[i] && p<n){
            p++;
            cnt++;
        }
        bb[i]=cnt;
    }
    p=0,cnt=0;
    long long res=0;
    for(int i=0;i<n;i++){
        while(b[p]<c[i] && p<n){
            cnt+=bb[p];
            p++;
        }
        res+=cnt;
    }
    printf("%lld\n",res);
    return 0;
}