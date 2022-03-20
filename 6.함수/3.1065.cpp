#include<iostream>
using namespace std;

bool hansoo(int i){
    int i1, i2, i3;
    if(i < 100)
        return true;
    i1 = i / 100;
    i2 = i % 100 / 10;
    i3 = i % 10;
    if(i1-i2 == i2-i3)
        return true;
    
    return false;
}

int main(){
    int n , count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(hansoo(i))
            count++;
    }
    cout << count;
}