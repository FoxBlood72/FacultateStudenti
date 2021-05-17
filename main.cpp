#include <iostream>
#include <fstream>
#include <unordered_map>
#include <vector>
#include <bits/stdc++.h>
#include "ExamType.h"
#include "Elev.h"
#include "Examen.h"
#include "Partial.h"
#include "Examen_Final.h"
#include "CatalogIndividual.h"


void readExamTypes(std::vector<ExamType*> &examTypes)
{
	std::string file = "examtypes.txt";
	std::ifstream f(file);
	while(!f.eof())
	{
		ExamType *ex = new ExamType;
		f>>*ex;
		if(ex->getName().empty())
		{
			delete ex;
			ExamType::setNrCount(ExamType::getNrCount() - 1);
			std::cout<<ExamType::getNrCount()<<std::endl;
		}
		else
			examTypes.push_back(ex);
	}
	f.close();
}

void displayExamTypes(std::vector<ExamType*> &examTypes)
{
	for(std::vector<ExamType*>::iterator it = examTypes.begin(); it != examTypes.end(); it++)
		std::cout<<**it;
}

void addExamType(std::vector<ExamType*> &examTypes)
{
	ExamType *ex = new ExamType;
	std::string ex_type = "";
	std::cout<<"Numele materiei: "<<std::endl;
	std::cin.get();
	getline(std::cin, ex_type);
	ex->setName(ex_type);
	examTypes.push_back(ex);
}

void readExams(std::vector<ExamType*> &examTypes, std::vector<Examen*> &exams)
{
	std::ifstream f("examstudents.txt");
	while(!f.eof())
	{
		Examen *ex = NULL;
		std::string type_exam;
		int type_id;
		f>>type_exam;
		f>>type_id;
		ExamType *exType = examTypes.at(type_id-1);
		if(type_exam == "Examen")
			ex = new Examen(exType);
		if(type_exam == "Partial")
			ex = new Partial(exType);
		if(type_exam == "Examen_Final")
			ex = new Examen_Final(exType);
		
		if(ex != NULL)
		{
			f>>*ex;
			exams.push_back(ex);
		}
	}
	f.close();
}

void displayAllExams(std::vector<Examen*> &exams)
{
	for(std::vector<Examen*>::iterator it = exams.begin(); it != exams.end(); it++)
		std::cout<<**it;
}

void readStudents(std::vector<Elev*> &students)
{
	std::ifstream student_file("students.txt");

	while(!student_file.eof())
	{
		Elev *ev = new Elev;
		student_file>>*ev;
		if((ev->getLastName()).empty())
		{
			delete ev;
			Elev::setNextNumber(Elev::getNextNumber() - 1);
		}
		else
			students.push_back(ev);
	}
	student_file.close();
}

void displayStudents(std::vector<Elev*> &students)
{
	for(std::vector<Elev*>::iterator it = students.begin(); it != students.end(); it++)
		std::cout<<**it;
}


void addStudent(std::vector<Elev*> &students)
{
	std::string last_name, first_name;
	int group;
	std::cout<<"Nume: "<<std::endl;
	std::cin>>last_name;
	std::cout<<"Prenume: "<<std::endl;
	std::cin>>first_name;
	std::cout<<"Grupa: "<<std::endl;
	std::cin>>group;
	Elev *ev = new Elev(last_name, first_name, group);
	students.push_back(ev);
}


