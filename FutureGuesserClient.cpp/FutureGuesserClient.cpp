//FutureGuesserClient.cpp
//M5_UF2_StaticLibrary_Miret-Pol

#include <iostream>
#include <string>
#include <algorithm>
#include <thread>
#include "FutureGuesserLibrary.h"
using namespace FutureGuesser;
    
int main()
{
    system("Title Future Guesser - Pol Miret");
    std::cout << "Bienvenido a \x1B[33mFuture Guesser\x1B[37m. Preparate para contestar preguntas y ver lo que te depara el futuro...\n" << std::endl;
    system("pause");
    system("cls");

    Guesser::namePoints();
    Guesser::agePoints();
    Guesser::monthBornPoints();

    Guesser::askQuestions();

    system("pause");
    system("cls");
    Guesser::finalPointsResult();
}