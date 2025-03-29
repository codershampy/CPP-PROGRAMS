#include<iostream>
using namespace std;
void printNumbers(int n){
    for(int i = 2 ; i <= n ; i++){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout <<"Enter n:";
    cin >> n;
    printNumbers(n);
    return 0;

}