// [C_MM12-易] 相遇時間計算
#include<iostream>
#include<cmath>

using namespace std;

int main(){

    double distance,tmp;
    cin >> distance;
    tmp = distance/0.238;
    
    cout << ceil(tmp) << endl;
    return 0;
}