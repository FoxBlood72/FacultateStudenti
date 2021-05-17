#ifndef EXAMTYPE_HPP
#define EXAMTYPE_HPP
#include <iostream>
#include <fstream>

class ExamType
{
	private:
		int nr;
		std::string name;
		static int nr_count;
		void autoIncrement();
	public:
		ExamType();
		ExamType(std::string name);
		std::string getName() const;
		int getID() const;
		void setName(std::string name);
		static void setNrCount(int nr_count);
		static int getNrCount();
		friend std::ostream &operator<<(std::ostream &os, const ExamType &ex);
		friend std::ofstream &operator<<(std::ofstream &os, const ExamType &ex);
		friend std::istream &operator>>(std::istream &is, ExamType &ex);
		~ExamType();
};


#endif