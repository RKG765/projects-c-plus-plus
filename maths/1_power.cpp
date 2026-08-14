#include<iostream>

using namespace std;
class Power{
public:
    // iterative
    long long pow(long long a,long long b){
        long long res = 1;
        while(b>0){
            //check even or odd
            if(b & 1){ // check for odd if odd
                res = res * a;
            }
            
            a = a * a;
            b >>= 1; // divides by 2
            
        }
        return res;
    }
    // recursive
    long long pow_recursive(long long a,long long b){
        if(b==0) return 1;
        long long half = pow_recursive(a,b>>1);
        long long res = half * half;

        if(b & 1){
            res = res * a;
        }
        return res;
    }
};
int main(){
    Power *p  = new Power;
    long long a = 2,b=13;
    cout<<p->pow(a,b)<<endl;
    cout<<p->pow_recursive(2ll,13ll);
    return 0;
}