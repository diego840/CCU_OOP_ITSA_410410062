// [C_MM17-易] 求最大公因數
#include<iostream>

using namespace std;

int GCD(int value1, int value2){
    if (!(value1%value2)){
        return value2;
    }
    return GCD(value2,(value1%value2));
}

int main(){
    int a, b, tmp, ans;
    cin >> a >> b;
    cout << GCD(a,b) << endl;

    return 0;
}