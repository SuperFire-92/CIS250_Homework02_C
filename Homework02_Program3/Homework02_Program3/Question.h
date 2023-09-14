#pragma once
#include <iostream>
#include <string>

using namespace std;

class Question
{
private:
	//The trivia question
	string question;
	//The possible answers
	string pAnswer0;
	string pAnswer1;
	string pAnswer2;
	string pAnswer3;
	//The number of the correct answer
	int answerNum;
public:
	Question();
	Question(string, string, string, string, string, int);

	void qInitialize(string, string, string, string, string, int);

	//Setters
	void setQuestion(string);
	void setPAnswers(string, string, string, string);
	void setPAnswers(string, /*this int correlates to the answer you are setting*/int);
	void setCorrectAnswer(int);

	//Getters
	string getQuestion();
	string getPAnswer(int);
	int getCorrectAnswer();
};

