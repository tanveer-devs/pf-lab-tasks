#include <iostream>
using namespace std;
int getMarks(int marks){
	cin >> marks;
		while(marks > 100){
			cout << "\tMarks can only be between 0-100 \n";
			cout << "\tEnter correct marks: ";
			cin >> marks;
			if(marks <= 100){
				break;
			}
		}
	return marks;
}
int main() {
	string subjectNames[5] = {"Programming", "ICT Theory", "English", "Pakistan Studies", "Discrete Structures"};
	int subjectMarks[5] = {};
	cout << "\t===============================================\n";
	cout << "\t-     STUDENT RESULT & MANAGEMENT SYSTEM      -\n";
	cout << "\t===============================================\n";
	cout << "\tDeveloper: Tanveer Ahmed   Roll No: 051-26-0007\n\n\n";
    string userChoice;
    int totalStudents = 0;
    do {
    int rollNo;
	string name;
	cout << "\tEnter Roll No: ";
	cin >> rollNo;
	cout << "\tEnter your name: ";
	cin >> name;
	for(int i = 0; i < 5; i++){
				cout << "\tEnter your marks in " << subjectNames[i] << ": ";
				subjectMarks[i] = getMarks(subjectMarks[i]);
		}

	int totalMarks = 0;
	for(int i = 0; i < 5; i++){
		totalMarks += subjectMarks[i];
	}
	float percentage = (totalMarks/500.0f) * 100;
	cout << "\t==========================================\n";
	cout << "\t- Student Name: " << name << "\t       " << "Roll: " << rollNo << " -\n";
	cout << "\t==========================================\n";
	cout << "\t- Subject " << "\t\t\t" << "Marks    -\t\n";
	cout << "\t- Programming:\t\t\t" << subjectMarks[0] << "\t -\n";
	cout << "\t- ICT Theory:\t\t\t" << subjectMarks[1] << "\t -\n";
	cout << "\t- English:\t\t\t" << subjectMarks[2] << "\t -\n";
	cout << "\t- Pakistan Studies:\t\t" << subjectMarks[3] << "\t -\n";
	cout << "\t- Discrete Structures:\t\t" << subjectMarks[4] << "\t -\n";
	cout << "\t- Percentage\t\t\t" << percentage << "\t -\n";
	bool areMarksGreater;
	for(int i = 0; i < 5; i++){
		if(subjectMarks[i] >= 40){
			areMarksGreater = true;
		} else{
			areMarksGreater = false;
			break;
		}
	}
	bool isPassed = (percentage >= 50) && areMarksGreater;
	if(isPassed){     
	cout << "\t- Pass/Fail\t\t\t" << "Pass" << "\t -\n";	
	}else{
	cout << "\t- Pass/Fail\t\t\t" << "Fail" << "\t -\n";
	}
	if(percentage >= 80 && isPassed){
		cout << "\t- Grade\t\t\t" << "\tA++" << "\t -\n";
	} else if(percentage >= 70 && isPassed){
		cout << "\t- Grade\t\t\t" << "\tB++" << "\t -\n";
	}  else if(percentage >= 60 && isPassed){
		cout << "\t- Grade\t\t\t" << "\tC++" << "\t -\n";
	} else if(percentage >= 40 && isPassed){
		cout << "\t- Grade\t\t\t" << "\tD++" << "\t -\n";
	}  else if(percentage < 40 || !isPassed){
		cout << "\t- Grade\t\t\t" << "\tF" << "\t -\n";
	}
	cout << "\t===========================================\n";
    totalStudents++;
    cout << "\tTotal students:  " << totalStudents << endl;
    cout << "\tDo you want to add another? (Y/N)";
    cin >> userChoice;
    } while(userChoice == "Y" || userChoice == "y");
    return 0;
}
