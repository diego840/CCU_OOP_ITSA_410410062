// [C_MM21-易] 算階乘
#include<iostream>
using namespace std;

int main(){
    long long int n, sum = 1;
    cin >> n;
    for (int i = n; i > 0; i--){
        sum *= i;
    }
    cout << sum << endl;
    return 0;
}