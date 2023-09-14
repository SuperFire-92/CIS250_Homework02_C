#include "GameManager.h"
#include <iostream>
#include <string>

using namespace std;

GameManager::GameManager()
{
	player1Score = 0;
	player2Score = 0;
}

void GameManager::playGame()
{
	for (int i = 0; i < SIZE; i++)
	{
		if (playQuestion(i))
		{
			if (i < 5)
			{
				player1Score++;
			}
			else
			{
				player2Score++;
			}
		}
	}
	cout << endl;
	cout << "Final Score" << endl;
	cout << "=~=~=~=~=~=~=~=~=~=~=~=" << endl;
	cout << "Player 1: " << player1Score << endl;
	cout << "Player 2: " << player2Score << endl;
}

bool GameManager::playQuestion(int qNum)
{
	//Temporary question to be used while this function runs
	Question tempQ = list[qNum];
	//Stores the user's answer
	string userAnswer;
	//Checks to see if the user's answer is valid
	bool valid = false;
	
	//Output the question
	cout << "Player " << (qNum < 5 ? "1" : "2") << " Question " << qNum + 1 << endl;
	cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
	cout << tempQ.getQuestion() << endl;
	cout << "1. " << tempQ.getPAnswer(0) << endl;
	cout << "2. " << tempQ.getPAnswer(1) << endl;
	cout << "3. " << tempQ.getPAnswer(2) << endl;
	cout << "4. " << tempQ.getPAnswer(3) << endl;
	cout << endl;
	//Get user's response and check if it's valid
	while (!valid)
	{
		cout << "Enter your answer: ";
		cin >> userAnswer;
		//Make sure it's a proper length
		if (userAnswer.length() != 1)
		{
			//remains invalid
			cout << "Invalid Answer" << endl;
		}
		//Make sure it's a number
		else if (!isdigit(userAnswer.at(0)))
		{
			//remains invalid
			cout << "Invalid Answer" << endl;
		}
		//Make sure it's one of the available numbers
		else if (!(stoi(userAnswer) > 0 && stoi(userAnswer) < 5))
		{
			//remains invalid
			cout << "Invalid Answer" << endl;
		}
		//If everything returned false, the answer is correct
		else
		{
			valid = true;
		}
	}
	int ans = stoi(userAnswer) - 1;
	if (ans == tempQ.getCorrectAnswer())
	{
		cout << "Correct!" << endl << endl;
		return true;
	}
	else
	{
		cout << "Incorrect! The correct answer was " << tempQ.getCorrectAnswer() + 1 << endl << endl;
		return false;
	}
}

//setters
//Purpose of variables in order:
//int qNum which question is getting changed; string q the question string; string p0-p3 possible answers; int cAsn the correct answer
void GameManager::setQuestion(int qNum, string q, string p0, string p1, string p2, string p3, int cAns)
{
	list[qNum].qInitialize(q, p0, p1, p2, p3, cAns);
}

//int score for setting the score, int playerNum for which player (0 for both)
void GameManager::setPlayerScore(int score, int playerNum)
{
	if (playerNum == 0)
	{
		player1Score = score;
		player2Score = score;
	}
	if (playerNum == 1)
	{
		player1Score = score;
	}
	if (playerNum == 2)
	{
		player2Score = score;
	}
}

//getters
Question GameManager::getQuestion(int qNum)
{
	return list[qNum];
}

//int playerNum for which player you want the score of
int GameManager::getPlayerScore(int playerNum)
{
	if (playerNum == 1)
	{
		return player1Score;
	}
	if (playerNum == 2)
	{
		return player2Score;
	}
	return -1;
}

int GameManager::getSize()
{
	return SIZE;
}