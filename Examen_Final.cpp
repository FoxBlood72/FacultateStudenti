#include "Examen_Final.h"


Examen_Final::Examen_Final()
{
	this->extra_points = 0.0;
}

Examen_Final::Examen_Final(ExamType *extype) : Partial(extype)
{
	this->extra_points = 0.0;
}

Examen_Final::Examen_Final(ExamType *extype, float scris) : Partial(extype, scris)
{
	this->extra_points = 0.0;
}

Examen_Final::Examen_Final(ExamType *extype, float scris, float oral) : Partial(extype, scris, oral)
{
	this->extra_points = 0.0;
}

Examen_Final::Examen_Final(ExamType *extype, float scris, float oral, float extra_points) : Partial(extype, scris, oral)
{
	this->extra_points = extra_points;
}

void Examen_Final::citire(std::istream &is)
{
	Partial::citire(is);
	is>>this->extra_points;
}

void Examen_Final::afisare(std::ostream &os) const
{
	Partial::afisare(os);
	os<<"Nota/Punctele bonus la examenul final este: "<<this->extra_points<<std::endl;
}

float Examen_Final::getExtraPoints()
{
	return this->extra_points;
}

void Examen_Final::outFile(std::ofstream &os) const
{
	this->Partial::outFile(os);
	os<<this->extra_points;
}

Examen_Final Examen_Final::operator=(Partial &ex)
{
	Examen *exbase = &ex;
	this->copyExam(*exbase);
	this->setNotaOral(ex.getNotaOral());
	return *this;
}

Examen_Final Examen_Final::operator =(Examen_Final &ex)
{
	Examen *exbase = &ex;
	this->copyExam(*exbase);
	this->setNotaOral(ex.getNotaOral());
	this->setExtraPoints(ex.getExtraPoints());
	return *this;
}

void Examen_Final::setExtraPoints(float extra_points)
{
	this->extra_points = extra_points;
}

bool Examen_Final::isPassed()
{
	if(!Partial::isPassed())
		return this->extra_points >= 4.5 ? true : false;
			
	return true;		
}

Examen_Final::~Examen_Final()
{
}

