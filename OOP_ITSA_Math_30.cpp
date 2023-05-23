// [C_MM30-易] 質數判別
#include<iostream>
using namespace std;

int main(){
    int num, tmp = 0;
    cin >> num;
    for (int i = 2; i < num; i++){
        if ((num % i) == 0){
            tmp = 1;
        }
    }
    if (tmp == 1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    
    
    return 0;
}