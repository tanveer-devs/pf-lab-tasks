#include <iostream>
using namespace std;
int getMarks(int marks){
	cin >> marks;
	if(marks > 100 || marks < 0){
		while(marks > 100 || marks < 0){
			cout << "\tMarks can only be between 1-100! \n";
			cout << "\tEnter correct marks: ";
			cin >> marks;
			if(marks <= 100){
				break;
			}
		}
	}
	return marks;
}
int main() {
	cout << "\t=======================================\n";
	cout << "\t-  STUDENT RESULT & MANAGEMENT SYSTEM -\n";
	cout << "\t=======================================\n";
	cout << "\tDeveloper: Tanveer Ahmed   Roll No: 051\n\n\n";
    string userChoice;
    int student = 0;
	int userSelection;
	cout << "\t     Menu      \n";
	cout << "\t1: Add student \n";
	cout << "\t2: Remove student \n";
	cout << "\t3: View students \n";
	cout << "\t Select menu: ";
	cin >> userSelection;
	// switch (userSelection){
	// case 1:
	// 	addStudent();
	// default:
	// 	break;
	// }
    do{
    
    int rollNo;
	string name;
	cout << "\t=======================================\n";
	cout << "\t-             ADD STUDENT             -\n";
	cout << "\t=======================================\n";
	int programming, ict_theory, english, pakistan_studies, discrete_structures;
	cout << "\tEnter Roll No: ";
	cin >> rollNo;
	cout << "\tEnter student name: ";
	cin >> name;
	cout << "\tEnter marks in Programming: ";
	programming = getMarks(programming);
	cout << "\tEnter marks in ICT Theory: "; 
	ict_theory = getMarks(ict_theory);
	cout << "\tEnter marks in English ";
	english = getMarks(english);
	cout << "\tEnter marks in Pakistan Studies ";
	pakistan_studies = getMarks(pakistan_studies);
	cout << "\tEnter marks in Discrete Structures ";
	discrete_structures = getMarks(discrete_structures);
	cout << endl;
	float totalMarks = programming + ict_theory + english + pakistan_studies + discrete_structures;
	float percentage = (totalMarks/500.0f) * 100;
	int percentage_int = static_cast<int> ((totalMarks/500.0f)*100);
//	cout <<percentage_int << endl;
//	cout << percentage;
	cout << "\t==========================================\n";
	cout << "\t- Student Name: " << name << "\t       " << "Roll: " << rollNo << " -\n";
	cout << "\t==========================================\n";
	cout << "\t- Subject " << "\t\t\t" << "Marks    -\t\n";
	cout << "\t- Programming:\t\t\t" << programming << "\t -\n";
	cout << "\t- ICT Theory:\t\t\t" << ict_theory << "\t -\n";
	cout << "\t- English:\t\t\t" << english << "\t -\n";
	cout << "\t- Pakistan Studies:\t\t" << pakistan_studies << "\t -\n";
	cout << "\t- Discrete Structures:\t\t" << discrete_structures << "\t -\n";
	cout << "\t- Percentage\t\t\t" << percentage << "\t -\n";
	bool passed = (percentage_int >= 50) && (programming >= 40) && (ict_theory >= 40) && (english >= 40) && (pakistan_studies >= 40) && (discrete_structures >= 40);
	if(passed){     
	cout << "\t- Pass/Fail\t\t\t" << "Pass" << "\t -\n";	
	}else{
	cout << "\t- Pass/Fail\t\t\t" << "Fail" << "\t -\n";
	}
	if(percentage >= 80){
		cout << "\t- Grade\t\t\t" << "\tA++" << "\t -\n";
	} else if(percentage >= 70 && passed){
		cout << "\t- Grade\t\t\t" << "\tB++" << "\t -\n";
	}  else if(percentage >= 60 && passed){
		cout << "\t- Grade\t\t\t" << "\tC--" << "\t -\n";
	} else if(percentage >= 40 && passed){
		cout << "\t- Grade\t\t\t" << "\tD--" << "\t -\n";
	}  else if(percentage < 40 || !passed){
		cout << "\t- Grade\t\t\t" << "\tF" << "\t -\n";
	}
	cout << "\t===========================================\n";
    student++;
    cout << "\tTotal students:  " << student << endl;
    cout << "\tDo you want to add another student ? (Y/N)";
    cin >> userChoice;
    } while(userChoice == "Y" || userChoice == "y");
    return 0;
}

