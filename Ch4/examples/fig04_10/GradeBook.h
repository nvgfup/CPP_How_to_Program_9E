/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-04 18:07:39
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-04 18:19:53
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
