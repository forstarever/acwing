//
// Created by star on 2024/2/22.
//

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
const int N=25000005;
struct Sum
{
    int s,c,d;
    bool operator< (const Sum &t)const{
        if(s!=t.s)
            return s<t.s;
        if(c!=t.c)
            return c<t.c;
        return d<t.d;
    }
}sum[N];
int n,m;
int main() {
    cin>>n;
    for(int c=0;c*c<=n;c++){
        for(int d=c;c*c+d*d<=n;d++){
            sum[m++]={c*c+d*d,c,d};
        }
    }
    sort(sum,sum+m);
    for(int a=0;a*a*4<=n;a++){
        for(int b=a;a*a+b*b<=n;b++){
            int t=n-a*a-b*b;
            int l=0,r=m;
            while(l<r){
                int mid=l+r>>1;
                if(sum[mid].s>=t)
                    r=mid;
                else
                    l=mid+1;
            }
            if(sum[l].s==t){
                printf("%d %d %d %d\n",a,b,sum[l].c,sum[l].d);
                return 0;
            }
        }
    }
    return 0;
}