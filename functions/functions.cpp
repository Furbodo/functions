// functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void acceptData(int &personOne, int &personTwo, int &personThree, int &personFour, int &personFive);
int ratingHighest(int personOne, int personTwo, int personThree, int personFour, int personFive);
int ratingLowest(int personOne, int personTwo, int personThree, int personFour, int personFive);
void ratingAverage(int personOne, int personTwo, int personThree, int personFour, int personFive);

int main()
{
	int personOne;
	int personTwo;
	int personThree;
	int personFour;
	int personFive;

	int scoreLowest;
	int scoreHighest;

	acceptData(personOne, personTwo, personThree, personFour, personFive);
	scoreHighest = ratingHighest(personOne, personTwo, personThree, personFour, personFive);
	scoreLowest = ratingLowest(personOne, personTwo, personThree, personFour, personFive);
	ratingAverage(personOne, personTwo, personThree, personFour, personFive);
}


void acceptData(int &personOne, int &personTwo, int &personThree, int &personFour, int &personFive)
{
	cout << "Score person 1 on a scale of 1-10:"; 
	cin >> personOne; cout << endl;
	
	while (personOne > 10 || personOne < 1) {
		cout << "Error. Please score person 1 on a scale of 1-10:";
		cin >> personOne; cout << endl;
	}
	cout << "Score person 2:";
	cin >> personTwo; cout << endl;
	
	while (personTwo > 10 || personTwo < 1) {
		cout << "Error. Please score person 2 on a scale of 1-10:";
		cin >> personTwo; cout << endl;
	}
	
	cout << "Score person 3:"; 
	cin >> personThree; cout << endl;
	
	while (personThree > 10 || personThree < 1) {
		cout << "Error. Please score person 3 on a scale of 1-10:";
		cin >> personThree; cout << endl;
	}

	cout << "Score person 4:"; 
	cin >> personFour; cout << endl;
	
	while (personFour > 10 || personFour < 1) {
		cout << "Error. Please score person 4 on a scale of 1-10:";
		cin >> personFour; cout << endl;
	}
	
	cout << "Score person 5:"; 
	cin >> personFive; cout << endl;
	
	while (personFive > 10 || personFive < 1) {
		cout << "Error. Please score person 5 on a scale of 1-10:";
		cin >> personFive; cout << endl;
	}
}

int ratingHighest(int personOne, int personTwo, int personThree, int personFour, int personFive)
{
	if (personOne > personTwo && personOne > personThree && personOne > personFour && personOne > personFive) {
		cout << "Person One has the highest rating of " << personOne; cout << endl;
		return personOne;
	}
	if (personTwo > personOne && personTwo > personThree && personTwo > personFour && personTwo > personFive) {
		cout << "Person Two has the highest rating of " << personTwo; cout << endl;
		return personTwo;
	}
	if (personThree > personTwo && personThree > personOne && personThree > personFour && personThree > personFive) {
		cout << "Person Three has the highest rating of " << personThree; cout << endl;
		return personThree;
	}
	if (personFour > personTwo && personFour > personThree && personFour > personOne && personFour > personFive) {
		cout << "Person Four has the highest rating of " << personFour; cout << endl;
		return personFour;
	}
	if (personFive > personTwo && personFive > personThree && personFive > personFour && personFive > personOne) {
		cout << "Person Five has the highest rating of " << personFive; cout << endl;
		return personFive;
	}
}

int ratingLowest(int personOne, int personTwo, int personThree, int personFour, int personFive)
{
	if (personOne < personTwo && personOne < personThree && personOne < personFour && personOne < personFive) {
		cout << "Person One has the lowest rating of " << personOne; cout << endl;
		return personOne;
	}
	if (personTwo < personOne && personTwo < personThree && personTwo < personFour && personTwo < personFive) {
		cout << "Person Two has the lowest rating of " << personTwo; cout << endl;
		return personTwo;
	}
	if (personThree < personTwo && personThree < personOne && personThree < personFour && personThree < personFive) {
		cout << "Person Three has the lowest rating of " << personThree; cout << endl;
		return personThree;
	}
	if (personFour < personTwo && personFour < personThree && personFour < personOne && personFour < personFive) {
		cout << "Person Four has the lowest rating of " << personFour; cout << endl;
		return personFour;
	}
	if (personFive < personTwo && personFive < personThree && personFive < personFour && personFive < personOne) {
		cout << "Person Five has the lowest rating of " << personFive; cout << endl;
		return personFive;
	}
}

void ratingAverage(int personOne, int personTwo, int personThree, int personFour, int personFive)
{
	double averageScore;
	averageScore = ((double)personOne + (double)personTwo + (double)personThree + (double)personFour + (double)personFive) / 5;
	cout << "The average of the scores given is:" << averageScore;
}

