#include<iostream>>
using namespace std;
int main(){
    int N;
    // minValue, maxValue�� �ʱⰪ
	int minValue = 1000001;
	int maxValue = -1000001;
    
    cin >> N;
    int inputValue;
	for(int i = 0; i < N; i++) {
		cin >> inputValue;
 
		// �Է����� ���� ���� minValue���� �۴ٸ� min�� inputValue�� ����
		if (inputValue < minValue) {
			minValue = inputValue;
		}
		// �Է����� ���� ���� maxValue���� ũ�ٸ� max�� inputValue�� ����
		if (inputValue > maxValue) {
			maxValue = inputValue;
		}
	}
 
	cout << minValue << " " << maxValue;
}