//
// Created by star on 2024/2/22.
//

#include <iostream>
using namespace std;
string a,b;
void turn(int i){
    if(a[i]=='*')
        a[i]='o';
    else
        a[i]='*';
    if(a[i+1]=='*')
        a[i+1]='o';
    else
        a[i+1]='*';
}
bool OK(int i)
{
    for(int p=i;p<a.size();p++){
        if(a[p]!=b[p])
            return false;
    }
    return true;
}
int main() {
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]!=b[i]){
            ans++;
            turn(i);
        }
        if(OK(i)){
            printf("%d\n",ans);
            break;
        }
    }
    return 0;
}