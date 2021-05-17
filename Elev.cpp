#include "Elev.h"
#include <string>
#include <bits/stdc++.h>

Elev::Elev()
{
	this->last_name = "";
	this->first_name = "";
	this->group_number = -1;
	this->autoIncrement();
}

Elev::Elev(std::string last_name)
{
	this->last_name = last_name;
	this->first_name = "";
	this->group_number = -1;
	this->autoIncrement();
}

Elev::Elev(std::string last_name, std::string first_name)
{
	this->last_name = last_name;
	this->first_name = first_name;
	this->group_number = -1;
	this->autoIncrement();
}

Elev::Elev(std::string last_name, std::string first_name, int group_number)
{
	this->last_name = last_name;
	this->first_name = first_name;
	this->group_number = group_number;
	this->autoIncrement();
}

std::string Elev::getFirstName() const
{
	return this->first_name;
}

void Elev::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}

std::string Elev::getLastName() const
{
	return this->last_name;
}

void Elev::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

int Elev::getGroup() const
{
	return this->group_number;
}

void Elev::setGroup(int group_number)
{
	this->group_number = group_number;
}


void Elev::setNextNumber(int nextNumber)
{
	Elev::nextNumber = nextNumber;
}

int Elev::getNextNumber()
{
	return Elev::nextNumber;
}

int Elev::getRegistrationNumber() const
{
	return this->registrationNumber;
}

void Elev::setRegistratioNumber(int registrationNumber)
{
	this->registrationNumber = registrationNumber;
}


void Elev::autoIncrement()
{
	this->registrationNumber = this->nextNumber;
	this->nextNumber++;
}


std::ostream &operator<<(std::ostream &os, const Elev &ev) 
{
	os<<"Numar matricol: "<<ev.getRegistrationNumber()<<std::endl;
	os<<"Nume: "<<ev.getLastName()<<std::endl;
	os<<"Prenume: "<<ev.getFirstName()<<std::endl;
	os<<"Grupa: "<<ev.getGroup()<<std::endl;
	
	return os;
}

std::istream &operator>>(std::istream &is, Elev &ev)
{
//	std::string info_line;
//	std::getline(is, info_line);
//	std::string info;
//	std::stringstream stream_info(info_line);
//	std::string tokenized_info[3];
//	int token_position = 0;
//	bool keep_token = true;
	
//	while(keep_token && std::getline(stream_info, info, ' ')) //conteaza ordinea conditiilor
//	{
//		tokenized_info[token_position] = info;
//		token_position++;
//		if(token_position > 2)
//			keep_token = false;
//	}
//	
//	if(!tokenized_info[0].empty())
//		ev.setLastName(tokenized_info[0]);
//	
//	if(!tokenized_info[1].empty())
//		ev.setFirstName(tokenized_info[1]);
//	
//	if(!tokenized_info[2].empty())
//		ev.setGroup(std::stoi(tokenized_info[2]));
//	
//	while(std::getline(stream_info, info, ' '))
//	{
//		int id_exam = std::stoi(info);
//		ev.addExamId(id_exam);
//	}

	is>>ev.last_name;
	is>>ev.first_name;
	is>>ev.group_number;
		
	return is;
}

std::ofstream &operator<<(std::ofstream &os, const Elev &ex)
{
	os<<ex.last_name<<" "<<ex.first_name<<" "<<ex.group_number;
	return os;
}

Elev Elev::operator=(Elev &ev)
{
	this->setFirstName(ev.getFirstName());
	this->setLastName(ev.getLastName());
	this->setGroup(ev.getGroup());
	return *this;
}

int Elev::nextNumber = 1;



Elev::~Elev()
{
}

