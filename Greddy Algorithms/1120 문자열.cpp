//#include<iostream>
//#include<deque>
//#include<string>
//
//using namespace std;
//
//int main() {
//
//	deque<char> A, B;
//	string a, b;
//	
//	cin >> a >>b;
//	
//	for (char tmp : a) {
//		A.push_back(tmp);
//	}
//
//	for (char tmp : b) {
//		B.push_back(tmp);
//	}
//
//	
//
//
//	return 0;
//}


#include<iostream>
#include<string>
#include<vector>

using namespace std;

const int MAX_LENGTH = 50;

int getMinValue(vector<int> table) {
	int min = MAX_LENGTH;
	for (int tmp : table) {
		if (min > tmp) {
			min = tmp;
		}
	}

	return min;
}

int process(string A, string B) {

	int length_dist = B.size() - A.size();
	vector<int> table = vector<int>(length_dist + 1);

	for (int start = 0; start <= length_dist; start++) {
		int dist_sum = 0;
		// 없애, 차이 출력
		for (int index = 0; index < A.size(); index++)
		{
			if (A[index] != B[index + start])
				dist_sum++;
		}

		table[start] = dist_sum;
	}

	return getMinValue(table);
}

int main() {

	string A, B;

	cin >> A >> B;

	cout << process(A, B) << endl;

	return 0;
}