// [C_MM13-易] 停車費計算
#include<iostream>

using namespace std;

int main(){
    int one_h,one_m,two_h,two_m,time,money;
    cin >> one_h >> one_m;
    cin >> two_h >> two_m;
    time = (two_h-one_h)*60 + (two_m-one_m);
    if (time >= 30 && time <= 120 ){
        money = (time/30)*30;
    }else if(time > 120 && time <= 240){
        money = ((time-120)/30)*40 + 120;
    }else if(time > 240){
        money = ((time-240)/30)*60 + 280;
    }
    cout << money << endl;
    return 0;
}