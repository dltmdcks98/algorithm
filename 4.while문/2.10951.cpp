//eof�� �����ϸ� �ۼ�
//������ : eof�� �� ������ ������ �ڷḦ �ľ��ϰ� ���� ���� ���� �� eof�� �ȴ�.  

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