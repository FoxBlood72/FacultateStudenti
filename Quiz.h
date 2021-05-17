#ifndef QUIZ_HPP
#define QUIZ_HPP
#include <iostream>

class Quiz {
	private:
		int items;
		std::string *quizQuestions;
		int *correctAns;
		int *givedAns;
	public:
		Quiz();
		Quiz(int items);
		Quiz(int items, int *correctAns);
		Quiz(int items, int *correctAns, int *givedAns);
		Quiz(int items, int *correctAns, int *givedAns, std::string *quizQuestions);
		void setQuizQuestions(std::string *quizQuestions);
		std::string *getQuizQuestions();
		~Quiz();
};






#endif