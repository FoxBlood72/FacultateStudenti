#ifndef ELEV_HPP
#define ELEV_HPP
#include <iostream>
#include <vector>

class Elev
{
	private:
		int registrationNumber;
		std::string last_name;
		std::string first_name;
		int group_number;
		static int nextNumber;
		void autoIncrement();
	public:
		Elev();
		Elev(std::string last_name);
		Elev(std::string last_name, std::string first_name);
		Elev(std::string last_name, std::string first_name, int group_number);
		std::string getLastName() const;
		void setLastName(std::string last_name);
		std::string getFirstName() const;
		void setFirstName(std::string first_name);
		void setGroup(int group_number);
		int getGroup() const;
		static int getNextNumber();
		static void setNextNumber(int nextNumber);
		int getRegistrationNumber() const;
		void setRegistratioNumber(int registrationNumber);
		friend std::istream &operator>>(std::istream &is, Elev &ev);
		friend std::ostream &operator<<(std::ostream &os, const Elev &ev);
		friend std::ofstream &operator<<(std::ofstream &os, const Elev &ev);
		Elev operator=(Elev &ev);
		~Elev();

};

#endif // ELEV_HPP
