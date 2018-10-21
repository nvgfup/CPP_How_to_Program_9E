/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-15 01:14:52
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-18 02:27:09
*****************************************************************************/
#include <string>

class GradeBook
{
public:
	explicit GradeBook(std::string, std::string);
	void setCourseName(std::string);
	void setTeacherName(std::string);
	std::string getCourseName() const;
	std::string getTeacherName() const;
	void displayMessage() const;
private:
	std::string courseName;
	std::string teacherName;
};
