// [C_MM34-易] 因數問題
#include<iostream>
using namespace std;

int main(){
    int num, tmp = 0;
    cin >> num;
    for (int i = 1; i <= num; i++){
        if (num % i == 0 && tmp == 0){
            cout << i;
            tmp = 1;
        }else if (num % i == 0 && tmp == 1){
            cout << " " << i;
        }
        
    }
    cout << endl;
    return 0;
}