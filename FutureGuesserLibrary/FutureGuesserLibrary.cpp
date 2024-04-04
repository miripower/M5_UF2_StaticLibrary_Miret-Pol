//FutureGuesserLibrary.cpp
//M5_UF2_StaticLibrary_Miret - Pol

#include <iostream>
#include <string>
#include <algorithm>
#include <thread>
#include "FutureGuesserLibrary.h"
using namespace FutureGuesser;

//Variables:
int userPoints = 0;
std::string userNameInput;
int userAgeInput;
std::string userMonthInput;

void Guesser::userMenu() {
    system("pause");
    system("cls");
    std::cout << "/--------------------------------\\" << "\n";
    std::cout << "|Nombre: \x1B[32m" << userNameInput << "\x1B[37m Edad: \x1B[35m" << userAgeInput << "\x1B[37m Puntos: \x1B[34m" << userPoints << "\x1B[37m|\n";
    std::cout << "\\--------------------------------/\n\n";
}

void Guesser::namePoints() {
    std::cout << "Introduce tu nombre (Ejemplo: Pol): ";
    std::cin >> userNameInput;
    std::cout << "Bienvenido \x1B[32m" << userNameInput << "\x1B[37m... La respuesta a tu futuro te espera...\n\n";

    for (size_t i = 0; i < userNameInput.length(); i++) {
        char letra = tolower(userNameInput[i]);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            userPoints += 10;
        }
        userPoints += 10;
    }
}

void Guesser::agePoints() {
    do {
        std::cout << "Introduce tu edad (Debe estar entre 0 y 120): ";
        std::cin >> userAgeInput;
    } while (userAgeInput < 0 || userAgeInput > 120);

    if (userAgeInput >= 0 && userAgeInput <= 9) {
        userPoints += 10;
        std::cout << "Puedo ver que solo tienes \x1B[35m" << userAgeInput << "\x1B[37m anios... Te conviene ser bueno, llevas poco tiempo en este mundo. Aun te queda mucho futuro por delante...\n\n";
    }
    else if (userAgeInput >= 10 && userAgeInput <= 19) {
        userPoints += 20;
        std::cout << "Puedo ver que solo tienes \x1B[35m" << userAgeInput << "\x1B[37m anios... Te conviene ser bueno, llevas poco tiempo en este mundo. Aun te queda mucho futuro por delante...\n\n";
    }
    else if (userAgeInput >= 20 && userAgeInput <= 29) {
        userPoints += 30;
        std::cout << "Puedo ver que tienes \x1B[35m" << userAgeInput << "\x1B[37m anios... Ya llevas un tiempecito en este mundo, pero no tanto como te crees. El futuro aun te depara muchas cosas...\n\n";
    }
    else if (userAgeInput >= 30 && userAgeInput <= 39) {
        userPoints += 40;
        std::cout << "Puedo ver que tienes \x1B[35m" << userAgeInput << "\x1B[37m anios... Ya llevas tiempo en este mundo, pero no tanto como te crees. El futuro aun te depara muchas cosas...\n\n";
    }
    else if (userAgeInput >= 40 && userAgeInput <= 49) {
        userPoints += 50;
        std::cout << "Puedo ver que tienes \x1B[35m" << userAgeInput << "\x1B[37m anios... Ya llevas tiempo en este mundo, pero no tanto como te crees. El futuro aun te depara muchas cosas...\n\n";
    }
    else if (userAgeInput >= 50 && userAgeInput <= 59) {
        userPoints += 60;
        std::cout << "Puedo ver que tienes \x1B[35m" << userAgeInput << "\x1B[37m anios... Ya llevas mucho tiempo en este mundo, pero el futuro siempre puede cambiar. Te conviene ser bueno...\n\n";
    }
    else if (userAgeInput >= 60 && userAgeInput <= 69) {
        userPoints += 70;
        std::cout << "Puedo ver que tienes \x1B[35m" << userAgeInput << "\x1B[37m anios... Ya llevas mucho tiempo en este mundo, pero el futuro siempre puede cambiar. Te conviene ser bueno...\n\n";
    }
    else if (userAgeInput >= 70 && userAgeInput <= 79) {
        userPoints += 80;
        std::cout << "Puedo ver que tienes \x1B[35m" << userAgeInput << "\x1B[37m anios... Ya llevas mucho tiempo en este mundo, pero el futuro siempre puede cambiar. Te conviene ser bueno...\n\n";
    }
    else if (userAgeInput >= 80 && userAgeInput <= 89) {
        userPoints += 90;
        std::cout << "Puedo ver que tienes \x1B[35m" << userAgeInput << "\x1B[37m anios... Ya llevas mucho tiempo en este mundo, pero el futuro siempre puede cambiar. Te conviene ser bueno...\n\n";
    }
    else {
        userPoints += 100;
        std::cout << "Puedo ver que tienes \x1B[35m" << userAgeInput << "\x1B[37m anios... Ya llevas mucho tiempo en este mundo, pero el futuro siempre puede cambiar. Te conviene ser bueno...\n\n";
    }
}

