#include<iostream>
using namespace std;
 
int main(int argc, char const *argv[]) {
 
	ios_base::sync_with_stdio(false);	// �� ǥ�� ����� ����ȭ ����
	cin.tie(NULL);	// �Է°� ����� �����ִ� ���� Ǯ���ش�.
	
	int T;
	cin >> T; // �׽�Ʈ ���̽�
 
	for (int i = 1; i <= T; i++) {
		int a;
		int b;
		cin >> a >> b;
 
		cout << "Case #" << i << ": " << a + b << "\n";
	}
	return 0;
}

