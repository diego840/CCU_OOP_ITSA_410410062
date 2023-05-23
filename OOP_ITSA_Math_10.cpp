// [C_MM10-易] 攝氏溫度轉華式溫度
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double temperature, ans;
    cin >> temperature;
    ans = (temperature * (9.0/5.0)) + 32;
    cout << fixed << setprecision(1) << ans << endl;
    
    return 0;
}