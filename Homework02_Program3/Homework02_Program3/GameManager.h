#pragma once
#include <iostream>
#include <string>
#include "Question.h"

using namespace std;

class GameManager
{
private:
	const static int SIZE = 10;
	Question list[SIZE];
	int player1Score;
	int player2Score;
public:
	GameManager();

	void playGame();
	bool playQuestion(int);
	
	//setters
	
	//Purpose of variables in order:
	//int qNum which question is getting changed; string q the question string; string p0-p3 possible answers; int cAsn the correct answer
	void setQuestion(int, string, string, string, string, string, int);
	//int score for setting the score, int playerNum for which player
	void setPlayerScore(int, int);

	//getters

	Question getQuestion(int);
	int getPlayerScore(int);
	int getSize();
};

