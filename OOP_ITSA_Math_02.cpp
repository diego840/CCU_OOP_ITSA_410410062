// [C_MM02-易] 計算三角形面積
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double baseline, hight, Area;
    cin >> baseline >> hight;
    Area = (baseline*hight)/2;
    cout << fixed << setprecision(1) << Area << endl;
    return 0;
}
