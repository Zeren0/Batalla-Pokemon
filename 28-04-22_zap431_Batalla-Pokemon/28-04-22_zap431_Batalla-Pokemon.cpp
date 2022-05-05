// 28-04-22_zap431_Batalla-Pokemon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*
#include <iostream>
#include <Windows.h>
using namespace std;

int main()

{
	bool uno = true;
	//Ciclo

	while (uno == true)
	{

	string Jugador1 = "Bulbasaur";
	int Ataque1 = 0;
	int Defensa1 = 0;
	string Jugador2 = "Charmander";
	int Ataque2 = 0;
	int Defensa2 = 0;
	string Jugador3 = "Squirtle";
	int Ataque3 = 0;
	int Defensa3 = 0;

	std::cout << "Selecciona a tu pokemon \n";
	std::cout << "Coloca 0 para seleccionar a Bulbasaur \n";
	std::cout << "Coloca 1 para seleccionar a Charmander \n";
	std::cout << "Coloca 2 para seleccionar a Squirtle \n";
	
	int VidaU;
	int Shose;
	int movimiento;

	std::cin >> Shose;
	
	switch (Shose)
	{
	case 0:
		std::cout << "Elegiste a Bulbasaur \n";
		break;
	case 1: 
		std::cout << "Elegiste a Charmander \n";
		break;
	case 2:
		std::cout << "Elegiste a Squirtle \n";
		break;
	}

	cout << "Tu oponente sera Pikachu \n";

	if (true)
	{

	}

	cout << "Ingrese la accion a realizar \n 1 para atacar \n 2 para defender" << endl;
	cin >> movimiento;
		
		std::cout << "Desea repetir la secuencia? \nIngrese 0 para no \n";
		std::cout << "Ingrese 1 para si \n";
		std::cin >> uno;

	}
}

*/
//09_04_22_ZAP653_P6_POKE_BATALLA. CRISTINA VERA GARCIA.
/*
Este programa simula una batalla pokemon. Donde se va a repetir hasta que ganes una batalla con cada pokemon.
Despues que ganes cada batalla, volveras a elegir un pokemon y volver a combatir.
Cuando completas las 4 batallas se te va a preguntar si quieres volver a jugar.
*/

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <random>

using namespace std;

