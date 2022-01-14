#include<iostream>>
using namespace std;
int main(){
    int N;
    // minValue, maxValue의 초기값
	int minValue = 1000001;
	int maxValue = -1000001;
    
    cin >> N;
    int inputValue;
	for(int i = 0; i < N; i++) {
		cin >> inputValue;
 
		// 입력으로 들어온 값이 minValue보다 작다면 min을 inputValue로 갱신
		if (inputValue < minValue) {
			minValue = inputValue;
		}
		// 입력으로 들어온 값이 maxValue보다 크다면 max를 inputValue로 갱신
		if (inputValue > maxValue) {
			maxValue = inputValue;
		}
	}
 
	cout << minValue << " " << maxValue;
}