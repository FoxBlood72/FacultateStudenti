#include "Partial.h"


Partial::Partial()
{
	this->nota_oral = 0.0;
}

Partial::Partial(ExamType *extype) : Examen(extype)
{
	this->nota_oral = 0.0;
}

Partial::Partial(ExamType *extype, float nota_scris) : Examen(extype, nota_scris)
{
	this->nota_oral = 0.0;
}

Partial::Partial(ExamType *extype, float nota_scris, float nota_oral) : Examen(extype, nota_scris)
{
	this->nota_oral = nota_oral;
}

float Partial::getNotaOral() const
{
	return this->nota_oral;
}

void Partial::setNotaOral(float nota_oral)
{
	this->nota_oral = nota_oral;
}


void Partial::citire(std::istream &is)
{
	Examen::citire(is);
	is>>this->nota_oral;
}

void Partial::afisare(std::ostream &os) const
{
	Examen::afisare(os);
	os<<"Nota la partial este: "<<this->getNotaOral()<<std::endl;
}

bool Partial::isPassed()
{
	if(Examen::isPassed() && this->nota_oral >= 4.5)
		return true;
		
	return false;
}



void Partial::copyExam(Examen &ex)
{
	this->setExamId(ex.getExamId());
	this->setNota(ex.getNota());
	this->setElevId(ex.getElevId());
	this->setData(ex.getData());
	this->setExamType(ex.getExamType());
}

void Partial::outFile(std::ofstream &os) const
{
	this->Examen::outFile(os);
	os<<this->nota_oral<<" ";
}

Partial Partial::operator =(Partial &ex)
{
	this->setExamId(ex.getExamId());
	this->setNota(ex.getNota());
	this->setElevId(ex.getElevId());
	this->setData(ex.getData());
	this->setExamType(ex.getExamType());
	this->setNotaOral(ex.getNotaOral());
}

Partial Partial::operator=(Examen &ex)
{
	this->copyExam(ex);
	return *this;
}


Partial::~Partial()
{
	
}