int main()
{
    string op;
    int pokemon, BulbHP, BulbATK, SqrtHP, SqrtATK, CharHP, CharATK, PikaATK, PikaHP, act, RataHP, RataATK, VoltHP, VoltATK, TentHP, TentATK, ZigHP, ZigATK;
    string intro = "Bienvenido al mundo de Pokemon. El dia de hoy queremos introducirte en las batallas Pokemon.\n \nA continuacion. La liga Pokemon te otorgara un equipo base con el cual comenzaras.\n";

    string wild, select, rules;
    const string ATKname1[4] = { "Placaje", "Latigo cepa","Absorber", "Derribo" };// Bulbasaur
    const string ATKname2[4] = { "Pistola de agua", "Latigo","Giro rapido", "Placaje" };// Squirtle
    const string ATKname3[4] = { "Rueda fuego", "Lanzallamas","Placaje", "Desenrollar" };// Charmander
    const string ATKname4[4] = { "Impactrueno", "Placaje electrico","Cola de hierro", "Poder oculto" };// Pikachu

    cout << "Como deberia llamarte?\n";
    string NombreJ;
    std::cin >> NombreJ;
 

    do
    {
        BulbHP = 50, SqrtHP = 45, CharHP = 38, PikaHP = 35;
        RataHP = 30, TentHP = 30, VoltHP = 30, ZigHP = 30;

        for (const auto c : intro)
        {
            cout << c << flush;
            this_thread::sleep_for(chrono::milliseconds(30));
        }
        cout << endl;
        for (const auto c : rules = "Para ganar el combate deberas usar a todos tus pokemon y ganar cada pelea\n")
        {
            cout << c << flush;
            this_thread::sleep_for(chrono::milliseconds(30));
        }
        cout << endl;
        do {
            for (const auto c : select = "\nEste es el equipo Pokemon otorgado por la liga:\n")
            {
                cout << c << flush;
                this_thread::sleep_for(chrono::milliseconds(30));
            }
            cout << endl;
            cout << "Elige con cual pokemon quieres iniciar colocando el numero correspondiente\n";
            cout << "1. Bulbasaur\n";
            cout << "2. Squirtle\n";
            cout << "3. Charmander\n";
            cout << "4. Pikachu\n";
            do {
                cin >> pokemon;

                switch (pokemon)
                {
                case 1:
                    cout << NombreJ << " ha elegido a Bulbasaur\n";
                    cout << "\nLos stats de Bulbasaur son:\n";
                    cout << "-Tipo: Planta/Veneno \n-HP: 50 \n-ATK: 25 \n-DEF: 70\n";
                    for (const auto c : wild = "UN RATATA SALAVAJE HA APARECIDO!!!\n")
                    {
                        cout << c << flush;
                        this_thread::sleep_for(chrono::milliseconds(30));
                    }
                    cout << endl;
                    cout << "\nLos stats de Ratata son: \n";
                    cout << "-Tipo: Normal \n-HP: 35 \n-ATK: 20 \n-DEF: 65\n";
                    cout << "La batalla va a comenzar en: \n";
                    for (int i = 1; i <= 3; i++)
                    {
                        cout << i << endl;
                        Sleep(1000);
                    }

                    do {
                        cout << "\n1.Atacar \n2.Defender\n";
                        cin >> act;
                        if (BulbHP <= 5) { BulbHP = BulbHP + 20; cout << "Bulbasaur se cura usando Absorber, su HP ahora es: " << BulbHP << "\n"; }
                        switch (act)
                        {
                        case 1:
                            srand(time(NULL));
                            cout << "Bulbasaur ha usado " << ATKname1[rand() % 4] << "\n";
                            BulbATK = rand() % 20;
                            RataHP = RataHP - BulbATK;
                            if (BulbATK >= 10) { cout << "\nEl ataque de Bulbasaur fue neutro\n"; }
                            cout << "\nBulbasaur hizo un dmg de: " << BulbATK;
                            cout << "\nEl HP de Ratata ahora es: " << RataHP;
                            break;

                        case 2:
                            srand(time(NULL));
                            cout << "Bulbasaur ha usado Absorver para defenderse\n";
                            cout << "Ratata ha utilizado Placaje";
                            RataATK = rand() % 11;
                            BulbHP = BulbHP - RataATK;
                            cout << "\nEl HP de Bulbasaur se mantiene sin cambios ";
                            break;
                        }
                    } while (RataHP > 0);

                    break;

                case 2:
                    cout << NombreJ <<" ha elegido a Squirtle\n";
                    cout << "\nLos stats de Squirtle son:\n";
                    cout << "-Tipo: Agua \n-HP: 45 \n-ATK: 48 \n-DEF: 65\n";
                    for (const auto c : wild = "UN VOLTORB SALAVAJE HA APARECIDO!!!\n")
                    {
                        cout << c << flush;
                        this_thread::sleep_for(chrono::milliseconds(30));
                    }
                    cout << "\nLos stats de Voltorb son: \n";
                    cout << "-Tipo: Electrico \n-HP: 35 \n-ATK: 20 \n-DEF: 65\n";
                    cout << "La batalla va a comenzar en:\n";
                    for (int i = 1; i <= 3; i++)
                    {
                        cout << i << endl;
                        Sleep(1000);
                    }
                    do {
                        cout << "\n1.Atacar \n2.Defender\n";
                        cin >> act;
                        if (SqrtHP <= 5) { SqrtHP = SqrtHP + 20; cout << "Squirtle se cura rapidamente, su HP ahora es: " << SqrtHP << "\n"; }
                        switch (act)
                        {
                        case 1:
                            srand(time(NULL));
                            cout << "Squirtle ha usado " << ATKname2[rand() % 4] << "\n";
                            SqrtATK = rand() % 20;
                            VoltHP = VoltHP - SqrtATK;
                            if (SqrtATK >= 10) { cout << "\nEl ataque de Squirtle fue efectivo\n"; }
                            cout << "\nSquirtle hizo un dmg de: " << SqrtATK;
                            cout << "\nEl HP de Voltorb ahora es: " << VoltHP;
                            break;

                        case 2:
                            srand(time(NULL));
                            cout << "Squirtle ha usado Refugio para defenderse\n";
                            cout << "Voltorb ha utilizado Impactrueno";
                            VoltATK = rand() % 11;
                            SqrtHP = SqrtHP - VoltATK;
                            cout << "\nEl HP de Squirtle ahora es: " << SqrtHP;
                            break;
                        }
                    } while (VoltHP > 0);

                    break;

                case 3:
                    cout << NombreJ << " ha elegido a Charmander \n";
                    cout << "\nLos stats de Charmander son:\n";
                    cout << "-Tipo: Fuego \n-HP: 39 \n-ATK: 52 \n-DEF: 43\n";
                    for (const auto c : wild = "UN TENTACOOL SALAVAJE HA APARECIDO!!!\n")
                    {
                        cout << c << flush;
                        this_thread::sleep_for(chrono::milliseconds(30));
                    }
                    cout << endl;

                    cout << "\nLos stats de Tentacool son: \n";
                    cout << "-Tipo: Agua/Veneno \n-HP: 35 \n-ATK: 20 \n-DEF: 65\n";
                    cout << "La batalla va a comenzar en: \n";
                    for (int i = 1; i <= 3; i++)
                    {
                        cout << i << endl;
                        Sleep(1000);
                    }
                    do {
                        cout << "\n1.Atacar \n2.Defender\n";
                        cin >> act;
                        if (CharHP <= 5) { CharHP = CharHP + 20; cout << "Charmander se cura rapidamente, su HP ahora es: " << CharHP << "\n"; }
                        switch (act)
                        {
                        case 1:
                            srand(time(NULL));
                            cout << "Charmander ha usado " << ATKname3[rand() % 4] << "\n";
                            CharATK = rand() % 20;
                            TentHP = TentHP - CharATK;
                            if (CharATK >= 10) { cout << "\nEl ataque de Charmander fue efectivo!\n"; }
                            cout << "\nCharmander hizo un dmg de: " << CharATK;
                            cout << "\nEl HP de Tentacool ahora es: " << TentHP;
                            break;

                        case 2:
                            srand(time(NULL));
                            cout << "Charmander ha usado Pantalla de Humo para defenderse\n";
                            cout << "Tentacool ha utilizado Hidrochorro";
                            TentATK = rand() % 11;
                            CharHP = CharHP - TentATK;
                            cout << "\nEl HP de Charmander ahora es: " << CharHP;
                            break;
                        }
                    } while (TentHP > 0);

                    break;

                case 4:
                    cout << NombreJ << " ha elegido a Pikachu \n";
                    cout << "\nLos stats de Pikachu son:\n";
                    cout << "-Tipo: Electrico \n-HP: 35 \n-ATK: 25 \n-DEF: 65\n";
                    for (const auto c : wild = "UN ZIGZAGOON SALAVAJE HA APARECIDO!\n")
                    {
                        cout << c << flush;
                        this_thread::sleep_for(chrono::milliseconds(30));
                    }
                    cout << endl;
                    cout << "\nLos stats de Zigzagoon son: \n";
                    cout << "-Tipo: Normal \n-HP: 40 \n-ATK: 24 \n-DEF: 55\n";
                    cout << "La batalla va a comenzar en: \n";
                    for (int i = 1; i <= 3; i++)
                        //contador
                    {
                        cout << i << endl;
                        Sleep(1000);
                        //Tiempo
                    }
                    do {
                        cout << "\n1.Atacar \n2.Defender\n";
                        cin >> act;
                        if (PikaHP <= 5) { PikaHP = PikaHP + 20; cout << "Pikachu se cura rapidamente, su HP ahora es: " << PikaHP << "\n"; }
                        switch (act)
                        {
                        case 1:
                            srand(time(NULL));
                            cout << "Pikachu ha usado " << ATKname4[rand() % 4] << "\n";
                            PikaATK = rand() % 20;
                            ZigHP = ZigHP - PikaATK;
                            if (PikaATK >= 10) { cout << "\nEl ataque de Pikachu fue efectivo\n"; }
                            cout << "\nPikachu hizo un dmg de: " << PikaATK;
                            cout << "\nEl HP de Zigzagoon ahora es: " << ZigHP;
                            break;

                        case 2:
                            srand(time(NULL));
                            cout << "Pikachu ha usado Aguante para defenderse\n";
                            cout << "Zigzagoon ha utilizado derribo";
                            ZigATK = rand() % 11;
                            PikaHP = PikaHP - ZigATK;
                            cout << "\nEl HP de Pikachu ahora es: " << PikaHP;
                            break;
                        }
                    } while (ZigHP > 0);

                    break;
                default: {cout << "Ingresa un numero valido.\n"; }
                }
            } while (pokemon != 1 && pokemon != 2 && pokemon != 3 && pokemon != 4);
        } while (RataHP + VoltHP + TentHP + ZigHP > 0);
        cout << "\n\nFelicidades has ganado!\nQuieres volver a jugar? Escribe Si para jugar nuevamente o No para salir\n";
        cin >> op;

    } while (op == "Si" || op == "si");


    return 0;
}