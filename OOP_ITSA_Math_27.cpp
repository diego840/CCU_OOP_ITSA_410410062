// [C_MM27-易] 計算兩整數間所有整數的總和
#include<iostream>

using namespace std;

int main(){

    int one_value, two_value, ans = 0;
    cin >> one_value >> two_value;
    if (one_value < two_value){
        int tmp = (one_value-two_value)*(-1);
        ans = ((one_value+two_value)*(tmp+1))/2;
    }else{
        int tmp = (one_value-two_value);
        ans = ((one_value+two_value)*(tmp+1))/2;
    }
    cout << ans << endl;

    return 0;
}