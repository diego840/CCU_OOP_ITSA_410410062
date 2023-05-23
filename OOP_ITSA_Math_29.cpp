// [C_MM29-易] 最大質數問題
#include<iostream>
using namespace std;

int main(){
    int num, max = 0;
    cin >> num;
    for (int i = num-1; i > 1; i--){
        for (int j = 2; j < num; j++){
            if (i % j == 0){
                break;
            }else{
                max++;
            }
        }
        //cout << i << ":" << max << endl; 
        if(max == (i-2)){
            cout << i << endl; 
            break;
        }
        max = 0;
    }
    return 0;
}