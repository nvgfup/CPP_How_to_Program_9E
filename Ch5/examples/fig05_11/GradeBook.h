/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-14 23:58:30
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-14 23:58:30
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
private:
	std::string courseName;
	unsigned int aCount;
	unsigned int bCount;
	unsigned int cCount;
	unsigned int dCount;
	unsigned int fCount;
};