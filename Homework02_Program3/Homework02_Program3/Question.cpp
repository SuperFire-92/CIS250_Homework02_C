#include "Question.h"
#include <iostream>
#include <string>

using namespace std;

Question::Question()
{
	question = "";
	pAnswer0 = "";
	pAnswer1 = "";
	pAnswer2 = "";
	pAnswer3 = "";
	answerNum = -1;
}
Question::Question(string q, string p0, string p1, string p2, string p3, int cAns)
{
	qInitialize(q, p0, p1, p2, p3, cAns);
}

void Question::qInitialize(string q, string p0, string p1, string p2, string p3, int cAns)
{
	question = q;
	pAnswer0 = p0;
	pAnswer1 = p1;
	pAnswer2 = p2;
	pAnswer3 = p3;
	answerNum = cAns;
}

//Setters
void Question::setQuestion(string q)
{
	question = q;
}
void Question::setPAnswers(string p0, string p1, string p2, string p3)
{
	pAnswer0 = p0;
	pAnswer1 = p1;
	pAnswer2 = p2;
	pAnswer3 = p3;
}
void Question::setPAnswers(string p, /*this int correlates to the answer you are setting*/ int pAns)
{
	if (pAns == 0)
	{
		pAnswer0 = p;
	}
	if (pAns == 1)
	{
		pAnswer1 = p;
	}
	if (pAns == 2)
	{
		pAnswer2 = p;
	}
	if (pAns == 3)
	{
		pAnswer3 = p;
	}
}
void Question::setCorrectAnswer(int cAns)
{
	answerNum = cAns;
}

//Getters
string Question::getQuestion()
{
	return question;
}
string Question::getPAnswer(/*this int correlates to the answer you are getting*/ int pAns)
{
	if (pAns == 0)
	{
		return pAnswer0;
	}
	if (pAns == 1)
	{
		return pAnswer1;
	}
	if (pAns == 2)
	{
		return pAnswer2;
	}
	if (pAns == 3)
	{
		return pAnswer3;
	}
	return "INVALID";
}
int Question::getCorrectAnswer()
{
	return answerNum;
}