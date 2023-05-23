// [C_MM11-易] 購票計算
#include<iostream>

using namespace std;

int main(){
    int total;
    cin >> total;
    if (total >= 10){
        cout << "NT10=" << (total/10) << endl;
        total = total % 10;
    }else{
        cout << "NT10=" << 0 << endl;
    }
    if (total >= 5){
        cout << "NT5=" << (total/5) << endl;
        total = total % 5;
    }else{
        cout << "NT5=" << 0 << endl;
    }
    cout << "NT1=" << total << endl;
    
    return 0;
}