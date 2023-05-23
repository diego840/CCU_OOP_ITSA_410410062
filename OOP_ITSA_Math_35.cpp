// [C_MM35-易] 平、閏年判定
#include<iostream>
using namespace std;

int main(){
    int num = 0;
    cin >> num;
    if((num%400) == 0 || ((num%4) == 0 && (num%100) != 0)){
        cout << "Bissextile Year" << endl;
    }else{
        cout << "Common Year" << endl;
    }
    return 0;
}