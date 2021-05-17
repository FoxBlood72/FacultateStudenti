#ifndef PARTIAL_HPP
#define PARTIAL_HPP
#include "Examen.h"

class Partial : public Examen
{
	private:
		float nota_oral;
	public:
		Partial();
		Partial(ExamType *extype);
		Partial(ExamType *extype, float nota_scris);
		Partial(ExamType *extype, float nota_scris, float nota_oral);
		void setNotaOral(float nota_oral);
		float getNotaOral() const;
		virtual void citire(std::istream &is);
		virtual void afisare(std::ostream &os) const;
		virtual bool isPassed();
		virtual void copyExam(Examen &ex);
		virtual void outFile(std::ofstream &os) const;
		Partial operator=(Partial &part);
		Partial operator=(Examen &ex);
		~Partial();

};

#endif // PARTIAL_HPP
