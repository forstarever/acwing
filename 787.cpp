//
// Created by star on 2024/2/25.
//

#include <iostream>

using namespace std;
const int N=1e5+10;
int a[N];
int b[N];
int n;
void merge_sort(int a[],int l,int r)
{
    if(l==r)
        return ;
    int mid=l+r>>1;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,r);
    int k=0,p=l,q=mid+1;
    while(p<=mid & q<=r){
        if(a[p]<=a[q])
            b[k++]=a[p++];
        else
            b[k++]=a[q++];
    }
    while(p<=mid)
        b[k++]=a[p++];
    while(q<=r)
        b[k++]=a[q++];
    for(int i=l;i<=r;i++)
        a[i]=b[i-l];
}
int main() {
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}