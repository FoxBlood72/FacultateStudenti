//#include <iostream>
//#include "CatalogIndividual.h"
//
//
//template<class T>
//CatalogIndividual<T>::CatalogIndividual(Elev *ev)
//{
//	this->ev = ev;
//	this->matricolNumber = nextMatricol;
//	this->examNumbers = 0;
//	this->nextMatricol++;
//}
//
//
//template<class T>
//int CatalogIndividual<T>::getMatricolNumber() const
//{
//	return this->matricolNumber;
//}
//
//
//template<class T>
//void CatalogIndividual<T>::setMatricolNumber(int matricolNumber)
//{
//	this->matricolNumber = matricolNumber;
//}
//
//template<class T>
//int CatalogIndividual<T>::getExamNumbers()
//{
//	return this->examNumbers;
//}
//
//
//template<class T>
//void CatalogIndividual<T>::addTStructure(T* structure)
//{
//	this->FisaObservatii.push_back(structure);
//}
//
//template<class T>
//std::vector<T*> CatalogIndividual<T>::getObservatii()
//{
//	return this->FisaObservatii;
//}
//
//template<class T>
//std::ostream &operator<<(std::ostream &os, const CatalogIndividual<T> &cat)
//{
//	os<<"Numarul matricol al elevului: "<<cat.getMatricolNumber()<<std::endl;
//	os<<"Elevul are un numar total de "<<cat.getExamNumbers()<<std::endl;
//	std::vector<T*> observatii = cat.getObservatii();
//	try{
//		for(typename std::vector<T*>::iterator it = observatii.begin(); it != observatii.end(); it++)
//			os<<*it<<std::endl;
//	}
//	catch(const std::exception &e)
//	{
//		std::cout<<"WARNING IN CatalogIndividual: Unimplemented operator << for the given class."<<std::endl;
//		std::cout<<"More information: "<<e.what()<<std::endl;
//	}
//	return os;
//}
//
//
//template<class T>
//int CatalogIndividual<T>::nextMatricol = 1;
//
////template class CatalogIndividual<std::string>;
//
//template<class T>
//CatalogIndividual<T>::~CatalogIndividual()
//{
//	
//}