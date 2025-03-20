#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n:";
    cin >> n;
    if(n % 5 == 0){
        cout << " Divisible by 5";
    }
    else{
        cout<<" Not Divisible by 5 ";
    }
}