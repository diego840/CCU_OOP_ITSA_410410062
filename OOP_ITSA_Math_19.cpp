// [C_MM19-易] 電話費計算
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int time;
    double money;
    cin >> time;
    money = (time*0.9);
    if (time > 800 && time < 1500)
        money *= 0.9;
    else if (time >= 1500)
        money *=0.79;
    cout << fixed << setprecision(1) << money << endl;
    
    return 0;
}