void Guesser::monthBornPoints() {
    std::cout << "Introduce el mes en el que nacieste (Ejemplo: Enero): ";
    std::cin >> userMonthInput;

    for (char& c : userMonthInput) {
        c = tolower(c);
    }

    if (userMonthInput == "enero" || userMonthInput == "abril" || userMonthInput == "julio" || userMonthInput == "octubre") {
        userPoints += 10;
    }
    else if (userMonthInput == "febrero" || userMonthInput == "mayo" || userMonthInput == "agosto" || userMonthInput == "noviembre") {
        userPoints += 20;
    }
    else if (userMonthInput == "marzo" || userMonthInput == "junio" || userMonthInput == "septiembre" || userMonthInput == "diciembre") {
        userPoints += 30;
    }
    else {
        std::cout << "Mes invalido" << std::endl;
    }
}


void Guesser::askQuestion(const std::string& question, const std::string& option1, const std::string& option2, const std::string& option3, int option1Points, int option2Points, int option3Points) {
    std::cout << question << std::endl;
    std::cout << "1.-" << option1 << std::endl;
    std::cout << "2.-" << option2 << std::endl;
    std::cout << "3.-" << option3 << std::endl;

    int userAnswer;
    do {
        std::cout << "\nIntroduce tu respuesta (1 - 2 - 3): ";
        std::cin >> userAnswer;
    } while (userAnswer != 1 && userAnswer != 2 && userAnswer != 3);

    if (userAnswer == 1) {
        userPoints += option1Points;
    }
    else if (userAnswer == 2) {
        userPoints += option2Points;
    }
    else if (userAnswer == 3) {
        userPoints += option3Points;
    }
}

