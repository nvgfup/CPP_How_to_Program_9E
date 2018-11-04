/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-05 00:12:15
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-05 00:24:50
*****************************************************************/
#include <string>

class GradeBook
{
public:
	explicit GradeBook(std::string);
	void setCourseName(std::string);
	std::string getCourseName() const;
	void displayMessage() const;
	void determineClassAverage() const;
private:
	std::string CourseName;
};
