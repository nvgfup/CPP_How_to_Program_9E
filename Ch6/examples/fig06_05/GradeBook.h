/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-16 00:17:34
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-16 00:17:34
*****************************************************************************/

#include <string>

class GradeBook
{
public:
	explicit GradeBook(std::string);
	void setCourseName(std::string);
	std::string getCourseName() const;
	void displayMessage() const;
	void inputGrades();
	void displayGradeReport() const;
	int maximum(int, int, int) const;
private:
	std::string courseName;
	int maximumGrade;
};