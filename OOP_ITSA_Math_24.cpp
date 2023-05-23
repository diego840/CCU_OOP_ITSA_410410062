// [C_MM24-易] 計算薪水
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int hour, money = 0;
    double salary;
    
    cin >> hour >> money;
    if (hour > 120){
        salary = (60*money)+(60*money*1.33)+((hour-120)*money*1.66);
    }else if(hour > 60){
        salary = (60*money)+((hour-60)*money*1.33);
    }else{
        salary = (money*hour);
    }
    cout << fixed << setprecision(1) << salary << endl;
    return 0;
}