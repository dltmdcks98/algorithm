#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false); // ����ȭ �� �� ��Ʈ���� �����ش�.
 
	int N;
	cin >> N;
 
	// N����ŭ �ݺ�
	for (int i = 1; i <= N; i++) {
 
		// i�࿡���� i����ŭ ���� ���
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
 
		// �ش� ���� ����� �������� �ݵ�� �ٹٲ��� ���ش�.
		cout << "\n";
	}
	return 0;
}