void addExamen(std::vector<Examen*> &exams, std::vector<ExamType*> &examsType, std::vector<Elev*> &students)
{
	std::cout<<"Ce tip de examen doriti sa adaugati? "<<std::endl;
	std::cout<<"1. Examen scris"<<std::endl;
	std::cout<<"2. Partial"<<std::endl;
	std::cout<<"3. Examen Final"<<std::endl;
	std::cout<<"0. Inapoi la meniu"<<std::endl;
	int type;
	std::cin>>type;
	if(type == 0)
		return;
	if(type == 1)
	{
		int materie_id;
		float nota;
		std::cout<<"Pentru ce materie doriti sa adaugati examenul? "<<std::endl;
		displayExamTypes(examsType);
		std::cin>>materie_id;
		if(materie_id > examsType.size() || materie_id <= 0)
		{
			std::cout<<"Materie invalida! Reintroduceti!"<<std::endl;
			addExamen(exams, examsType, students);
			return;
		}
		int student_id;
		std::cout<<"Pentru ce elev doriti sa adaugati examenul?"<<std::endl;
		displayStudents(students);
		std::cin>>student_id;
		if(student_id > students.size() || student_id <= 0)
		{
			std::cout<<"Valoare invalida, reintroduceti!"<<std::endl;
			addExamen(exams, examsType, students);
			return;
		}
		std::string data;
		std::cout<<"Pe ce data s-a dat examenul?"<<std::endl;
		std::cin>>data;
		std::cout<<"Introduceti nota pentru examenul scris: "<<std::endl;
		std::cin>>nota;
		ExamType *extype = examsType.at(materie_id-1);
		Examen *ex = new Examen(extype, nota, student_id, data);
		exams.push_back(ex);
	}
	if(type == 2)
	{
		std::cout<<"Pentru ce examen doriti sa adaugati un partial?"<<std::endl;
		displayAllExams(exams);
		int id_exam;
		float nota_oral;
		std::cin>>id_exam;
		std::cout<<"Nota la oral: "<<std::endl;
		std::cin>>nota_oral;
		Partial *part = new Partial;
		*part = *exams.at(id_exam-1);
		part->setNotaOral(nota_oral);
		exams.at(id_exam-1) = part;
	}
	if(type == 3)
	{
		std::cout<<"Pentru ce partial doriti sa adaugati un examen?"<<std::endl;
		displayAllExams(exams);
		int id_exam;
		float nota_final;
		std::cin>>id_exam;
		std::cout<<"Nota/puncte la examenul final: "<<std::endl;
		std::cin>>nota_final;
		Examen_Final *exFinal = new Examen_Final;
		exFinal->setExtraPoints(nota_final);
		if(Partial *pat = dynamic_cast<Partial*>(exams.at(id_exam-1)))
		{
			*exFinal = *pat;
			exams.at(id_exam-1) = exFinal;
		}
		else
		{
			std::cout<<"Examenul selectat nu este un Partial!"<<std::endl;
			return;
		}
		
	}
}

void viewRestanta(std::unordered_map<int, std::vector<Elev*>*> &restante, std::vector<ExamType*> &examsType)
{
	std::cout<<"Selectati o materie: "<<std::endl;
	displayExamTypes(examsType);
	int type;
	std::cin>>type;
	std::vector<Elev*> *students = restante.at(type-1);
	for(std::vector<Elev*>::iterator it = students->begin(); it != students->end(); it++)
		std::cout<<**it<<std::endl;
}


void saveExamTypes(std::vector<ExamType*> &examsType)
{
	std::ofstream out("examtypes.txt");
	for(std::vector<ExamType*>::iterator it = examsType.begin(); it != examsType.end(); it++)
		out<<**it<<std::endl;
}

void saveStudents(std::vector<Elev*> &students)
{
	std::ofstream out("students.txt");
	for(std::vector<Elev*>::iterator it = students.begin(); it != students.end(); it++)
		out<<**it<<std::endl;
}

void saveExams(std::vector<Examen*> &exams)
{
	std::ofstream out("examstudents.txt");
	for(std::vector<Examen*>::iterator it = exams.begin(); it != exams.end(); it++)
		out<<**it<<std::endl;
}

void init_restante(std::vector<ExamType*> &examsType, std::vector<Examen*> &exams, std::vector<Elev*> &students, std::unordered_map<int, std::vector<Elev*>*> &restante)
{
	for(std::vector<Examen*>::iterator it = exams.begin(); it != exams.end(); it++)
	{
		Examen *ex = *it;
		if(!((*ex).isPassed()))
		{
			int exam_id = ex->getExamType()->getID();
			Elev *restElev = students.at(ex->getElevId()-1);
			if(restante.find(exam_id) == restante.end())
			{
				std::vector<Elev*> *restStudents = new std::vector<Elev*>();
				restStudents->push_back(restElev);
				restante.insert({ exam_id, restStudents });
			}
			else
			{
				std::vector<Elev*> *restStudents = restante.at(exam_id);
				restStudents->push_back(restElev);
			}
		}
	}
}

