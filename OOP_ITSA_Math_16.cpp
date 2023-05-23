// [C_MM16-易] 判斷座標是否在圓形的範圍內
#include<iostream>

using namespace std;

int main(){
    int X, Y;
    cin >> X >> Y;
    if ( X+Y <= 100)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;
        
    return 0;
}