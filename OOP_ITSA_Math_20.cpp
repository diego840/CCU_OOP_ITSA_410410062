// [C_MM20-易] 十進位轉十六進位
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int value;
    cin >> value;
    cout << hex << uppercase << value << endl;
    
    return 0;
}