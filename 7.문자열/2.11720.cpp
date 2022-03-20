#include<iostream>
using namespace std;
int main(){
    int N, sum = 0;
    char arr;
    cin >> N;
    for(int i = 0; i< N; i ++){
        cin >> arr; 
        sum += arr-'0';
    }

    cout << sum;

}