#include "ExamType.h"
#include "Examen.h"
#include "Partial.h"
#include "Examen_Final.h"

Examen::Examen()
{
	this->extype = NULL;
	this->autoIncrement();
}

Examen::Examen(ExamType *extype)
{
	this->extype = extype;
	this->autoIncrement();
}

Examen::Examen(ExamType *extype, float nota)
{
	this->extype = extype;
	this->nota = nota;
	this->autoIncrement();
}

Examen::Examen(ExamType *extype, float nota, int elev_id)
{
	this->extype = extype;
	this->nota = nota;
	this->elev_id = elev_id;
	this->autoIncrement();
}

Examen::Examen(ExamType *extype, float nota, int elev_id, std::string data)
{
	this->extype = extype;
	this->nota = nota;
	this->elev_id = elev_id;
	this->data = data;
	this->autoIncrement();
}

bool Examen::isPassed()
{
	if(this->nota >= 4.5)
		return true;
	
	return false;
}

ExamType *Examen::getExamType() const
{
	return this->extype;
}

void Examen::setExamType(ExamType *exType)
{
	this->extype = exType;
}

float Examen::getNota() const
{
	return this->nota;
}

void Examen::setNota(float nota)
{
	this->nota = nota;
}

void Examen::outFile(std::ofstream &os) const
{
	if(const Partial *pt = dynamic_cast<const Examen_Final*>(this))
		os<<"Examen_Final ";
	else if(const Partial *exF = dynamic_cast<const Partial*>(this))
		os<<"Partial ";
	else
		os<<"Examen ";
	
	os<<(this->extype)->getID()<<" "<<this->elev_id<<" "<<this->data<<" "<<this->nota<<" ";
}


std::ostream &operator<<(std::ostream &os, const Examen &ex)
{
	ex.afisare(os);
	return os;
}

std::ofstream &operator<<(std::ofstream &os, const Examen &ex)
{
	ex.outFile(os);
	return os;
} 

void Examen::afisare(std::ostream &os) const
{
	os<<"ID examen: "<<this->exam_id<<std::endl;
	os<<"ID student: "<<this->elev_id<<std::endl;
	os<<"Examenul la materia "<<this->extype->getName()<<" cu id-ul de identificare: "<<this->extype->getID()<<" are nota "<<this->nota<<std::endl;
}

std::istream &operator>>(std::istream &is, Examen &ex)
{
	ex.citire(is);
	return is;
} 



void Examen::citire(std::istream &is)
{
	is>>this->elev_id;
	is>>this->data;
	is>>this->nota;
}

void Examen::autoIncrement()
{
	this->exam_id = Examen::nextExamId;
	this->nextExamId++;
}

void Examen::setElevId(int elev_id)
{
	this->elev_id = elev_id;
}

int Examen::getElevId() const
{
	return this->elev_id;
}

void Examen::setData(std::string data)
{
	this->data = data;
}

std::string Examen::getData()
{
	return this->data;
}

void Examen::setExamId(int exam_id)
{
	this->exam_id = exam_id;
}

int Examen::getExamId() const
{
	return this->exam_id;
}

int Examen::nextExamId = 1;

Examen::~Examen()
{

}

