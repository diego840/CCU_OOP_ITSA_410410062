// [C_MM01-易] 計算梯型面積
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double Topline, Baseline, Hight, Area;
    cin >> Topline >> Baseline >> Hight;
    Area = ((Topline+Baseline)*Hight)/2;
    cout << "Trapezoid area:" << fixed << setprecision(1) << Area <<endl;
    return 0;
}
