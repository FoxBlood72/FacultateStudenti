#ifndef EXAMEN_FINAL_HPP
#define EXAMEN_FINAL_HPP
#include <iostream>
#include "Partial.h"
#include "ExamType.h"

class Examen_Final : public Partial
{
	private:
		float extra_points;
	public:
		Examen_Final();
		Examen_Final(ExamType *exType);
		Examen_Final(ExamType *exType, float scris);
		Examen_Final(ExamType *exType, float scris, float oral);
		Examen_Final(ExamType *exType, float scris, float oral, float extra_points);
		float getExtraPoints();
		void setExtraPoints(float extra_points);
		bool isPassed();
		void afisare(std::ostream &os) const;
		void citire(std::istream &is);
		void outFile(std::ofstream &os) const;
		Examen_Final operator=(Partial &ex);
		~Examen_Final();

};

#endif // EXAMEN_FINAL_HPP
