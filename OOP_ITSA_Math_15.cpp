// [C_MM15-易] 判斷座標是否在正方形的範圍內
#include<iostream>

using namespace std;

int main(){
    int X,Y;
    cin >> X >> Y;
    if (X <= 100 && Y <= 100)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;
    return 0;
}