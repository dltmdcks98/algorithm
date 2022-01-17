#include<iostream>
using namespace std;
int main(){
    int n;
    string test;

    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> test;
        int sum = 0, result = 0;
        for(int j = 0; j < test.length(); j++){
            if(test[j] == 'O'){
                sum++;
            }else{
                sum = 0;
            }
            result += sum;
        }
        cout << result << endl;
    }
    
}