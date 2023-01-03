#include<iostream>
using namespace std;
int main (){
    int arr[42]={};

    int A;
    for(int i = 0; i < 10; i++){
        cin >> A;
        arr[A % 42]++;
    }

    int res = 0;
    for(int i : arr){
        if(i > 0){
            res++;
        }
    }
    cout << res << endl;
}   