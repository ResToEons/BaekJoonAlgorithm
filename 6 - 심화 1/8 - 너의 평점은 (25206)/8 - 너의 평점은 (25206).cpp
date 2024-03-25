#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#define TOTAL_COURSES 20


// A+ 4.5, A0 4.0, B+ 3.5, B0 3.0, C+ 2.5, C0 2.0, D+ 1.5, D0 1.0, F 0.0
int main()
{
	std::string courses[TOTAL_COURSES];
	std::stringstream stream;
	std::string courseName;
	std::string coursePoint;
	std::string courseGrade;
	double courseScore = 0.0;
	double totalScore = 0.0;
	double avgGPA = 0.000000;

	for (int i = 0; TOTAL_COURSES > i; i++)
	{
		std::getline(std::cin, courses[i]);
	}

	for (int i = 0; TOTAL_COURSES > i; i++)
	{
		std::stringstream stream(courses[i]);
		
		stream >> courseName;
		stream >> coursePoint;
		stream >> courseGrade;

		//std::cout << courseName << " " << coursePoint << " " << courseGrade << std::endl;
		//std::cout << coursePoint << " " << courseGrade << std::endl;

		courseScore = stoi(coursePoint);

		if (courseGrade == "A+")
		{
			avgGPA += (4.5 * courseScore);
			totalScore += courseScore;
		}
		else if (courseGrade == "A0")
		{
			avgGPA += (4.0 * courseScore);
			totalScore += courseScore;
		}
		else if (courseGrade == "B+")
		{
			avgGPA += (3.5 * courseScore);
			totalScore += courseScore;
		}
		else if (courseGrade == "B0")
		{
			avgGPA += (3.0 * courseScore);
			totalScore += courseScore;
		}
		else if (courseGrade == "C+")
		{
			avgGPA += (2.5 * courseScore);
			totalScore += courseScore;
		}
		else if (courseGrade == "C0")
		{
			avgGPA += (2.0 * courseScore);
			totalScore += courseScore;
		}
		else if (courseGrade == "D+")
		{
			avgGPA += (1.5 * courseScore);
			totalScore += courseScore;
		}
		else if (courseGrade == "D0")
		{
			avgGPA += (1.0 * courseScore);
			totalScore += courseScore;
		}
		else if (courseGrade == "F")
		{
			avgGPA += 0;
			totalScore += courseScore;
		}
		else // P
		{
			avgGPA += 0;
		}
	}

	if (totalScore == 0)
	{
		totalScore = 1;
	}

	avgGPA /= totalScore;



	std::cout << std::fixed;
	std::cout << std::setprecision(6);
	std::cout << avgGPA;

	return 0;
}