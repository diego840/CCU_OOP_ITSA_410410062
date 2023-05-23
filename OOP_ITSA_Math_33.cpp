// [C_MM33-易] 找1~N的完美數
#include<iostream>
using namespace std;

int main(){
    int num, total, tmp = 0;
    cin >> num;
    for (int i = 2; i <= num; i++){

        total = 0;
        for(int j = 1; j< i; j++){
            if ( i%j == 0){
                total += j;
            }
        }
        if (total == i && tmp == 0){
            cout << i;
            tmp = 1;
        }else if(total == i && tmp == 1){
            cout << " " << i;
        }
        
    }
    cout << endl;
    return 0;
}