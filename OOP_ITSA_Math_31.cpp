// [C_MM31-易] 計算1~N內能被2跟3整除，但不能被12整除的整數總和
#include<iostream>
using namespace std;

int main(){
    int N, total = 0;
    cin >> N;
    for (int i = 1; i <= N; i++){
        if( i%2 == 0 && i%3 == 0 && i%12 != 0){
            total += i;
        }
    }
    cout << total << endl;
    return 0;
}