void init_db(std::vector<ExamType*> &examsType, std::vector<Examen*> &exams, std::vector<Elev*> &students, std::unordered_map<int, std::vector<Elev*>*> &restante)
{
	readExamTypes(examsType);
	readExams(examsType, exams);
	readStudents(students);
	init_restante(examsType, exams, students, restante);
}

void save_db(std::vector<ExamType*> &examsType, std::vector<Examen*> &exams, std::vector<Elev*> &students)
{
	saveExamTypes(examsType);
	saveExams(exams);
	saveStudents(students);	
}


CatalogIndividual<Examen> *getCatalog(std::vector<Examen*> &exams, std::vector<Elev*> &students)
{
	int ev_id, mat;
	std::cout<<"Pentru ce elev doriti un catalog individual?"<<std::endl;
	displayStudents(students);
	std::cin>>ev_id;
	Elev *ev = students.at(ev_id-1);
//	std::cout<<"Pentru ce materie doriti un catalog individual?";
//	std::cout<<"1. Examene scrise"<<std::endl;
//	std::cout<<"2. Partiale"<<std::endl;
//	std::cout<<"3. Examene Finale"<<std::endl;
//	std::cin>>mat;
	CatalogIndividual<Examen> *cat = new CatalogIndividual<Examen>(ev);
	for(std::vector<Examen*>::iterator it = exams.begin(); it != exams.end(); it++)
		if((*it)->getElevId() == ev->getRegistrationNumber())
			cat->addExam(*it);
		
	std::cout<<*cat;
	return cat;
}

void menu()
{
	std::cout<<"Selectati o optiune."<<std::endl;
	std::cout<<"1. Afisati toate materiile"<<std::endl;
	std::cout<<"2. Afisati toti elevii"<<std::endl;
	std::cout<<"3. Afisati toate examenel"<<std::endl;
	std::cout<<"4. Adaugati o materie"<<std::endl;
	std::cout<<"5. Adaugati un elev"<<std::endl;
	std::cout<<"6. Adaugati un examen"<<std::endl;
	std::cout<<"7. Vedeti restantierii la o anumita materie"<<std::endl;
	std::cout<<"8. Catalog inidividual pentru un anumit elev"<<std::endl;
	std::cout<<"0. Salvati si iesiti"<<std::endl;
	std::cout<<"-1. Iesire fara salvare"<<std::endl;
}


// true pentru salvare
// false pentru iesire fara salvare
bool askAndExecuteOption(std::vector<ExamType*> &examsType, std::vector<Examen*> &exams, std::vector<Elev*> &students, std::unordered_map<int, std::vector<Elev*>*> &restante)
{
	menu();
	int opt;
	std::cin>>opt;
	if(opt == 1)
		displayExamTypes(examsType);
	if(opt == 2)
		displayStudents(students);
	if(opt == 3)
		displayAllExams(exams);
	if(opt == 4)
		addExamType(examsType);
	if(opt == 5)
		addStudent(students);
	if(opt == 6)
		addExamen(exams, examsType, students);
	if(opt == 7)
		viewRestanta(restante, examsType);
	if(opt == 8)
		getCatalog(exams, students);
	if(opt == 0)
		return true;
	if(opt == -1)
		return false;
	
	return askAndExecuteOption(examsType, exams, students, restante);
}

int main()
{
	std::vector<ExamType*> examTypes;
	std::vector<Examen*> exams;
	std::vector<Elev*> students;
	std::unordered_map<int, std::vector<Elev*>*> restante;
	init_db(examTypes, exams, students, restante);
	bool save = askAndExecuteOption(examTypes, exams, students, restante);
	if(save)
		save_db(examTypes, exams, students);
//	addExamen(exams, examTypes, students);
//	displayAllExams(exams);
	
	
	return 0;
}
