// [C_MM09-易] 計算 i 次方的值
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int value, start = 1;
    cin >> value;
    if (value > 31){
        cout << "Value of more than 31" << endl;
    }else{
        start = start << value;
        cout << start << endl;
    }
    
    return 0;
}