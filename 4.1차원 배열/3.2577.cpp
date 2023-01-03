#include<iostream>
using namespace std;
int main(){
    int A,B,C,res;
    int count[10] = {};

    cin >> A >> B >> C;

    res = A*B*C;
    while (res != 0)
    {
        count[res % 10]++;
        res = res / 10;
    }
    
    for(int i : count){
        cout << i << endl;
    }

}