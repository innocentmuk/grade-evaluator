#include <iostream>
using namespace std;
int main() {
	double score;
	cout << "Enter your score: ";
	cin >> score;
	if (score < 0 or score >100) {
		cout << "Invalid score.\n";
	}
	else {
		if (score >= 90) {
			cout << "Grade A\n";
		}
		else if (score >= 80 and score <= 89) {
			cout << "Grade B\n";
		}
		else if (score >= 70 and score <= 79) {
			cout << "Grade C\n";

		}
		else if (score >= 60 and score <= 69) {
			cout << "Grade D\n";

		}
		else { cout << "Grade F"; }
	}

	return 0;
}
