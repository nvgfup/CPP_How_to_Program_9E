/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-06 00:21:47
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-06 00:21:47
*****************************************************************/
class CreditCard
{
public:
	explicit CreditCard();
	void setAccount();
	void setBalance();
	void setCharges();
	void setCredits();
	void setCreditLimit();
	void setNewBalance();
	double getAccount() const;
	double getBalance() const;
	double getCharges() const;
	double getCredits() const;
	double getCreditLimit() const;
	double getNewBalance() const;
	void run();
private:
	int account = 0;
	double balance = 0.0f;
	double charges = 0.0f;
	double credits = 0.0f;
	double creditLimit = 0.0f;
	double newBalance = 0.0f;
};