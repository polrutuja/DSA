#include <bits/stdc++.h>
using namespace std;

int ap(int n){
    int ans = 0;
    ans=(3*n)+7;
    return ans;
}

int main(){
    int n;
    cout<<"Input value of n :"<<endl;
    cin>>n;

    cout<<"answer is : "<< ap(n)<<endl;

    return 0;
}