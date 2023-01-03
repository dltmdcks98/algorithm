#include<iostream>>
using namespace std;
int main(){
    int N;
    
	int minValue = 1000001;
	int maxValue = -1000001;

    cin >> N;
    int inputValue;

	for(int i = 0; i < N; i++) {
		cin >> inputValue;
 
		if (inputValue < minValue) {
			minValue = inputValue;
		}
		
		if (inputValue > maxValue) {
			maxValue = inputValue;
		}
	}
 
	cout << minValue << " " << maxValue;
}