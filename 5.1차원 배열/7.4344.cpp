#include <iostream>
using namespace std;

int main() {
	int c, num, cnt;
	int avg;
	int score[1000] = {};
	double result;

	cin >> c;
	for (int i = 0; i < c; i++) {
		avg = 0;
		cnt = 0;
		cin >> num;

		for (int j = 0; j < num; j++) {
			cin >> score[j];
			avg += score[j];
		}
		avg = avg / num;
		for (int j = 0; j < num; j++) {
			if (score[j] > avg)
				cnt++;
		}
		result = (double)cnt / num * 100;

		cout << fixed;
		cout.precision(3);
		cout << result << "%" << endl;
	}
}