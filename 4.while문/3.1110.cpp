#include<iostream>
using namespace std;
int main(){
    int a, b, count=0;
    cin >> a;
    b = a;

    do
    {
        b = (b%10) * 10 + ((b%10)+(b/10))%10;
       count ++;
    }while(a != b);
    
    cout << count << endl;
}   