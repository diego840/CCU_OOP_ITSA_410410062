// [C_MM28-易] 計算1到N之間屬於5和7的倍數
#include<iostream>

using namespace std;

int main(){
    int num, tmp = 0;
    cin >> num;
    for (int i = 1; i <= num; i++){
        if ( (i % 35) == 0 && tmp == 1){
            cout << " " << i;
        }else if((i % 35) == 0 && tmp == 0){
            cout << i;
            tmp = 1;
        }else{
            continue;
        }
    }
    cout << endl;
    return 0;
}