// [C_MM06-易] 英哩轉公里
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    double value, ans;
    cin >> value;
    ans = value * 1.6;
    cout << fixed << setprecision(1) << ans << endl;
    return 0;
}