#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n:";
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        char ch = 'A';
        for(int j = 0 ; j < i + 1 ; j++){
          cout << ch ;
          cout << (i + 1);
          ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}