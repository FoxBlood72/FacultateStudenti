#include "Quiz.h"

Quiz::Quiz()
{
	this->items = 0;
}

Quiz::Quiz(int items)
{
	this->items = items;
	this->correctAns = new int[items];
	this->givedAns = new int[items];
	this->quizQuestions = new std::string[items];
}

Quiz::Quiz(int items, int *correctAns)
{
	this->items = items;
	this->correctAns = correctAns;
	this->givedAns = new int[items];
	this->quizQuestions = new std::string[items];
}

Quiz::Quiz(int items, int *correctAns, int *givedAns)
{
	this->items = items;
	this->correctAns = correctAns;
	this->givedAns = givedAns;
	this->quizQuestions = new std::string[items];
}

Quiz::Quiz(int items, int *correctAns, int *givedAns, std::string *quizQuestions)
{
	this->items = items;
	this->correctAns = correctAns;
	this->givedAns = givedAns;
	this->quizQuestions = quizQuestions;
}

void Quiz::setQuizQuestions(std::string *quizQuestions)
{
	this->quizQuestions = quizQuestions;
}

std::string *Quiz::getQuizQuestions()
{
	return this->quizQuestions;
}




Quiz::~Quiz()
{
	delete []this->correctAns;
	delete []this->givedAns;
	delete []this->quizQuestions;
}