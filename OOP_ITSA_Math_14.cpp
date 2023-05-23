// [C_MM14-易] 計算時間的組合
#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int Time, Days, Hours, Minutes, Seconds;
    Minutes = 60;
    Hours = Minutes * 60;
    Days = Hours * 24;

    cin >> Time;
    cout << (Time / Days) << " days" << endl;
    cout << ((Time % Days) / Hours) << " hours" << endl;
    cout << ((Time % Hours) / Minutes) << " minutes" << endl;
    cout << (Time % Minutes) << " seconds" << endl;
    return 0;
}