#include<iostream>2
using namespace std;
int main(){
    int num;
    cin >> num;
    for(int i = 0; i < num; i++){
        int num2;
        string arr;
        cin >> num2;
        cin >> arr;
        for(int j = 0; j< arr.length(); j++){
            for(int t = 0; t < num2;  t++){
                cout << arr[j];
            }
        }
        cout << endl;
    }
}