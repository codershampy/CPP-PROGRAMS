#include<iostream>
using namespace std;
int sumOfdigit(int n){
    int sum = 0;
    while(n> 0){
       int lastDig = n % 10;
       n = n / 10;
       sum += lastDig;
    }
    return sum;
}
int main(){
    cout << "sum:" << sumOfdigit(2356) << endl;
    return 0;
}