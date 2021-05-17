#ifndef CATALOGINDIVIDUAL_HPP
#define CATALOGINDIVIDUAL_HPP
#include <iostream>
#include "Elev.h"

template<class T> //implementare in acelasi fisier, clasele template se implementeaza in acelasi fisier
class CatalogIndividual // din cauza unor probleme de compilare foarte bine cunoscute in c++
{
	private:
		static int nextMatricol;
		int matricolNumber;
		int examNumbers;
		Elev *ev;
		std::vector<T*> examene;
		std::vector<std::string> observatii;
	public:
		CatalogIndividual(Elev *ev);
		void addExam(T *structure);
		int getMatricolNumber() const;
		void setMatricolNumber(int matricolNumber);
		int getExamNumbers() const;
		std::vector<T*> getExams() const;
		void setObservatie(std::string obs);
		std::vector<std::string> getObservatii();
		friend std::ostream &operator<<(std::ostream &os, const CatalogIndividual<T> &cat)
		{
			os<<"Numarul matricol al elevului: "<<cat.getMatricolNumber()<<std::endl;
			os<<"Elevul are un numar total de "<<cat.getExamNumbers()<<std::endl;
			std::vector<T*> examene = cat.getExams();
			try{
				for(typename std::vector<T*>::iterator it = examene.begin(); it != examene.end(); it++)
					os<<**it;
				
			}
			catch(const std::exception &e)
			{
				std::cout<<"WARNING IN CatalogIndividual: Unimplemented operator << for the given object."<<std::endl;
				std::cout<<"More information: "<<e.what()<<std::endl;
			}
			return os;
		}
		CatalogIndividual operator+=(std::string observatie);
		~CatalogIndividual();
};


template<class T>
CatalogIndividual<T>::CatalogIndividual(Elev *ev)
{
	this->ev = ev;
	this->matricolNumber = ev->getRegistrationNumber();
	this->examNumbers = 0;
	this->nextMatricol++;
}


template<class T>
int CatalogIndividual<T>::getMatricolNumber() const
{
	return this->matricolNumber;
}


template<class T>
void CatalogIndividual<T>::setMatricolNumber(int matricolNumber)
{
	this->matricolNumber = matricolNumber;
}

template<class T>
int CatalogIndividual<T>::getExamNumbers() const
{
	return this->examNumbers;
}


template<class T>
void CatalogIndividual<T>::addExam(T *structure)
{
	this->examene.push_back(structure);
	this->examNumbers++;
}

template<class T>
std::vector<T*> CatalogIndividual<T>::getExams() const
{
	return this->examene;
}

template<class T>
std::vector<std::string> CatalogIndividual<T>::getObservatii()
{
	return this->observatii;
}

template<class T>
void CatalogIndividual<T>::setObservatie(std::string obs)
{
	this->observatii.push_back(obs);
}

//template<class T>
//std::ostream &operator<<(std::ostream &os, const CatalogIndividual<T> &cat)
//{
//	os<<"Numarul matricol al elevului: "<<cat.getMatricolNumber()<<std::endl;
//	os<<"Elevul are un numar total de "<<cat.getExamNumbers()<<std::endl;
//	std::vector<T*> examene = cat.getExams();
//	try{
//		for(int i = 0; i < examene.size(); i++)
//			os<<*examene[i]<<std::endl;
//		
//	}
//	catch(const std::exception &e)
//	{
//		std::cout<<"WARNING IN CatalogIndividual: Unimplemented operator << for the given class."<<std::endl;
//		std::cout<<"More information: "<<e.what()<<std::endl;
//	}
//	return os;
//}


template<class T>
int CatalogIndividual<T>::nextMatricol = 1;

//template class CatalogIndividual<std::string>;

template<class T>
CatalogIndividual<T>::~CatalogIndividual()
{
	
}


#endif