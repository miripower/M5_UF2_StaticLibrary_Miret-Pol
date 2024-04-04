//FutureGuesserLibrary.h
//M5_UF2_StaticLibrary_Miret - Pol

#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <thread>

namespace FutureGuesser
{
	class Guesser
	{
	public:
		static void userMenu();
		static void namePoints();
		static void agePoints();
		static void monthBornPoints();
		static void askQuestion(const std::string& question, const std::string& option1, const std::string& option2, const std::string& option3, int option1Points, int option2Points, int option3Points);
		static void askQuestions();
		static void finalPointsResult();
	};
}
