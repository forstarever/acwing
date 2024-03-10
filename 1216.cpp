//
// Created by star on 2024/2/23.
//

#include <iostream>

using namespace std;
int n;
int main() {
    cin>>n;
    int sum=n;
    while(n>=3){
        int tmp=n/3;
        sum+=tmp;
        n=n%3+tmp;

    }
    printf("%d\n",sum);
    return 0;
}