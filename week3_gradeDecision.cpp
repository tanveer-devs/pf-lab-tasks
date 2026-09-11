#include <iostream>
using namespace std;
int main(){
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
	cout << "\tEnter your marks in ICT Theory: "; 
	cin >> ict_theory;
	cout << "\tEnter your marks in English ";
	cin >> english;
	cout << "\tEnter your marks in Pakistan Studies ";
	cin >> pakistan_studies;
	cout << "\tEnter your marks in Discrete Structures ";
	cin >> discrete_structures;
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
		cout << "\t- Grade\t\t\t" << "\t\tA" << "sss -\n";
	} else if(percentage >= 70 && percentage <= 80){
		cout << "\t- Grade\t\t\t" << "\t\tB" << " -\n";
	}  else if(percentage >= 60 && percentage <= 70){
		cout << "\t- Grade\t\t\t" << "\t\tC" << " -\n";
	} else if(percentage >= 40 && percentage <= 60){
		cout << "\t- Grade\t\t\t" << "\t\tD" << " -\n";
	}  else if(percentage < 40){
		cout << "\t- Grade\t\t\t" << "\t\tF" << " -\n";
	}
	cout << "\t===========================================\n";
    return 0;
}


