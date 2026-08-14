// now we know gcd is greates common factor so i can go which one is smaller number then find the all the possible gcd till there by dividing the both of the numebers
#include<iostream>
using namespace std;
class GCD{
    public:
    // brute-force apprach O(min(a,b))
    int gcd(int a,int b){
        int div = a>b?b:a;
        while(div){
            if(a % div==0 && b % div==0) return div;
            div--;
        } 
        return 1;
    }
    //optimal apprach O(log(min(a,b)))
    int gcdOptimal(int a,int b){ 
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    //iteratve optimal approach 
    int gcdIteratieOptimal(int a,int b){
        while(b>0){
            a = a % b;
            swap(a,b);
        }
        return a;
    }

};
int main(){
    GCD *ptr = new GCD;

    cout<<ptr->gcd(16,34);
    cout<<endl;
    cout<<ptr->gcdOptimal(16,34)<<endl;
    cout<<ptr->gcdIteratieOptimal(16,34)<<endl;

    return 0;
}