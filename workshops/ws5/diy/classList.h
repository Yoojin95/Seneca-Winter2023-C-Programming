/******************************************************************
 Yoojin Lee, ylee237@myseneca.ca, 188162218, February 22, 2023
*******************************************************************/

void subjectMarksReport(void);

/// <summary>
/// gets the subject information from the console(number of students and subject code)
/// </summary>
/// <param name="subjectCode">Passes back the subject code read from console</param>
/// <returns>Number of students read from console</returns>
int getSubjectInfo(char subjectCode[]);

/// <summary>
/// gets all the student numbers and thier marks from the console
/// </summary>
/// <param name="noOfStudents">receives the number of student to get stno and marks for</param>
/// <param name="studentNumbers">Passes back the student numbers read from console</param>
/// <param name="studentsMark">Passes back the student marks read from console</param>
void getStudentsMarks(int noOfStudents, int studentNumbers[], int studentsMark[]);


/// <summary>
/// 
/// </summary>
/// <param name="subjectCode"></param>
/// <param name="noOfStudents"></param>
/// <param name="studentNumbers"></param>
/// <param name="studentsMark"></param>
void printReport(const char subjectCode[], int noOfStudents,
					  const int studentNumbers[], const int studentsMark[]);

