#include <iostream>

using namespace std;

enum grade
{
	A,B,C,D,F
};

grade getGradeFromScore(int score)
{
	if (score >= 90)
		return A;
	else if (score >= 80)
		return B;
	else if (score >= 70)
		return C;
	else if (score >= 60)
		return D;
	else
		return F;
}

int calculateAverage(int scores[], int students)
{
	int sum = 0;
	for (int i = 0; i <= students; i++)
	{
		sum += scores[i];
	}
	return sum / students;
}

void displayGrades(int scores[], int students)
{
	for (int i = 0; i < students; i++)
	{
		grade total = getGradeFromScore(scores[i]);
		cout << "student" << i + 1 << "score= " << scores[i] << "grade= ";
		switch (grade)
		{
			case A: cout << "A"; break;
			case B: cout << "B"; break;
			case C: cout << "C"; break;
			case D: cout << "D"; break;
			case F: cout << "F"; break;
		}
		cout << endl;
	}
}

int main()
{
	int studentScores[5] = { 85, 92, 78, 64, 55 };
	int averageScore = calculateAverage(studentScores, 5);
	cout << "average score = " << averageScore << endl;
	displayGrades(studentScores, 5);
	return 0;

}
