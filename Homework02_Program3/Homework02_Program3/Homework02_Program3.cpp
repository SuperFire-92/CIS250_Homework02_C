//=======================================
//Name: Nicolaas Dyk
//Date: 02-28-2023
//Desc: A trivia game for two people 
//      made using classes
//=======================================

#include <iostream>
#include <string>
#include "Question.h"
#include "GameManager.h"

using namespace std;

int main()
{
    //Make the game array
    GameManager game;

    game.setQuestion(0, "What is the name of the snake haired monster in Greek mythology?", "Typhon", "Echidna", "Medusa", "Scylla", 2);
    game.setQuestion(1, "What continent is Madagascar in?", "Asia", "Australia", "Africa", "South America", 2);
    game.setQuestion(2, "Who was the first president of the United States of America?", "Barack Obama", "George Washington", "Thomas Jefferson", "Franklin Roosevelt", 1);
    game.setQuestion(3, "How tall is the Empire State Building?", "50 feet", "55,200 feet", "1,250 feet", "840 feet", 2);
    game.setQuestion(4, "What state is connected to four of the five Great Lakes?", "Michigan", "Wisconsin", "Pennsylvania", "Florida", 0);
    game.setQuestion(5, "How many legs does a lobster have?", "Two", "Fifty", "One Hundred", "Eight", 3);
    game.setQuestion(6, "What country is not only an island, but also a continent", "Madagascar", "Japan", "Hawaii", "Australia", 3);
    game.setQuestion(7, "What is the top selling video game of all time?", "Minecraft", "Tetris", "Super Mario Bros.", "Pac-Man", 0);
    game.setQuestion(8, "What is Pi when written out to 8 decimal places", "3.24159262", "3.14159265", "4.14159265", "3.15149265", 1);
    game.setQuestion(9, "How many tentacles does an octopus have?", "2", "9", "8", "6", 2);

    game.playGame();
}