/*
Question:

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6 and 9.The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.


*/

#include<iostream>
#include<vector>
using namespace std;

int solve(int n){
// multiple of 3 and 5 mean % is 0
    int i = 3;
    int res = 0;
    while(i<n){
        if(i % 3==0 || i % 5==0){
            res += i;
        }
        i++;
    }
    return res;
}

int main(){
    // int T;
    // cin>>T;
    // vector<int>nums(T);
    // vector<int>res(T);
    // int i = 0;
    // while(i<T){
    //     cin>>nums[i];
    //     res[i] = solve(nums[i]);
    //     i++;
    // }
    // i=0;
    // while(i<T){
    //     cout<<res[i]<<endl;
    // }
    int n = solve(1000);
    cout<<n<<endl;
    return 0;
}