//
// Created by star on 2024/2/23.
//

#include <iostream>
#include <cmath>
using namespace std;
const int N=100;
int n;
int x[N];
int main() {
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&x[i]);
    int left=0,right=0;
    for(int i=1;i<n;i++){
        if(abs(x[i])<abs(x[0]) && x[i]>0)
            left++;
        if(abs(x[i])>abs(x[0]) && x[i]<0)
            right++;
    }
    if(x[0]>0 && right==0 || x[0]<0 && left==0)
        printf("1\n");
    else
        printf("%d\n",left+right+1);
    return 0;
}