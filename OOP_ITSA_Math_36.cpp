// [C_MM36-易] 季節判定
#include<iostream>
using namespace std;

int main(){
    int month = 0;
    cin >> month;
    if (month == 3 || month == 4 || month == 5){
        cout << "Spring" << endl;
    }else if (month == 6 || month == 7 || month == 8){
        cout << "Summer" << endl;
    }else if (month == 9 || month == 10 || month == 11){
        cout << "Autumn" << endl;
    }else if (month == 12 || month == 1 || month == 2){
        cout << "Winter" << endl;
    }
    
    return 0;
}