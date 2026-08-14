#include<iostream>
#include<vector>
#define ll long long
using namespace std;

vector<ll>dp;
ll  fib(ll n){
    if(n<2) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = fib(n-2) + fib(n-1);
}
// pull dp
ll fib1(ll n){
    dp[0] = 0;
    dp[1] = 1;
    for(ll i =2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
vector<ll>push;
// push dp
ll dp2(ll n){
    push[0] = 0;
    push[1] = 1;

    for(ll i = 0;i<n-2;i++){
        push[i+2]+= push[i];
        push[i+1] += push[i];
    }
    return push[n];
}

int main(){
    ll n;
    cout<<"Enter a number: ";
    cin>>n;
    dp.resize(n+1,-1);
    long long res = fib(n);
    cout<<res<<endl;

    return 0;
}