#include <iostream>
using namespace std;
int main(){
    int n = 4;
    while(n%2==0){
        n/=2;
    }
    if(n == 1){
        cout<< "No. is power of 2"<< endl;
    }
    if(n==0||n!=1){
        cout<< "No. is not power of 2"<< endl;
    }
    return 0;
}