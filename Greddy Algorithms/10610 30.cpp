#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

/*
	3�� Ʋ��

*/
using namespace std;
// 3�� ��� = ��� �ڸ� �� ���� 3�ǹ��
bool desc(char a, char b){
	return a > b;
}


int main(){
	string num;
	int mod, sum = 0, index = 1;
	vector<int> number;
	bool notzero = true;
	
	
	cin >> num;
	
	while (true){
		mod = num.at(num.size()-index) - '0';		
		// number.push_back(mod);
		sum += mod;
		if (mod == 0)
			notzero = false;

		if (num.size()-index == 0){
			break;
		}
		index++;
	}

	if (notzero || sum % 3 != 0){
		cout << -1 << endl;;
	}
	else{
		sort(num.begin(), num.end(), desc);
		
		for (char value: num){
			cout << value;
		}
		num.clear();
		cout << endl;
	}
	
	
	return 0;
}

