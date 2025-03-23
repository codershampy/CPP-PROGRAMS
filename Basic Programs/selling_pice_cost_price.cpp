#include<iostream>
using namespace std;
int main(){
    int cp;
    cout << "Enter cost price:";
    cin >> cp;
    int sp;
    cout << "Enter Selling price:";
    cin >> sp;
    if(sp > cp){
        cout << "Profit" << sp-cp;
    }
    else if(cp > sp){
        cout << "Loss" << cp-sp;
    }
    else{
        cout << "No Profit No loss";
    }
    
}