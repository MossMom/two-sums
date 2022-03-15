#include <iostream>
#include <vector>
using namespace std;

int main() {
	int userInput = 0;
	vector<int> nums;
	int target;
	int iter = 0;
	int max = 0;

	while (true) { // while loop to test multiple times
		int iter = 0;

		cout << "How many numbers would you like to input?\n";
		cin >> max;
		if (max < 2) {
			cout << "Input a max over 2!\n\n";
			continue;
		}

		while (iter != max) { // get user numbers
			cout << "Input a whole number for slot " << iter << " of the nums vector:\n";
			cin >> userInput;
			nums.push_back(userInput);
			iter++;
		}

		cout << "What number is the target\n";
		cin >> target;

		int slot1 = 0;
		int slot2 = 0;


		for (int i = 0; i < max - 1; i++) {
			for (int j = i + 1; j < max; j++) {
				if (nums[i] + nums[j] == target) {
					slot1 = i;
					slot2 = j;
				}
			}
		}
		
		nums.clear();

		cout << slot1 << ", " << slot2 << "\n\n\n\n\n\n";
	}
}