#include "ExamType.h"

ExamType::ExamType()
{
	this->autoIncrement();
	this->name = "";
}

ExamType::ExamType(std::string name)
{
	this->autoIncrement();
	this->name = name;
}

void ExamType::setName(std::string name)
{
	this->name = name;
}

std::string ExamType::getName() const
{
	return this->name;
}

int ExamType::getID() const
{
	return this->nr;
}

void ExamType::autoIncrement()
{
	ExamType::nr_count += 1;
	this->nr = ExamType::nr_count;
}

void ExamType::setNrCount(int nr_count)
{
	ExamType::nr_count = nr_count;
}

int ExamType::getNrCount()
{
	return ExamType::nr_count;
}

std::ostream &operator<<(std::ostream &os, const ExamType &ex)
{
	os<<"ID: "<<ex.getID()<<std::endl;
	os<<"Materia: "<<ex.getName()<<std::endl;
	return os;
}

std::ofstream &operator<<(std::ofstream &os, const ExamType &ex)
{
	os<<ex.getName();
	return os;
}

std::istream &operator>>(std::istream &is, ExamType &ex)
{
	getline(is, ex.name);
	return is;
}

int ExamType::nr_count = 0;

ExamType::~ExamType()
{
	
}