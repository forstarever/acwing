//
// Created by star on 2024/2/25.
//

#include <iostream>

using namespace std;
int n;
bool check(int x)
{
    while(x){
        int p=x%10;
        if(p==0 || p==1 || p==2 || p==9)
            return true;
        x/=10;
    }
    return false;
}
int main() {
    cin>>n;
    long long res=0;
    for(int i=1;i<=n;i++){
        if(check(i))
            res+=i;
    }
    printf("%d\n",res);
    return 0;
}