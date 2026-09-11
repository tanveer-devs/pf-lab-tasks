#include <iostream>
using namespace std;
int getMarks(int marks){
	if (marks > 100) {
		cout << "\tMarks can't be greater than 100! \n";
		if (marks > 100) {
			while (marks > 100) {
				cout << "\tEnter correct marks: ";
				cin >> marks;
				if (marks < 100) {
					break;
				}
			}
		}
	}
	return marks;
}
int main()
{
	cout << "\t=======================================\n";
	cout << "\t-  STUDENT RESULT & MANAGEMENT SYSTEM -\n";
	cout << "\t=======================================\n";
	cout << "\tDeveloper: Tanveer Ahmed   Roll No: 051\n\n\n";
	int rollNo;
	string name;
	float programming, ict_theory, english, pakistan_studies, discrete_structures;
	cout << "\tEnter Roll No: ";
	cin >> rollNo;
	cout << "\tEnter your name: ";
	cin >> name;
	cout << "\tEnter your marks in Programming: ";
	cin >> programming;
	getMarks(programming);
	cout << "\tEnter your marks in ICT Theory: ";
	cin >> ict_theory;
	getMarks(ict_theory);
	cout << "\tEnter your marks in English ";
	cin >> english;
	getMarks(english);
	cout << "\tEnter your marks in Pakistan Studies ";
	cin >> pakistan_studies;
	getMarks(pakistan_studies);
	cout << "\tEnter your marks in Discrete Structures ";
	cin >> discrete_structures;
	getMarks(discrete_structures);
	cout << endl;
	float totalMarks = programming + ict_theory + english + pakistan_studies + discrete_structures;
	float percentage = (totalMarks / 500.0f) * 100;
	//	int percentage_int = static_cast<int> ((totalMarks/500.0f)*100);
	//	cout <<percentage_int << endl;
	//	cout << percentage;
	bool isPassed = (programming >= 40 && ict_theory >= 40 && english >= 40 && pakistan_studies >= 40 && discrete_structures >= 40);
	cout << "\t==========================================\n";
	cout << "\t- Student Name: " << name << "\t       " << "Roll: " << rollNo << " -\n";
	cout << "\t==========================================\n";
	cout << "\t- Subject " << "\t\t\t" << "Marks    -\t\n";
	cout << "\t- Programming:\t\t\t" << programming << "\t -\n";
	cout << "\t- ICT Theory:\t\t\t" << ict_theory << "\t -\n";
	cout << "\t- English:\t\t\t" << english << "\t -\n";
	cout << "\t- Pakistan Studies:\t\t" << pakistan_studies << "\t -\n";
	cout << "\t- Discrete Structures:\t\t" << discrete_structures << "\t -\n";
	cout << "\t- Percentage\t\t\t" << percentage << "%" << "\t -\n";
	if (isPassed) {
		cout << "\t- Remarks:\t\t\t" << "Passed" << "\t -\n";
	} else {
		cout << "\t- Remarks:\t\t\t" << "Try Again" << "-\n";
	}
	if (percentage >= 90 && isPassed) {
		cout << "\t- Grade:\t\t\t" << "A++" << "\t -\n";
	} else if (percentage >= 80 && percentage < 90 && isPassed){
		cout << "\t- Grade:\t\t\t" << "A--" << "\t -\n";
	} else if (percentage >= 70 && percentage < 80 && isPassed) {
		cout << "\t- Grade:\t\t\t" << "B++" << "\t -\n";
	} else if (percentage >= 60 && percentage < 70 && isPassed) {
		cout << "\t- Grade:\t\t\t" << "B--" << "\t -\n";
	} else if (percentage >= 50 && percentage < 60 && isPassed) {
		cout << "\t- Grade:\t\t\t" << "C" << "\t -\n";
	} else {
		cout << "\t- Grade:\t\t\t" << "F" << "\t -\n";
	}
	cout << "\t===========================================\n";
	return 0;
}