void Guesser::askQuestions() {
    userMenu();
    askQuestion("Pregunta 1/10:\n\n- Te encuentras a un hombre por la calle que te pide dinero. Que haces?", "Paso de el", "Le doy todo el dinero que tenga", "Le doy alguna moneda suelta que tenga", 0, 100, 50);
    userMenu();
    askQuestion("Pregunta 2/10:\n\n- Con que frecuencia enfermas o te das algún golpe?", "Siempre, estoy mas en el hospital que en mi casa", "Pocas veces...", "Nunca, soy inmune a todo", 100, 50, 0);
    userMenu();
    askQuestion("Pregunta 3/10:\n\n- Eres feliz?", "A veces si, y a veces no", "No", "Si, mucho", 50, 0, 100);
    userMenu();
    askQuestion("Pregunta 4/10:\n\n- Con que frecuencia haces deporte?", "Nunca", "De vez en cuando", "Frecuentemente", 0, 50, 100);
    userMenu();
    askQuestion("Pregunta 5/10:\n\n- Que tipo de comida comes?", "Pizzas, hamburguesas, precalentada...", "Un poco de todo", "Verduras, fruta... Mantengo una buena dieta", 0, 50, 100);
    userMenu();
    askQuestion("Pregunta 6/10:\n\n- Encuentras una cartera en la calle. Que haces?", "La devuelvo a la policia o al lugar donde la encontre", "Me quedo con el dinero y tiro la cartera", "Me quedo con el dinero y busco a la persona solo si hay alguna identificacion", 100, 0, 50);
    userMenu();
    askQuestion("Pregunta 7/10:\n\n- Un amigo esta pasando por un momento dificil y necesita ayuda economica. Como respondes?", "Le ofrezco mi apoyo emocional y trato de ayudarlo a encontrar soluciones alternativas", "Le doy parte del dinero que puedo prescindir sin afectar mis necesidades basicas", "Ignoro su situacion y no hago nada al respecto", 100, 50, 0);
    userMenu();
    askQuestion("Pregunta 8/10:\n\n- Ves a alguien siendo acosado en la calle. Que haces?", "Intervengo para detener el acoso y ofrezco ayuda a la victima", "Llamo a la policia y observo desde la distancia sin intervenir directamente", "Paso de largo y no me involucro en la situacion", 100, 50, 0);
    userMenu();
    askQuestion("Pregunta 9/10:\n\n- Uno de tus compañeros esta luchando por entender un tema. Como reaccionas?", "Me ofrezco a ayudarle a comprender el tema y trabajar juntos para resolver sus dudas", "Sugiero que busquen ayuda de un tutor o profesor para que pueda entender mejor el tema", "Me centro en mi propio trabajo y no me involucro en ayudar a mi compañero", 100, 50, 0);
    userMenu();
    askQuestion("Pregunta 10/10:\n\n- Un vecino mayor que vive solo necesita ayuda para llevar las compras a su casa. Como respondes?", "Ofrezco llevarle las compras hasta su casa y ver si necesita alguna otra ayuda", "Le sugiero que busque ayuda en algún familiar o amigo cercano", "Paso de largo y no me involucro en la situacion", 100, 50, 0);
}

void Guesser::finalPointsResult() {
    std::cout << "Has obtenido un total de: " << userPoints << " Puntos!" << std::endl;
    std::cout << "Calculando los resultados";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << ".";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << ".";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << ".";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");

    if (userPoints < 249) {
        std::cout << "\n\x1B[35m- Salud\x1B[37m: Te queda poco tiempo de vida... \n\n\x1B[32m- Dinero\x1B[37m: Casi no tendras para lo basico \n\n\x1B[31m- Amor\x1B[37m: Vas a estar solo";
    }
    else if (userPoints > 249 && userPoints < 499) {
        std::cout << "\n\x1B[35m- Salud\x1B[37m: Te tendran que operar \n\n\x1B[32m- Dinero\x1B[37m: Notaras la crisis \n\n\x1B[31m- Amor\x1B[37m: Tendras una pareja muy poco estable";
    }
    else if (userPoints > 499 && userPoints < 749) {
        std::cout << "\n\x1B[35m- Salud\x1B[37m: Cogeras un resfriado muy fuerte \n\n\x1B[32m- Dinero\x1B[37m: No podras permitirte lujos \n\n\x1B[31m- Amor\x1B[37m: Tendras alguna que otra pareja no estable";
    }
    else if (userPoints > 749 && userPoints < 999) {
        std::cout << "\n\x1B[35m- Salud\x1B[37m: No tendras problemas importantes \n\n\x1B[32m- Dinero\x1B[37m: Las cosas iran a mejor \n\n\x1B[31m- Amor\x1B[37m: Empezaras una bonita relacion con alguien que te guste";
    }
    else {
        std::cout << "\n\x1B[35m- Salud\x1B[37m: Perfectamente de salud \n\n\x1B[32m- Dinero\x1B[37m: Seras muy rico \n\n\x1B[31m- Amor\x1B[37m: Encontraras a tu principe azul";
    }
}