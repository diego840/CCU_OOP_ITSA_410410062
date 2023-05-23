// [C_MM32-易] Armstrong數
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int tmp, num, Armstrong, one_digital, two_digital, three_digital;
    cin >> num;
    tmp = num;
    if (!(num > 99 && num < 1000)){
        cout << "No" << endl;
    }else{
        one_digital = num / 100;
        num = num - (one_digital*100);
        two_digital = num / 10;
        num = num - (two_digital*10);
        three_digital = num;

        Armstrong = ( pow(one_digital, 3) + pow(two_digital, 3) + pow(three_digital, 3));

        if (tmp == Armstrong){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }        
    }
    
    return 0;
}