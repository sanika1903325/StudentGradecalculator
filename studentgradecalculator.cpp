
#include<iostream>
using namespace std;

int main()
{
	int marks;
	cout << "enter your marks:";
	cin >> marks;

	if (marks >= 90)
		cout << "Grade A";
	else if (marks >= 75)
		cout << "Grade B";
	else if(marks>=60)

		cout<<"Grade C";
else if (marks>=35)
cout<<"pass";
else 
     cout<<"fail";
		return 0;
}