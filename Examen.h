#ifndef EXAMEN_HPP
#define EXAMEN_HPP
#include <iostream>
#include <fstream>
#include "Elev.h"
#include "ExamType.h"

class Examen
{
	private:
		int exam_id;
		int elev_id;
		float nota;
		ExamType *extype;
		static int nextExamId;
		void autoIncrement();
		std::string data;
	public:
		Examen();
		Examen(ExamType *extype);
		Examen(ExamType *extype, float nota);
		Examen(ExamType *extype, float nota, int elev_id);
		Examen(ExamType *extype, float nota, int elev_id, std::string data);
		float getNota() const;
		void setNota(float nota);
		void setData(std::string data);
		void setElevId(int elev_id);
		int getElevId() const;
		int getExamId() const;
		void setExamId(int exam_id);
		void setExamType(ExamType *exType);
		ExamType *getExamType() const;
		std::string getData();
		virtual bool isPassed();
		friend std::ostream &operator<<(std::ostream &os, const Examen &ex);
		virtual void afisare(std::ostream &os) const;
		friend std::istream &operator>>(std::istream &is, Examen &ex);
		virtual void citire(std::istream &is);
		friend std::ofstream &operator<<(std::ofstream &os, const Examen &ex);
		virtual void outFile(std::ofstream &os) const;
		~Examen();

};

#endif // EXAMEN_HPP
