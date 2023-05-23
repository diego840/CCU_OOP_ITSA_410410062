// [C_MM18-易] 十進制轉二進制
#include<iostream> 
#include<vector> 
#include<algorithm> 
 
using namespace std; 
 
int main(){ 
    int value; 
    vector<int> v; 
    cin >> value; 
 
    if (value < 0){     // 處理 negative 
        value += 256; 
    }     
 
    for (auto i = 7; i >= 0; i--){ 
        v.push_back(value % 2); 
        value /= 2; 
    } 
 
    reverse(v.begin(), v.end());    //reverse 
    for (auto &i : v){ 
        cout << i; 
    } 
    cout << endl;

    return 0; 
}  