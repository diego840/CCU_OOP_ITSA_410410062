// [C_MM05-易] 計算正方形面積
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    double value,ans;
    cin >> value;
    ans  = (value*value);
    cout << fixed << setprecision(1) << (ans * 10 + 0.5)/10 << endl;
    return 0;
}