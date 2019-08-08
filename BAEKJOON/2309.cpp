#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// 초기값 받아오기 
	vector<int> small_people;
	vector<int> answer_vec;
	for (int i = 0; i < 9; i++) {
		int sub;
		cin >> sub;
		small_people.push_back(sub);
	}

	int isComplete = 0;

	// for 문을 돌면서 값 확인 
	for (int i = 0; i < 9 && (isComplete == 0); i++) {
		for (int j = i + 1; j < 9 && (isComplete == 0); j++) {
			// i와 j 를 제외하는 넘버로 지정 
			int sum = 0;
			answer_vec.clear();
			for (int k = 0; k < 9; k++) {
				if ((k != i) && (k != j)) {
					answer_vec.push_back(small_people[k]);
					sum += small_people[k];
				}
			}
			if (sum == 100) isComplete = 1;
		}
	}

	sort(answer_vec.begin(), answer_vec.end());
	for (int i = 0; i < 7; i++)
		cout << answer_vec[i] << "\n";

	return 0;
}
