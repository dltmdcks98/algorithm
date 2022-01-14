//eof를 생각하며 작성
//주의점 : eof가 된 시점은 마지막 자료를 파악하고 다음 값이 없을 때 eof가 된다.  

#include <iostream>
using namespace std;
int main (){
    int a,b,sum,num;
    while (!(cin>> a>>b).eof())
    {
        cout << a + b << endl;
    }
    return 0;
}