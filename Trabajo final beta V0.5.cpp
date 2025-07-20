#include "pch.h"
#include "iostream"
#include "conio.h"
#include "math.h"
#include "string.h"
#define uno 49
#define dos 50
#define tres 51
#define cuatro 52
#define espacio 32
#define esc 27
#define ARRIBA 72
#define ABAJO 80
#define IZQUIERDA 75
#define DERECHA 77
#define ficha 254
#define Filas8x8 34
#define Columnas8x8 52
#define Filas10x10 34
#define Columnas10x10 36
using namespace System;
using namespace std;
int matriz8x8[Filas8x8][Columnas8x8] = {
    //0,1,2,3,4,5,6,7,8,9
     {3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3},
     {3,3,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,3,3},
     {3,3,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,3,3},
     {3,3,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,3,3},
     {3,3,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,3,3},
     {3,3,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,3,3},
     {3,3,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,3,3},
     {3,3,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,3,3},
     {3,3,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,3,3},
     {3,3,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,3,3},
     {3,3,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,3,3},
     {3,3,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,0,0,0,0,0,0,1,4,4,4,4,1,3,3},
     {3,3,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,3,3},
     {3,3,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,3,3},
     {3,3,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,3,3},
     {3,3,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,3,3},
     {3,3,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,3,3},
     {3,3,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,3,3},
     {3,3,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,3,3},
     {3,3,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,3,3},
     {3,3,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,3,3},
     {3,3,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,3,3},
     {3,3,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,3,3},
     {3,3,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,3,3},
     {3,3,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,3,3},
     {3,3,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,3,3},
     {3,3,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,3,3},
     {3,3,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,3,3},
     {3,3,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,3,3},
     {3,3,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,3,3},
     {3,3,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,3,3},
     {3,3,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,0,0,3,3},
     {3,3,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,3,3},
     {3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3}

};
void color_de_fichas(int& colorfichaj1, int& colorfichaj2, char* nombre1, char* nombre2, int& puntajej1, int& puntajej2)
{
    Console::CursorVisible = true;
    while (true)
    {
        if (puntajej1 > puntajej2)
        {
            do
            {
                cout << "\n\n" << nombre1 << " elige el color de tu ficha (1: blanco, 4: rojo): "; cin >> colorfichaj1;

                if (colorfichaj1 == 1 || colorfichaj1 == 4) break;
                cout << "\n\n" << nombre1 << " te ruego que dejes tus dotes de payaso por un momento e ingreses un numero valido";
            } while (true);
        }
        else if (puntajej2 > puntajej1)
        {
            do
            {
                cout << "\n\n" << nombre2 << " elige el color de tu ficha (1: blanco, 4: rojo): "; cin >> colorfichaj1;

                if (colorfichaj1 == 1 || colorfichaj1 == 4) break;
                cout << "\n\n" << nombre2 << " te ruego que dejes tus dotes de payaso por un momento e ingreses un numero valido";
            } while (true);
        }

        if (puntajej1 < puntajej2)
        {
            do
            {
                cout << "\n\n" << nombre1 << " elige el color de tu ficha (2: negro, 3: azul): "; cin >> colorfichaj2;

                if (colorfichaj2 == 2 || colorfichaj2 == 3) break;
                cout << "\n\n" << nombre1 << " te ruego que dejes tus dotes de payaso por un momento e ingreses un numero valido";
            } while (true);
        }
        else if (puntajej2 < puntajej1)
        {
            do
            {
                cout << "\n\n" << nombre2 << " elige el color de tu ficha (2: negro, 3: azul): "; cin >> colorfichaj2;

                if (colorfichaj2 == 2 || colorfichaj2 == 3) break;
                cout << "\n\n" << nombre2 << " te ruego que dejes tus dotes de payaso por un momento e ingreses un numero valido";
            } while (true);
        }

        if (colorfichaj1 == colorfichaj2)
        {
            cout << "\n\nNo pueden elegir el mismo color de fichas, vuelvan a colocar el color";
        }
        if (colorfichaj1 != colorfichaj2) break;
    }
}
void lanzar_dados(int& puntajeJ1, int& puntajeJ2, char* nombre1, char* nombre2)
{
    Console::CursorVisible = false;
    while (true)
    {
        Random dado;

        puntajeJ1 = dado.Next(1, 7);
        puntajeJ2 = dado.Next(1, 7);

        system("cls");
        cout << "\n" << nombre1 << " presiona la tecla espacio para lanzar los dados";

        while (true)
        {
            if (_kbhit())
            {
                char tecla = getch();
                if (tecla == espacio)
                {
                    cout << "\n\nSe esta lanzando el dado..."; _sleep(1000);
                    cout << "\n\ntu puntaje es " << puntajeJ1; break;
                }
            }
        }

        cout << "\n\n" << nombre2 << " presiona la tecla espacio para lanzar los dados";

        while (true)
        {
            if (_kbhit())
            {
                char tecla = getch();
                if (tecla == espacio)
                {
                    cout << "\n\nSe esta lanzando el dado..."; _sleep(1000);
                    cout << "\n\ntu puntaje es " << puntajeJ2; break;
                }

            }
        }

        if (puntajeJ1 > puntajeJ2)
        {
            cout << "\n\nEl puntaje mas alto es " << puntajeJ1 << " asi que empieza primero " << nombre1; break;
        }
        if (puntajeJ2 > puntajeJ1)
        {
            cout << "\n\nEl puntaje mas alto es " << puntajeJ2 << " asi que empieza primero " << nombre2; break;
        }
        if (puntajeJ1 == puntajeJ2)
        {
            cout << "\n\n Los puntajes son iguales por lo que deben volver a tirar los dados";
            cout << "\n\n Pulsa espacio para volver a tirar los dados";
            while (true)
            {
                if (_kbhit())
                {
                    char tecla = getch();
                    if (tecla == espacio)
                    {
                        break;
                    }
                }
            }
        }
    }


}
void nombres_participantes(char* nombre1, char* nombre2)
{
    Console::CursorVisible = true;
    cout << "Nombre del jugador 1: "; cin >> nombre1;

    cout << "\nNombre del jugador 2: "; cin >> nombre2;
}
void instrucciones()
{
    Console::SetWindowSize(150, 45);
    cout << "Las damas es un juego para dos personas en un tablero de 64 casillas de 8x8 celdas." << endl;
    cout << "cada jugador tiene 12 piezas llamadas peones que dispondran en las casillas negras mas proximas." << endl;
    cout << "objetivo: comer todas o maximo de piezas contrarias." << endl;
    cout << "COMIENZA A JUGAR EL QUE TIENE FICHAS BLANCAS O ROJAS." << endl;
    cout << "LAS PIEZAS SE MUEVEN SIEMPRE HACIA ADELANTE EN DIAGONAL A LA IZQUIERDA O DERECHA A LA CASILLA LIBRE ADYACENTE" << endl;
    cout << "SE PUEDEN COMER VARIAS PIEZAS DE FORMA ENCADENADA EN UN SOLO MOVIMIENTO, ESTO SE PUEDE HACER SI AL COMER UNA PIEZA" << endl;
    cout << "SE PUEDE COMER OTRA NO HAY LIMITE MIENTRAS EL MOVIMIENTO SEA HACIA DELANTE Y JUSTO DESPUES DE LA PIEZA COMIDA HAYA UNA" << endl;
    cout << "CASILLA LIBRE DESDE LA QUE PODER SALTAR" << endl;
    cout << "si un peon llega al otro extremo del tablero en territorio enemigo se trasnforma en una dama que se representara otra pieza" << endl;
    cout << "de diferente color. Es decir, si es blanco o rojo la reina sera amarillo y si es negro o azul la reina sera verde" << endl;
    cout << "la dama o reina se mueve y come igual que los peones siempre en diagonal pero hacia adelante o atras y puede moverse tantas casillas" << endl;
    cout << "como pueda siempre y cuando esten libres." << endl;
    cout << "las damas pueden comer cualquier peon solitario que se encuentre en su misma diagonal pero a varias casillas de distancia," << endl;
    cout << "este movimiento se puede hacer encadenadamente, si en algun momento ningun jugador puede mover sus piezas porque las del contrario" << endl;
    cout << "le bloquea los movimientos, se declarar" << char(160) << "n tablas en la partida, es decir empate." << endl;
    cout << "los jugadores tambien declararan tablas cuando ninguno pueda imponerse sobre el otro o la partida se prolongue demasiado." << endl;

    cout << "\n\n\t\t\tPresione 'esc' para regresar al menu";
    while (true)
    {
        if (_kbhit())
        {
            char tecla = getch();

            if (tecla == esc)
            {
                break;
            }
        }
    }
}
void creditos()
{
    Console::CursorVisible = false;
    system("cls");
    Console::SetCursorPosition(55, 3); cout << "Creditos";
    Console::SetCursorPosition(40, 6); cout << "Desarrollador en jefe Pietro Trisoglio"; _sleep(900);
    Console::SetCursorPosition(37, 9); cout << "Segundo desarrollador al mando Fabrizio Valderrama"; _sleep(900);
    Console::SetCursorPosition(40, 12); cout << "Artista grafico Luis Miguel Vasquez"; _sleep(900);
    Console::SetCursorPosition(40, 15); cout << "Presione 'esc' para regresar al menu";
    while (true)
    {
        if (_kbhit())
        {
            char tecla = getch();

            if (tecla == esc)
            {
                break;
            }
        }
    }
}
void logo_upc()
{
    int logo[20][40] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };

    for (int f = 0; f < 20; f++)
    {
        for (int c = 0; c < 40; c++)
        {
            Console::SetCursorPosition(c + 2, f + 1);//x=columnas y y=filas
            if (logo[f][c] == 1)
            {
                Console::ForegroundColor = ConsoleColor::DarkRed;
                cout << (char)219;
            }

            if (logo[f][c] == 0)
            {
                Console::ForegroundColor = ConsoleColor::Black;
                cout << (char)219;
            }
        }
    }
}
void marco()
{
    int matriz[20][50] = { {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} };


    for (int f = 0; f < 20; f++)
    {
        for (int c = 0; c < 50; c++)
        {
            Console::SetCursorPosition(c + 35.5, f + 1);//x=columnas y y=filas
            if (matriz[f][c] == 1)
            {
                Console::ForegroundColor = ConsoleColor::DarkRed;
                cout << (char)219;
            }

            if (matriz[f][c] == 0)
            {
                Console::ForegroundColor = ConsoleColor::Black;
                cout << (char)219;
            }
        }
    }
}
void marco2()
{
    int matriz[20][90] = { {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} };



    for (int f = 0; f < 20; f++)
    {
        for (int c = 0; c < 80; c++)
        {
            Console::SetCursorPosition(c + 73, f + 1);//x=columnas y y=filas
            if (matriz[f][c] == 1)
            {
                Console::ForegroundColor = ConsoleColor::DarkRed;
                cout << (char)219;
            }

            if (matriz[f][c] == 0)
            {
                Console::ForegroundColor = ConsoleColor::Black;
                cout << (char)219;
            }
        }
    }
}
void graficar_filas_y_columnas8x8()
{
    //filas
    Console::SetCursorPosition(7, 5);
    Console::ForegroundColor = ConsoleColor::Yellow; cout << "8";
    Console::SetCursorPosition(7, 9); cout << "7";
    Console::SetCursorPosition(7, 13); cout << "6";
    Console::SetCursorPosition(7, 17); cout << "5";
    Console::SetCursorPosition(7, 21); cout << "4";
    Console::SetCursorPosition(7, 25); cout << "3";
    Console::SetCursorPosition(7, 29); cout << "2";
    Console::SetCursorPosition(7, 33); cout << "1";

    //columnas
    Console::SetCursorPosition(14, 2); cout << "A";
    Console::SetCursorPosition(20, 2); cout << "B";
    Console::SetCursorPosition(26, 2); cout << "C";
    Console::SetCursorPosition(32, 2); cout << "D";
    Console::SetCursorPosition(38, 2); cout << "E";
    Console::SetCursorPosition(44, 2); cout << "F";
    Console::SetCursorPosition(50, 2); cout << "G";
    Console::SetCursorPosition(56, 2); cout << "H";
}
void graficar_tablero(int color_de_ficha_j1, int color_de_ficha_j2)
{
    for (int k = 0; k < Filas8x8; k++)
    {
        for (int h = 0; h < Columnas8x8; h++)
        {
            Console::SetCursorPosition(h + 10, k + 3); //X=h  Y=k
            if (matriz8x8[k][h] == 1)
            {
                if (color_de_ficha_j1 == 2 || color_de_ficha_j2 == 2)
                {
                    Console::ForegroundColor = ConsoleColor::DarkMagenta;
                }
                else
                {
                    Console::ForegroundColor = ConsoleColor::Black;
                }
            }
            if (matriz8x8[k][h] == 0) Console::ForegroundColor = ConsoleColor::White;
            if (matriz8x8[k][h] == 3) Console::ForegroundColor = ConsoleColor::Gray;

            // imprimir matriz
            if (matriz8x8[k][h] == 4)
            {
                if (color_de_ficha_j1 == 1)
                {
                    Console::ForegroundColor = ConsoleColor::White;
                }
                else if (color_de_ficha_j1 == 2)
                {
                    Console::ForegroundColor = ConsoleColor::Black;
                }
                else if (color_de_ficha_j1 == 3)
                {
                    Console::ForegroundColor = ConsoleColor::DarkBlue;
                }
                else if (color_de_ficha_j1 == 4)
                {
                    Console::ForegroundColor = ConsoleColor::DarkRed;
                }

            }
            if (matriz8x8[k][h] == 5)
            {
                if (color_de_ficha_j2 == 1)
                {
                    Console::ForegroundColor = ConsoleColor::White;
                }
                else if (color_de_ficha_j2 == 2)
                {
                    Console::ForegroundColor = ConsoleColor::Black;
                }
                else if (color_de_ficha_j2 == 3)
                {
                    Console::ForegroundColor = ConsoleColor::DarkBlue;
                }
                else if (color_de_ficha_j2 == 4)
                {
                    Console::ForegroundColor = ConsoleColor::DarkRed;
                }
            }
            if (matriz8x8[k][h] == 7)
            {
                Console::ForegroundColor = ConsoleColor::DarkYellow;
            }
            if (matriz8x8[k][h] == 8)
            {
                Console::ForegroundColor = ConsoleColor::DarkGreen;
            }

            cout << (char)219;

        }
    }
}
void validar_turno(int& puntaje1, int& puntaje2, int& turno)
{
    if (turno == 0)
    {
        if (puntaje1 > puntaje2) turno = 1;

        if (puntaje2 > puntaje1) turno = 2;
    }
    else if (turno == 1)
    {
        turno = 2;
    }
    else if (turno == 2)
    {
        turno = 1;
    }


}
void validar_posicion(int& filaj1, char& columnaj1, int& direccionj1, char* nombre1, char* nombre2, int& puntaje1, int& puntaje2, int& turno, int& contador_de_movimientosj1, int& contador_de_movimientosj2, int& tablas, int& tablas1, int& tablas2)
{
    validar_turno(puntaje1, puntaje2, turno);
    marco2();
    Console::ForegroundColor = ConsoleColor::White;
    Console::CursorVisible = true;

    if (turno == 1)
    {
        Console::SetCursorPosition(75, 2); cout << nombre1 << " ingresa la ficha que deseas mover";
    }
    else if (turno == 2)
    {
        Console::SetCursorPosition(75, 2); cout << nombre2 << " ingresa la ficha que deseas mover";
    }

    if (turno == 1 && puntaje1 > puntaje2)
    {
        Console::SetCursorPosition(115, 2); cout << "         Movimientos totales: " << contador_de_movimientosj1;
    }
    else if (turno == 2 && puntaje2 > puntaje1)
    {
        Console::SetCursorPosition(115, 2); cout << "          Movimientos totales: " << contador_de_movimientosj1;
    }

    if (turno == 1 && puntaje1 < puntaje2)
    {
        Console::SetCursorPosition(115, 2); cout << "          Movimientos totales: " << contador_de_movimientosj2;
    }
    else if (turno == 2 && puntaje2 < puntaje1)
    {
        Console::SetCursorPosition(115, 2); cout << "          Movimientos totales: " << contador_de_movimientosj2;
    }

    while (true)
    {
        Console::SetCursorPosition(75, 4); cout << "Ingresa la columna donde esta ubicada la ficha: "; cin >> columnaj1;

        if (columnaj1 == 'A' || columnaj1 == 'B' || columnaj1 == 'C' || columnaj1 == 'D' || columnaj1 == 'E' || columnaj1 == 'F' || columnaj1 == 'G' || columnaj1 == 'H' || columnaj1 == 'a' || columnaj1 == 'b' || columnaj1 == 'c' || columnaj1 == 'd' || columnaj1 == 'e' || columnaj1 == 'f' || columnaj1 == 'g' || columnaj1 == 'h') break;

        Console::SetCursorPosition(75, 6); cout << "Dato invalido";
        Console::SetCursorPosition(75, 8); cout << "Cargando..."; _sleep(1500);
        //borrar texto
        Console::SetCursorPosition(75, 4); cout << "                                                      ";
        Console::SetCursorPosition(75, 6); cout << "                            ";
        Console::SetCursorPosition(75, 8); cout << "                                  ";
    }

    while (true)
    {
        Console::SetCursorPosition(75, 6); cout << "Ingresa la fila donde esta ubicada la ficha: "; cin >> filaj1;
        if (filaj1 == 8 || filaj1 == 7 || filaj1 == 6 || filaj1 == 5 || filaj1 == 4 || filaj1 == 3 || filaj1 == 2 || filaj1 == 1 || filaj1 == -1) break; Console::SetCursorPosition(55, 8); "                                                                                            ";

        Console::SetCursorPosition(75, 8); cout << "Dato invalido";
        Console::SetCursorPosition(75, 10); cout << "Cargando..."; _sleep(1500);
        //borrar texto
        Console::SetCursorPosition(75, 6); cout << "                                                         ";
        Console::SetCursorPosition(75, 8); cout << "                 ";
        Console::SetCursorPosition(75, 10); cout << "                         ";
    }

    if (filaj1 == -1)
    {
        if (turno == 1)
        {
            Console::SetCursorPosition(75, 8); cout << "                                                          ";
            Console::SetCursorPosition(75, 8);
            cout << nombre1 << " tu rival esta pidiendo tablas. Aceptas?(1: si; 2: no): "; cin >> tablas;

        }
        else if (turno == 2)
        {
            Console::SetCursorPosition(75, 8); cout << "                                                          ";
            Console::SetCursorPosition(75, 8);
            cout << nombre2 << " tu rival esta pidiendo tablas. Aceptas?(1: si; 2: no): "; cin >> tablas;
        }

        if (tablas == 1)
        {
            Console::SetCursorPosition(75, 10); cout << "Se declara el juego en tablas";
        }
        else
        {
            Console::SetCursorPosition(75, 10); cout << "Se rechaza la peticion!. Continua el juego";
        }
    }
}
void convertir_ubicacion_filas_y_columnas(int& filaj1, char& columnaj1, int& ubicacionfila1, int& ubicacioncolumnas1, int& ubicacionfila2, int& ubicacioncolumnas2, int& ubicacioncolumnas3, int& ubicacioncolumnas4)
{
    if (columnaj1 == 'A' || columnaj1 == 'a')
    {
        ubicacioncolumnas1 = 3; ubicacioncolumnas2 = 4; ubicacioncolumnas3 = 5; ubicacioncolumnas4 = 6;
    }
    if (columnaj1 == 'B' || columnaj1 == 'b')
    {
        ubicacioncolumnas1 = 9; ubicacioncolumnas2 = 10; ubicacioncolumnas3 = 11; ubicacioncolumnas4 = 12;
    }
    if (columnaj1 == 'C' || columnaj1 == 'c')
    {
        ubicacioncolumnas1 = 15; ubicacioncolumnas2 = 16; ubicacioncolumnas3 = 17; ubicacioncolumnas4 = 18;
    }
    if (columnaj1 == 'D' || columnaj1 == 'd')
    {
        ubicacioncolumnas1 = 21; ubicacioncolumnas2 = 22; ubicacioncolumnas3 = 23; ubicacioncolumnas4 = 24;
    }
    if (columnaj1 == 'E' || columnaj1 == 'e')
    {
        ubicacioncolumnas1 = 27; ubicacioncolumnas2 = 28; ubicacioncolumnas3 = 29; ubicacioncolumnas4 = 30;
    }
    if (columnaj1 == 'F' || columnaj1 == 'f')
    {
        ubicacioncolumnas1 = 33; ubicacioncolumnas2 = 34; ubicacioncolumnas3 = 35; ubicacioncolumnas4 = 36;
    }
    if (columnaj1 == 'G' || columnaj1 == 'g')
    {
        ubicacioncolumnas1 = 39; ubicacioncolumnas2 = 40; ubicacioncolumnas3 = 41; ubicacioncolumnas4 = 42;
    }
    if (columnaj1 == 'H' || columnaj1 == 'h')
    {
        ubicacioncolumnas1 = 45; ubicacioncolumnas2 = 46; ubicacioncolumnas3 = 47; ubicacioncolumnas4 = 48;
    }


    if (filaj1 == 8)
    {
        ubicacionfila1 = 2; ubicacionfila2 = 3;
    }
    if (filaj1 == 7)
    {
        ubicacionfila1 = 6;  ubicacionfila2 = 7;
    }
    if (filaj1 == 6)
    {
        ubicacionfila1 = 10; ubicacionfila2 = 11;
    }
    if (filaj1 == 5)
    {
        ubicacionfila1 = 14; ubicacionfila2 = 15;
    }
    if (filaj1 == 4)
    {
        ubicacionfila1 = 18; ubicacionfila2 = 19;
    }
    if (filaj1 == 3)
    {
        ubicacionfila1 = 22; ubicacionfila2 = 23;
    }
    if (filaj1 == 2)
    {
        ubicacionfila1 = 26; ubicacionfila2 = 27;
    }
    if (filaj1 == 1)
    {
        ubicacionfila1 = 30; ubicacionfila2 = 31;
    }
}
void jugar(int& filaj1, char& columnaj1, int& ubicacionfila1, int& ubicacioncolumnas1, int& ubicacionfila2, int& ubicacioncolumnas2, int& ubicacioncolumnas3, int& ubicacioncolumnas4, int& direccionj1, char* nombre1, char* nombre2, int& tiro_dado_J1, int& tiro_Dado_j2, int& turno, int color_de_ficha_j1, int color_de_ficha_j2, int& contador_de_movimientosj1, int& contador_de_movimientosj2, int& contador_de_fichasj1, int& contador_de_fichasj2, int& gameover, int& tablas, int& tablas1, int& tablas2)
{
    int intervalofilas = 0;
    int intervalocolumnas = 0;
    int intervalo_de_columnas_analizador_de_reinas = 0;
    int ubicacion1_fila1 = 30;
    int ubicacion1_fila8 = 2;
    //variable especial para los movimientos de la reina
    int identificador_de_casillas_libres = 0;
    int cantidad_de_casillas_a_mover = 0;
    int direccion2 = 0;
    int contador_de_casillas = 1;
    while (true)
    {
        validar_posicion(filaj1, columnaj1, direccionj1, nombre1, nombre2, tiro_dado_J1, tiro_Dado_j2, turno, contador_de_movimientosj1, contador_de_movimientosj2, tablas, tablas1, tablas2);
        convertir_ubicacion_filas_y_columnas(filaj1, columnaj1, ubicacionfila1, ubicacioncolumnas1, ubicacionfila2, ubicacioncolumnas2, ubicacioncolumnas3, ubicacioncolumnas4);
        //mover ficha 
        if ((turno == 2 && tiro_Dado_j2 > tiro_dado_J1) || (turno == 1 && tiro_dado_J1 > tiro_Dado_j2))
        {

            if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 4 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] == 1)
            {
                do
                {
                    Console::SetCursorPosition(75, 8); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                    if (direccionj1 < 1 || direccionj1>2)
                    {
                        Console::SetCursorPosition(75, 10); cout << "Dato invalido";
                        Console::SetCursorPosition(75, 12); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                        system("pause>0");
                        //borrar

                        Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                        Console::SetCursorPosition(75, 10); cout << "                           ";
                        Console::SetCursorPosition(75, 12); cout << "                                                                                              ";
                    }

                } while (direccionj1 < 1 || direccionj1>2);

                if (direccionj1 == 1)
                {
                    matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                    matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                    matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 - 6] = 4;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 - 6] = 4;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 - 6] = 4;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] = 4;
                    matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas1 - 6] = 4;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas2 - 6] = 4;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas3 - 6] = 4;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas4 - 6] = 4;

                    //el real convertidor de reinas
                    if (matriz8x8[30][3] == 4 || matriz8x8[30][15] == 4 || matriz8x8[30][27] == 4 || matriz8x8[30][39] == 4)
                    {
                        intervalo_de_columnas_analizador_de_reinas = 3;
                        while (intervalo_de_columnas_analizador_de_reinas <= 39)
                        {
                            if (matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] == 4)
                            {
                                Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                                matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 1] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 2] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                                matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                            }
                            intervalo_de_columnas_analizador_de_reinas += 12;
                        }
                    }
                }
                else if (direccionj1 == 2)
                {
                    matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                    matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                    matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 + 6] = 4;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] = 4;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] = 4;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] = 4;
                    matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas1 + 6] = 4;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas2 + 6] = 4;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas3 + 6] = 4;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas4 + 6] = 4;

                    //el real convertidor de reinas
                    if (matriz8x8[30][3] == 4 || matriz8x8[30][15] == 4 || matriz8x8[30][27] == 4 || matriz8x8[30][39] == 4)
                    {
                        intervalo_de_columnas_analizador_de_reinas = 3;
                        while (intervalo_de_columnas_analizador_de_reinas <= 39)
                        {
                            if (matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] == 4)
                            {
                                Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                                matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 1] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 2] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                                matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                            }
                            intervalo_de_columnas_analizador_de_reinas += 12;
                        }
                    }
                }
            }//esto es movimiento normal
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 4 && (matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 5 || matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 8) && (matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 5 || matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 8) && matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas4 - 12] == 1 && matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas4 + 12] == 1)
            {//acá empieza la mecanica de comer fichas
                do
                {
                    Console::SetCursorPosition(75, 8); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                    if (direccionj1 < 1 || direccionj1>2)
                    {
                        Console::SetCursorPosition(75, 10); cout << "Dato invalido";
                        Console::SetCursorPosition(75, 12); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                        system("pause>0");
                        //borrar

                        Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                        Console::SetCursorPosition(75, 10); cout << "                           ";
                        Console::SetCursorPosition(75, 12); cout << "                                                                                              ";
                    }

                } while (direccionj1 < 1 || direccionj1>2);

                matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                if (direccionj1 == 1)
                {
                    matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 - 6] = 1;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 - 6] = 1;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 - 6] = 1;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] = 1;
                    matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas1 - 6] = 1;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas2 - 6] = 1;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas3 - 6] = 1;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas4 - 6] = 1;

                    matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas1 - 12] = 4;  matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas2 - 12] = 4;  matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas3 - 12] = 4;  matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas4 - 12] = 4;
                    matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas1 - 12] = 4;  matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas2 - 12] = 4;  matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas3 - 12] = 4;  matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas4 - 12] = 4;

                    intervalocolumnas -= 12;  intervalofilas += 8;
                }
                else if (direccionj1 == 2)
                {
                    matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 + 6] = 1;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] = 1;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] = 1;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] = 1;
                    matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas1 + 6] = 1;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas2 + 6] = 1;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas3 + 6] = 1;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas4 + 6] = 1;

                    matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas1 + 12] = 4;  matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas2 + 12] = 4;  matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas3 + 12] = 4;  matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas4 + 12] = 4;
                    matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas1 + 12] = 4;  matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas2 + 12] = 4;  matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas3 + 12] = 4;  matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas4 + 12] = 4;

                    intervalocolumnas += 12;  intervalofilas += 8;
                }
                //El real ciclo de comer en cadena by Fabrizio
                while (true)
                {
                    _sleep(2000);
                    graficar_filas_y_columnas8x8();
                    graficar_tablero(color_de_ficha_j1, color_de_ficha_j2);

                    //comprueba si la nueva ubicación tiene otra opcion para comer en ambos lados
                    if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 4 && (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 - 6 + intervalocolumnas] == 5 || matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 - 6 + intervalocolumnas] == 8) && (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 + 6 + intervalocolumnas] == 5 || matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 + 6 + intervalocolumnas] == 8) && matriz8x8[ubicacionfila1 + 8 + intervalofilas][ubicacioncolumnas4 - 12 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + 8 + intervalofilas][ubicacioncolumnas4 + 12 + intervalocolumnas] == 1)
                    {
                        do
                        {
                            Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                            Console::SetCursorPosition(75, 8); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                            if (direccionj1 < 1 || direccionj1>2)
                            {
                                Console::SetCursorPosition(75, 10); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 12); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                                system("pause>0");
                                //borrar

                                Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                                Console::SetCursorPosition(75, 10); cout << "                           ";
                                Console::SetCursorPosition(75, 12); cout << "                                                                                              ";
                            }

                        } while (direccionj1 < 1 || direccionj1>2);

                        //borra ficha
                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                        if (direccionj1 == 1)
                        {
                            //come ficha y se mueve a la siguiente posición
                            matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;

                            matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 4;
                            matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 4;

                            intervalocolumnas -= 12; intervalofilas += 8;
                        }
                        else if (direccionj1 == 2)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;

                            matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 4;
                            matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 4;

                            intervalocolumnas += 12; intervalofilas += 8;
                        }

                    }//comprueba si solo se puede a la izquierda
                    else if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 4 && (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 - 6 + intervalocolumnas] == 5 || (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 - 6 + intervalocolumnas] == 8)) && matriz8x8[ubicacionfila1 + 8 + intervalofilas][ubicacioncolumnas4 - 12 + intervalocolumnas] == 1)
                    {
                        Console::SetCursorPosition(75, 8); cout << "se come la ficha de la izquierda ";

                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;


                        matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;

                        matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 4;
                        matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 4;

                        intervalocolumnas -= 12; intervalofilas += 8;

                    }//comprueba si solo se puede a la derecha
                    else if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 4 && (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 + 6 + intervalocolumnas] == 5 || (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 + 6 + intervalocolumnas] == 8)) && matriz8x8[ubicacionfila1 + 8 + intervalofilas][ubicacioncolumnas4 + 12 + intervalocolumnas] == 1)
                    {
                        Console::SetCursorPosition(75, 8); cout << "se come la ficha de la derecha ";

                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;


                        matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;

                        matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 4;
                        matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 4;

                        intervalocolumnas += 12; intervalofilas += 8;
                    }
                    else
                    {
                        //reinicia los intervalos luego de terminar la cadena y rompe el ciclo para pasar al siguiente turno
                        intervalocolumnas = 0; intervalofilas = 0;
                        break;
                    }

                }

                //el real convertidor de reinas
                if (matriz8x8[30][3] == 4 || matriz8x8[30][15] == 4 || matriz8x8[30][27] == 4 || matriz8x8[30][39] == 4)
                {
                    intervalo_de_columnas_analizador_de_reinas = 3;
                    while (intervalo_de_columnas_analizador_de_reinas <= 39)
                    {
                        if (matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] == 4)
                        {
                            Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                            matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 1] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 2] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                            matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                        }
                        intervalo_de_columnas_analizador_de_reinas += 12;
                    }
                }
            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 4 && (matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 5 || matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 8) && matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas4 - 12] == 1)
            {
                Console::SetCursorPosition(75, 8); cout << "se come la ficha de la izquierda ";

                matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;


                matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 - 6] = 1;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 - 6] = 1;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 - 6] = 1;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] = 1;
                matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas1 - 6] = 1;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas2 - 6] = 1;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas3 - 6] = 1;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas4 - 6] = 1;

                matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas1 - 12] = 4;  matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas2 - 12] = 4;  matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas3 - 12] = 4;  matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas4 - 12] = 4;
                matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas1 - 12] = 4;  matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas2 - 12] = 4;  matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas3 - 12] = 4;  matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas4 - 12] = 4;

                intervalocolumnas -= 12;  intervalofilas += 8;
                //El real ciclo de comer en cadena by Fabrizio
                while (true)
                {
                    _sleep(2000);
                    graficar_filas_y_columnas8x8();
                    graficar_tablero(color_de_ficha_j1, color_de_ficha_j2);

                    //comprueba si la nueva ubicación tiene otra opcion para comer en ambos lados
                    if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 4 && (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 - 6 + intervalocolumnas] == 5 || matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 - 6 + intervalocolumnas] == 8) && (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 + 6 + intervalocolumnas] == 5 || matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 + 6 + intervalocolumnas] == 8) && matriz8x8[ubicacionfila1 + 8 + intervalofilas][ubicacioncolumnas4 - 12 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + 8 + intervalofilas][ubicacioncolumnas4 + 12 + intervalocolumnas] == 1)
                    {
                        do
                        {
                            Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                            Console::SetCursorPosition(75, 8); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                            if (direccionj1 < 1 || direccionj1>2)
                            {
                                Console::SetCursorPosition(75, 10); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 12); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                                system("pause>0");
                                //borrar

                                Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                                Console::SetCursorPosition(75, 10); cout << "                           ";
                                Console::SetCursorPosition(75, 12); cout << "                                                                                              ";
                            }

                        } while (direccionj1 < 1 || direccionj1>2);

                        //borra ficha
                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                        if (direccionj1 == 1)
                        {
                            //come ficha y se mueve a la siguiente posición
                            matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;

                            matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 4;
                            matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 4;

                            intervalocolumnas -= 12; intervalofilas += 8;
                        }
                        else if (direccionj1 == 2)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;

                            matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 4;
                            matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 4;

                            intervalocolumnas += 12; intervalofilas += 8;
                        }

                    }//comprueba si solo se puede a la izquierda
                    else if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 4 && (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 - 6 + intervalocolumnas] == 5 || (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 - 6 + intervalocolumnas] == 8)) && matriz8x8[ubicacionfila1 + 8 + intervalofilas][ubicacioncolumnas4 - 12 + intervalocolumnas] == 1)
                    {
                        Console::SetCursorPosition(75, 8); cout << "se come la ficha de la izquierda ";

                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;


                        matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;

                        matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 4;
                        matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 4;

                        intervalocolumnas -= 12; intervalofilas += 8;

                    }//comprueba si solo se puede a la derecha
                    else if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 4 && (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 + 6 + intervalocolumnas] == 5 || (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 + 6 + intervalocolumnas] == 8)) && matriz8x8[ubicacionfila1 + 8 + intervalofilas][ubicacioncolumnas4 + 12 + intervalocolumnas] == 1)
                    {
                        Console::SetCursorPosition(75, 8); cout << "se come la ficha de la derecha ";

                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;


                        matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;

                        matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 4;
                        matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 4;

                        intervalocolumnas += 12; intervalofilas += 8;
                    }
                    else
                    {
                        //reinicia los intervalos luego de terminar la cadena y rompe el ciclo para pasar al siguiente turno
                        intervalocolumnas = 0; intervalofilas = 0;
                        break;
                    }

                }

                //el real convertidor de reinas
                if (matriz8x8[30][3] == 4 || matriz8x8[30][15] == 4 || matriz8x8[30][27] == 4 || matriz8x8[30][39] == 4)
                {
                    intervalo_de_columnas_analizador_de_reinas = 3;
                    while (intervalo_de_columnas_analizador_de_reinas <= 39)
                    {
                        if (matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] == 4)
                        {
                            Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                            matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 1] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 2] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                            matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                        }
                        intervalo_de_columnas_analizador_de_reinas += 12;
                    }
                }
            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 4 && (matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 5 || matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 8) && matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas4 + 12] == 1)
            {
                Console::SetCursorPosition(75, 8); cout << "se come la ficha de la derecha ";

                matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;


                matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 + 6] = 1;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] = 1;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] = 1;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] = 1;
                matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas1 + 6] = 1;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas2 + 6] = 1;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas3 + 6] = 1;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas4 + 6] = 1;

                matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas1 + 12] = 4;  matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas2 + 12] = 4;  matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas3 + 12] = 4;  matriz8x8[ubicacionfila1 + 8][ubicacioncolumnas4 + 12] = 4;
                matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas1 + 12] = 4;  matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas2 + 12] = 4;  matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas3 + 12] = 4;  matriz8x8[ubicacionfila2 + 8][ubicacioncolumnas4 + 12] = 4;

                intervalocolumnas += 12;  intervalofilas += 8;
                //El real ciclo de comer en cadena by Fabrizio
                while (true)
                {
                    _sleep(2000);
                    graficar_filas_y_columnas8x8();
                    graficar_tablero(color_de_ficha_j1, color_de_ficha_j2);

                    //comprueba si la nueva ubicación tiene otra opcion para comer en ambos lados
                    if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 4 && (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 - 6 + intervalocolumnas] == 5 || matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 - 6 + intervalocolumnas] == 8) && (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 + 6 + intervalocolumnas] == 5 || matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 + 6 + intervalocolumnas] == 8) && matriz8x8[ubicacionfila1 + 8 + intervalofilas][ubicacioncolumnas4 - 12 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + 8 + intervalofilas][ubicacioncolumnas4 + 12 + intervalocolumnas] == 1)
                    {
                        do
                        {
                            Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                            Console::SetCursorPosition(75, 8); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                            if (direccionj1 < 1 || direccionj1>2)
                            {
                                Console::SetCursorPosition(75, 10); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 12); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                                system("pause>0");
                                //borrar

                                Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                                Console::SetCursorPosition(75, 10); cout << "                           ";
                                Console::SetCursorPosition(75, 12); cout << "                                                                                              ";
                            }

                        } while (direccionj1 < 1 || direccionj1>2);

                        //borra ficha
                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                        if (direccionj1 == 1)
                        {
                            //come ficha y se mueve a la siguiente posición
                            matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;

                            matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 4;
                            matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 4;

                            intervalocolumnas -= 12; intervalofilas += 8;
                        }
                        else if (direccionj1 == 2)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;

                            matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 4;
                            matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 4;

                            intervalocolumnas += 12; intervalofilas += 8;
                        }

                    }//comprueba si solo se puede a la izquierda
                    else if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 4 && (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 - 6 + intervalocolumnas] == 5 || (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 - 6 + intervalocolumnas] == 8)) && matriz8x8[ubicacionfila1 + 8 + intervalofilas][ubicacioncolumnas4 - 12 + intervalocolumnas] == 1)
                    {
                        Console::SetCursorPosition(75, 8); cout << "se come la ficha de la izquierda ";

                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;


                        matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;

                        matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 4;
                        matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 4;

                        intervalocolumnas -= 12; intervalofilas += 8;

                    }//comprueba si solo se puede a la derecha
                    else if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 4 && (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 + 6 + intervalocolumnas] == 5 || (matriz8x8[ubicacionfila1 + 4 + intervalofilas][ubicacioncolumnas4 + 6 + intervalocolumnas] == 8)) && matriz8x8[ubicacionfila1 + 8 + intervalofilas][ubicacioncolumnas4 + 12 + intervalocolumnas] == 1)
                    {
                        Console::SetCursorPosition(75, 8); cout << "se come la ficha de la derecha ";

                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1;  matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;


                        matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas + 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;

                        matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila1 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 4;
                        matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 4;  matriz8x8[ubicacionfila2 + intervalofilas + 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 4;

                        intervalocolumnas += 12; intervalofilas += 8;
                    }
                    else
                    {
                        //reinicia los intervalos luego de terminar la cadena y rompe el ciclo para pasar al siguiente turno
                        intervalocolumnas = 0; intervalofilas = 0;
                        break;
                    }

                }
                //el real convertidor de reinas
                if (matriz8x8[30][3] == 4 || matriz8x8[30][15] == 4 || matriz8x8[30][27] == 4 || matriz8x8[30][39] == 4)
                {
                    intervalo_de_columnas_analizador_de_reinas = 3;
                    while (intervalo_de_columnas_analizador_de_reinas <= 39)
                    {
                        if (matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] == 4)
                        {
                            Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                            matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 1] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 2] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                            matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                        }
                        intervalo_de_columnas_analizador_de_reinas += 12;
                    }
                }
            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 4 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 1)
            {
                Console::SetCursorPosition(75, 8); cout << "movemos la ficha a la izquierda ";

                matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 - 6] = 4;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 - 6] = 4;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 - 6] = 4;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] = 4;
                matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas1 - 6] = 4;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas2 - 6] = 4;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas3 - 6] = 4;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas4 - 6] = 4;

                //el real convertidor de reinas
                if (matriz8x8[30][3] == 4 || matriz8x8[30][15] == 4 || matriz8x8[30][27] == 4 || matriz8x8[30][39] == 4)
                {
                    intervalo_de_columnas_analizador_de_reinas = 3;
                    while (intervalo_de_columnas_analizador_de_reinas <= 39)
                    {
                        if (matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] == 4)
                        {
                            Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                            matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 1] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 2] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                            matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                        }
                        intervalo_de_columnas_analizador_de_reinas += 12;
                    }
                }
            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 4 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] == 1)
            {
                Console::SetCursorPosition(75, 8); cout << "movemos la ficha a la derecha ";

                matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 + 6] = 4;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] = 4;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] = 4;  matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] = 4;
                matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas1 + 6] = 4;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas2 + 6] = 4;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas3 + 6] = 4;  matriz8x8[ubicacionfila2 + 4][ubicacioncolumnas4 + 6] = 4;

                //el real convertidor de reinas
                if (matriz8x8[30][3] == 4 || matriz8x8[30][15] == 4 || matriz8x8[30][27] == 4 || matriz8x8[30][39] == 4)
                {
                    intervalo_de_columnas_analizador_de_reinas = 3;
                    while (intervalo_de_columnas_analizador_de_reinas <= 39)
                    {
                        if (matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] == 4)
                        {
                            Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                            matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 1] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 2] = 7;  matriz8x8[ubicacion1_fila1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                            matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas] = 7;  matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 7; matriz8x8[ubicacion1_fila1 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 7;
                        }
                        intervalo_de_columnas_analizador_de_reinas += 12;
                    }
                }
            }
            //movimiento de la reina
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && (matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 1 || matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] == 1) && (matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 1 || matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] == 1)) //comprueba que la reina tenga opcion de moviento arriba y abajo
            {
                do
                {
                    Console::SetCursorPosition(75, 8); cout << "Ingresa la direccion 1: arriba; 2: abajo: "; cin >> direccion2;
                    if (direccion2 < 1 || direccion2>2)
                    {
                        Console::SetCursorPosition(75, 10); cout << "Dato invalido";
                        Console::SetCursorPosition(75, 12); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                        system("pause>0");
                        //borrar

                        Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                        Console::SetCursorPosition(75, 10); cout << "                           ";
                        Console::SetCursorPosition(75, 12); cout << "                                                                                              ";
                    }

                } while (direccion2 < 1 || direccion2>2);

                if (direccion2 == 1)//la reina se movera hacia arriba
                {
                    intervalofilas -= 4;

                    if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] == 1)//comprueba que la derecha y la izquierda tengan por lo menos una casilla libre
                    {
                        do
                        {
                            Console::SetCursorPosition(75, 10); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                            if (direccionj1 < 1 || direccionj1>2)
                            {
                                Console::SetCursorPosition(75, 12); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 14); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                                system("pause>0");
                                //borrar

                                Console::SetCursorPosition(75, 10); cout << "                                                                         ";
                                Console::SetCursorPosition(75, 12); cout << "                           ";
                                Console::SetCursorPosition(75, 14); cout << "                                                                                              ";
                            }

                        } while (direccionj1 < 1 || direccionj1>2);
                        //borra la ubicación actual de la reina
                        matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                        matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                        if (direccionj1 == 1)//arriba y y izquierda
                        {
                            intervalocolumnas -= 6;

                            while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                            {
                                identificador_de_casillas_libres++;
                                intervalofilas -= 4;
                                intervalocolumnas -= 6;

                            }
                            //se reinicia el intervalo para empezar a mover la ficha
                            intervalofilas = -4;
                            intervalocolumnas = -6;

                            do
                            {
                                Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                                if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                                {
                                    Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                    Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                    Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                    system("pause>0");
                                    //borrar
                                    Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                    Console::SetCursorPosition(75, 14); cout << "               ";
                                    Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                    Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                                }

                            } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                            while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                            {
                                matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                                matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                                if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                                matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                                matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                                contador_de_casillas++; intervalofilas -= 4; intervalocolumnas -= 6;
                            }

                        }
                        else if (direccionj1 == 2)//arriba y derecha
                        {
                            intervalocolumnas += 6;

                            while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                            {
                                identificador_de_casillas_libres++;
                                intervalofilas -= 4;
                                intervalocolumnas += 6;

                            }
                            //se reinicia el intervalo para empezar a mover la ficha
                            intervalofilas = -4;
                            intervalocolumnas = 6;

                            do
                            {
                                Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                                if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                                {
                                    Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                    Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                    Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                    system("pause>0");
                                    //borrar
                                    Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                    Console::SetCursorPosition(75, 14); cout << "               ";
                                    Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                    Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                                }

                            } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                            while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                            {
                                matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                                matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                                if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                                matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                                matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                                contador_de_casillas++; intervalofilas -= 4; intervalocolumnas += 6;
                            }
                        }
                    }
                    else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 - 6] == 1)// comprueba que la izquierda este libre
                    {

                        //borra la ubicación actual de la reina
                        matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                        matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                        intervalocolumnas -= 6;

                        while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                        {
                            identificador_de_casillas_libres++;
                            intervalofilas -= 4;
                            intervalocolumnas -= 6;

                        }
                        //se reinicia el intervalo para empezar a mover la ficha
                        intervalofilas = -4;
                        intervalocolumnas = -6;

                        do
                        {
                            Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                            if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                            {
                                Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                system("pause>0");
                                //borrar
                                Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                Console::SetCursorPosition(75, 14); cout << "               ";
                                Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                            }

                        } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                        while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                            if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                            contador_de_casillas++; intervalofilas -= 4; intervalocolumnas -= 6;
                        }
                    }
                    else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 + 6] == 1)//comprueba que la derecha tenga libre por lo menos una casilla 
                    {
                        //borra la ubicación actual de la reina
                        matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                        matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                        intervalocolumnas += 6;

                        while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                        {
                            identificador_de_casillas_libres++;
                            intervalofilas -= 4;
                            intervalocolumnas += 6;

                        }
                        //se reinicia el intervalo para empezar a mover la ficha
                        intervalofilas = -4;
                        intervalocolumnas = 6;

                        do
                        {
                            Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                            if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                            {
                                Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                system("pause>0");
                                //borrar
                                Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                Console::SetCursorPosition(75, 14); cout << "               ";
                                Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                            }

                        } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                        while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                            if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                            contador_de_casillas++; intervalofilas -= 4; intervalocolumnas += 6;
                        }
                    }
                    //se reinicia nuevamente el intervalo para el siguiente turno
                    identificador_de_casillas_libres = 0; intervalofilas = 0; intervalocolumnas = 0; contador_de_casillas = 1;
                }
                else if (direccion2 == 2)// la reina se movera hacia abajo
                {
                    intervalofilas += 4;

                    if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] == 1)
                    {
                        do
                        {
                            Console::SetCursorPosition(75, 10); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                            if (direccionj1 < 1 || direccionj1>2)
                            {
                                Console::SetCursorPosition(75, 12); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 14); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                                system("pause>0");
                                //borrar

                                Console::SetCursorPosition(75, 10); cout << "                                                                         ";
                                Console::SetCursorPosition(75, 12); cout << "                           ";
                                Console::SetCursorPosition(75, 14); cout << "                                                                                              ";
                            }

                        } while (direccionj1 < 1 || direccionj1>2);

                        matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                        matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                        if (direccionj1 == 1)
                        {
                            intervalocolumnas -= 6;

                            while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                            {
                                identificador_de_casillas_libres++;
                                intervalofilas += 4;
                                intervalocolumnas -= 6;

                            }

                            //se reinicia el intervalo para empezar a mover la ficha
                            intervalofilas = 4;
                            intervalocolumnas = -6;

                            do
                            {
                                Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                                if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                                {
                                    Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                    Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                    Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                    system("pause>0");
                                    //borrar
                                    Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                    Console::SetCursorPosition(75, 14); cout << "               ";
                                    Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                    Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                                }

                            } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                            while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                            {
                                matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                                matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                                if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                                matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                                matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                                contador_de_casillas++; intervalofilas += 4; intervalocolumnas -= 6;
                            }

                        }
                        else if (direccionj1 == 2)
                        {
                            intervalocolumnas += 6;

                            while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                            {
                                identificador_de_casillas_libres++;
                                intervalofilas += 4;
                                intervalocolumnas += 6;

                            }

                            //se reinicia el intervalo para empezar a mover la ficha
                            intervalofilas = 4;
                            intervalocolumnas = 6;

                            do
                            {
                                Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                                if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                                {
                                    Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                    Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                    Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                    system("pause>0");
                                    //borrar
                                    Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                    Console::SetCursorPosition(75, 14); cout << "               ";
                                    Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                    Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                                }

                            } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                            while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                            {
                                matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                                matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                                if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                                matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                                matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                                contador_de_casillas++; intervalofilas += 4; intervalocolumnas += 6;
                            }
                        }



                    }
                    else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 - 6] == 1)//comprueba solo izquierda libre y abajo
                    {
                        //borra la ubicación actual de la reina
                        matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                        matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                        intervalocolumnas -= 6;

                        while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                        {
                            identificador_de_casillas_libres++;
                            intervalofilas += 4;
                            intervalocolumnas -= 6;

                        }

                        //se reinicia el intervalo para empezar a mover la ficha
                        intervalofilas = 4;
                        intervalocolumnas = -6;

                        do
                        {
                            Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                            if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                            {
                                Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                system("pause>0");
                                //borrar
                                Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                Console::SetCursorPosition(75, 14); cout << "               ";
                                Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                            }

                        } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                        while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                            if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                            contador_de_casillas++; intervalofilas += 4; intervalocolumnas -= 6;
                        }
                    }
                    else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 + 6] == 1)// comprueba solo la derecha hacia abajo
                    {
                        //borra la ubicación actual de la reina
                        matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                        matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                        intervalocolumnas += 6;

                        while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                        {
                            identificador_de_casillas_libres++;
                            intervalofilas += 4;
                            intervalocolumnas += 6;
                        }

                        //se reinicia el intervalo para empezar a mover la ficha
                        intervalofilas = 4;
                        intervalocolumnas = 6;

                        do
                        {
                            Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                            if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                            {
                                Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                system("pause>0");
                                //borrar
                                Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                Console::SetCursorPosition(75, 14); cout << "               ";
                                Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                            }

                        } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                        while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                            if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                            contador_de_casillas++; intervalofilas += 4; intervalocolumnas += 6;
                        }
                    }
                    //se reinicia nuevamente el intervalo para el siguiente turno
                    identificador_de_casillas_libres = 0; intervalofilas = 0; intervalocolumnas = 0; contador_de_casillas = 1;
                }
            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && ((matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 - 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6]) == 1 || (matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1)))//comprueba que tenga al menos libre la parte de abajo en una casilla
            {

                intervalofilas += 4;


                if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] == 1)
                {
                    do
                    {
                        Console::SetCursorPosition(75, 10); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                        if (direccionj1 < 1 || direccionj1>2)
                        {
                            Console::SetCursorPosition(75, 12); cout << "Dato invalido";
                            Console::SetCursorPosition(75, 14); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                            system("pause>0");
                            //borrar

                            Console::SetCursorPosition(75, 10); cout << "                                                                         ";
                            Console::SetCursorPosition(75, 12); cout << "                           ";
                            Console::SetCursorPosition(75, 14); cout << "                                                                                              ";
                        }

                    } while (direccionj1 < 1 || direccionj1>2);

                    matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                    matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                    if (direccionj1 == 1)
                    {
                        intervalocolumnas -= 6;

                        while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                        {
                            identificador_de_casillas_libres++;
                            intervalofilas += 4;
                            intervalocolumnas -= 6;

                        }

                        //se reinicia el intervalo para empezar a mover la ficha
                        intervalofilas = 4;
                        intervalocolumnas = -6;

                        do
                        {
                            Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                            if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                            {
                                Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                system("pause>0");
                                //borrar
                                Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                Console::SetCursorPosition(75, 14); cout << "               ";
                                Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                            }

                        } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                        while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                            if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                            contador_de_casillas++; intervalofilas += 4; intervalocolumnas -= 6;
                        }

                    }
                    else if (direccionj1 == 2)
                    {
                        intervalocolumnas += 6;

                        while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                        {
                            identificador_de_casillas_libres++;
                            intervalofilas += 4;
                            intervalocolumnas += 6;

                        }

                        //se reinicia el intervalo para empezar a mover la ficha
                        intervalofilas = 4;
                        intervalocolumnas = +6;

                        do
                        {
                            Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                            if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                            {
                                Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                system("pause>0");
                                //borrar
                                Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                Console::SetCursorPosition(75, 14); cout << "               ";
                                Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                            }

                        } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                        while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                            if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                            contador_de_casillas++; intervalofilas += 4; intervalocolumnas += 6;
                        }
                    }


                }
                else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 1)//solo izquierda
                {
                    matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                    matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                    intervalocolumnas -= 6;

                    while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                    {
                        identificador_de_casillas_libres++;
                        intervalofilas += 4;
                        intervalocolumnas -= 6;

                    }

                    //se reinicia el intervalo para empezar a mover la ficha
                    intervalofilas = 4;
                    intervalocolumnas = -6;

                    do
                    {
                        Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                        if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                        {
                            Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                            Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                            Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                            system("pause>0");
                            //borrar
                            Console::SetCursorPosition(75, 12); cout << "                                                     ";
                            Console::SetCursorPosition(75, 14); cout << "               ";
                            Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                            Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                        }

                    } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                    while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                    {
                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                        if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                        contador_de_casillas++; intervalofilas += 4; intervalocolumnas -= 6;
                    }

                }
                else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] == 1)//solo derecha
                {

                    matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                    matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                    intervalocolumnas += 6;

                    while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                    {
                        identificador_de_casillas_libres++;
                        intervalofilas += 4;
                        intervalocolumnas += 6;

                    }

                    //se reinicia el intervalo para empezar a mover la ficha
                    intervalofilas = 4;
                    intervalocolumnas = +6;

                    do
                    {
                        Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                        if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                        {
                            Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                            Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                            Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                            system("pause>0");
                            //borrar
                            Console::SetCursorPosition(75, 12); cout << "                                                     ";
                            Console::SetCursorPosition(75, 14); cout << "               ";
                            Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                            Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                        }

                    } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                    while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                    {
                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                        if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                        contador_de_casillas++; intervalofilas += 4; intervalocolumnas += 6;
                    }
                }
                //se reinicia nuevamente el intervalo para el siguiente turno
                identificador_de_casillas_libres = 0; intervalofilas = 0; intervalocolumnas = 0; contador_de_casillas = 1;
            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && (matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 + 6] == 1 || matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 - 6] == 1)) //comprueba que la reina se pueda mover solo arriba por lo menos en una casilla
            {

                intervalofilas -= 4;

                if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] == 1)//comprueba que la derecha y la izquierda tengan por lo menos una casilla libre
                {
                    do
                    {
                        Console::SetCursorPosition(75, 10); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                        if (direccionj1 < 1 || direccionj1>2)
                        {
                            Console::SetCursorPosition(75, 12); cout << "Dato invalido";
                            Console::SetCursorPosition(75, 14); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                            system("pause>0");
                            //borrar

                            Console::SetCursorPosition(75, 10); cout << "                                                                         ";
                            Console::SetCursorPosition(75, 12); cout << "                           ";
                            Console::SetCursorPosition(75, 14); cout << "                                                                                              ";
                        }

                    } while (direccionj1 < 1 || direccionj1>2);
                    //borra la ubicación actual de la reina
                    matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                    matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                    if (direccionj1 == 1)//arriba y y izquierda
                    {
                        intervalocolumnas -= 6;

                        while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                        {
                            identificador_de_casillas_libres++;
                            intervalofilas -= 4;
                            intervalocolumnas -= 6;

                        }
                        //se reinicia el intervalo para empezar a mover la ficha
                        intervalofilas = -4;
                        intervalocolumnas = -6;

                        do
                        {
                            Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                            if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                            {
                                Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                system("pause>0");
                                //borrar
                                Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                Console::SetCursorPosition(75, 14); cout << "               ";
                                Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                            }

                        } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                        while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                            if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                            contador_de_casillas++; intervalofilas -= 4; intervalocolumnas -= 6;
                        }

                    }
                    else if (direccionj1 == 2)//arriba y derecha
                    {
                        intervalocolumnas += 6;

                        while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                        {
                            identificador_de_casillas_libres++;
                            intervalofilas -= 4;
                            intervalocolumnas += 6;

                        }
                        //se reinicia el intervalo para empezar a mover la ficha
                        intervalofilas = -4;
                        intervalocolumnas = 6;

                        do
                        {
                            Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                            if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                            {
                                Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                system("pause>0");
                                //borrar
                                Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                Console::SetCursorPosition(75, 14); cout << "               ";
                                Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                            }

                        } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                        while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                            if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                            matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                            contador_de_casillas++; intervalofilas -= 4; intervalocolumnas += 6;
                        }
                    }
                }

                else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 - 6] == 1)// comprueba que la izquierda este libre
                {

                    //borra la ubicación actual de la reina
                    matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                    matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                    intervalocolumnas -= 6;

                    while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                    {
                        identificador_de_casillas_libres++;
                        intervalofilas -= 4;
                        intervalocolumnas -= 6;

                    }
                    //se reinicia el intervalo para empezar a mover la ficha
                    intervalofilas = -4;
                    intervalocolumnas = -6;

                    do
                    {
                        Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                        if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                        {
                            Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                            Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                            Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                            system("pause>0");
                            //borrar
                            Console::SetCursorPosition(75, 12); cout << "                                                     ";
                            Console::SetCursorPosition(75, 14); cout << "               ";
                            Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                            Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                        }

                    } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                    while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                    {
                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                        if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                        contador_de_casillas++; intervalofilas -= 4; intervalocolumnas -= 6;
                    }
                }
                else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 7 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] == 1)
                {
                     cout;
                     //borra la ubicación actual de la reina
                     matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                     matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                     intervalocolumnas += 6;

                     while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                     {
                         identificador_de_casillas_libres++;
                         intervalofilas -= 4;
                         intervalocolumnas += 6;

                     }
                     //se reinicia el intervalo para empezar a mover la ficha
                     intervalofilas = -4;
                     intervalocolumnas = 6;

                     do
                     {
                         Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                         if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                         {
                             Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                             Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                             Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                             system("pause>0");
                             //borrar
                             Console::SetCursorPosition(75, 12); cout << "                                                     ";
                             Console::SetCursorPosition(75, 14); cout << "               ";
                             Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                             Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                         }

                     } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                     while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                     {
                         matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;
                         matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 7; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 7;

                         if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                         matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                         matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                         contador_de_casillas++; intervalofilas -= 4; intervalocolumnas += 6;
                     }

                }

                //se reinicia nuevamente el intervalo para el siguiente turno
                identificador_de_casillas_libres = 0; intervalofilas = 0; intervalocolumnas = 0; contador_de_casillas = 1;
            }
            else
            {
                Console::SetCursorPosition(75, 10);
                cout << "Haz ingresado una ficha que no se puede mover o directamente una no existente";
                Console::SetCursorPosition(75, 12);
                cout << "Presiona cualquier tecla para volver a elegir una ficha";
                system("pause>0");
                if (turno == 1)
                {
                    turno = 2;
                }
                else if (turno == 2)
                {
                    turno = 1;
                }
                contador_de_movimientosj1--;
            }
            contador_de_movimientosj1++;
        }
        else if ((turno == 1 && tiro_dado_J1 < tiro_Dado_j2) || (turno == 2 && tiro_Dado_j2 < tiro_dado_J1))
        {
            if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 5 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] == 1)
            {
                do
                {
                    Console::SetCursorPosition(75, 8); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                    if (direccionj1 < 1 || direccionj1>2)
                    {
                        Console::SetCursorPosition(75, 10); cout << "Dato invalido";
                        Console::SetCursorPosition(75, 12); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                        system("pause>0");
                        //borrar

                        Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                        Console::SetCursorPosition(75, 10); cout << "                           ";
                        Console::SetCursorPosition(75, 12); cout << "                                                                                              ";
                    }

                } while (direccionj1 < 1 || direccionj1 > 2);

                if (direccionj1 == 2)
                {
                    matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                    matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                    matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 + 6] = 5;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] = 5;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] = 5;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] = 5;
                    matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas1 + 6] = 5;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas2 + 6] = 5;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas3 + 6] = 5;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas4 + 6] = 5;

                    //el real convertidor de reinas
                    if (matriz8x8[ubicacion1_fila8][9] == 5 || matriz8x8[ubicacion1_fila8][21] == 5 || matriz8x8[ubicacion1_fila8][33] == 5 || matriz8x8[ubicacion1_fila8][45] == 5)
                    {
                        intervalo_de_columnas_analizador_de_reinas = 9;
                        while (intervalo_de_columnas_analizador_de_reinas <= 45)
                        {
                            if (matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] == 5)
                            {
                                Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                                matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 1] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 2] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                                matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                            }
                            intervalo_de_columnas_analizador_de_reinas += 12;
                        }
                    }
                }
                else if (direccionj1 == 1)
                {
                    matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                    matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                    matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 - 6] = 5;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 - 6] = 5;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 - 6] = 5;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] = 5;
                    matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas1 - 6] = 5;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas2 - 6] = 5;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas3 - 6] = 5;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas4 - 6] = 5;

                    //el real convertidor de reinas
                    if (matriz8x8[ubicacion1_fila8][9] == 5 || matriz8x8[ubicacion1_fila8][21] == 5 || matriz8x8[ubicacion1_fila8][33] == 5 || matriz8x8[ubicacion1_fila8][45] == 5)
                    {
                        intervalo_de_columnas_analizador_de_reinas = 9;
                        while (intervalo_de_columnas_analizador_de_reinas <= 45)
                        {
                            if (matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] == 5)
                            {
                                Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                                matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 1] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 2] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                                matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                            }
                            intervalo_de_columnas_analizador_de_reinas += 12;
                        }
                    }
                }

            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 5 && (matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 4 || (matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 7)) && (matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 4 || matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 7) && matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas4 - 12] == 1 && matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas4 + 12] == 1)
            {//acá empieza la mecanica de comer fichas
                do
                {
                    Console::SetCursorPosition(75, 8); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                    if (direccionj1 < 1 || direccionj1>2)
                    {
                        Console::SetCursorPosition(75, 10); cout << "Dato invalido";
                        Console::SetCursorPosition(75, 12); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                        system("pause>0");
                        //borrar

                        Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                        Console::SetCursorPosition(75, 10); cout << "                           ";
                        Console::SetCursorPosition(75, 12); cout << "                                                                                              ";
                    }

                } while (direccionj1 < 1 || direccionj1>2);

                matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                if (direccionj1 == 1)
                {
                    matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 - 6] = 1;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 - 6] = 1;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 - 6] = 1;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] = 1;
                    matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas1 - 6] = 1;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas2 - 6] = 1;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas3 - 6] = 1;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas4 - 6] = 1;

                    matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas1 - 12] = 5;  matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas2 - 12] = 5;  matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas3 - 12] = 5;  matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas4 - 12] = 5;
                    matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas1 - 12] = 5;  matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas2 - 12] = 5;  matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas3 - 12] = 5;  matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas4 - 12] = 5;

                    intervalocolumnas -= 12; intervalofilas -= 8;
                }
                else if (direccionj1 == 2)
                {
                    matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 + 6] = 1;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] = 1;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] = 1;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] = 1;
                    matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas1 + 6] = 1;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas2 + 6] = 1;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas3 + 6] = 1;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas4 + 6] = 1;

                    matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas1 + 12] = 5;  matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas2 + 12] = 5;  matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas3 + 12] = 5;  matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas4 + 12] = 5;
                    matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas1 + 12] = 5;  matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas2 + 12] = 5;  matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas3 + 12] = 5;  matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas4 + 12] = 5;

                    intervalocolumnas += 12; intervalofilas -= 8;
                }
                //El real ciclo de comer en cadena by Fabrizio
                while (true)
                {
                    _sleep(2000);
                    graficar_filas_y_columnas8x8();
                    graficar_tablero(color_de_ficha_j1, color_de_ficha_j2);

                    if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 5 && (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] == 4 || (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] == 7)) && (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] == 4 || (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] == 7)) && matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] == 1 && matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] == 1)
                    {
                        do
                        {
                            Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                            Console::SetCursorPosition(75, 8); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                            if (direccionj1 < 1 || direccionj1>2)
                            {
                                Console::SetCursorPosition(75, 10); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 12); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                                system("pause>0");
                                //borrar

                                Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                                Console::SetCursorPosition(75, 10); cout << "                           ";
                                Console::SetCursorPosition(75, 12); cout << "                                                                                              ";
                            }

                        } while (direccionj1 < 1 || direccionj1>2);

                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                        if (direccionj1 == 1)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;

                            matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 5;
                            matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 5;

                            intervalocolumnas -= 12; intervalofilas -= 8;
                        }
                        else if (direccionj1 == 2)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;

                            matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 5;
                            matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 5;

                            intervalocolumnas += 12; intervalofilas -= 8;
                        }

                    }
                    else if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 5 && (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] == 4 || (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] == 7)) && matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] == 1)
                    {
                        Console::SetCursorPosition(75, 8); cout << "se come la ficha de la izquierda ";

                        matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;

                        matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 5;
                        matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 5;

                        intervalocolumnas -= 12; intervalofilas -= 8;
                    }
                    else if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 5 && (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] == 4 || matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] == 7) && matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] == 1)
                    {
                        Console::SetCursorPosition(75, 8); cout << "se come la ficha de la derecha ";

                        matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;

                        matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 5;
                        matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 5;

                        intervalocolumnas += 12; intervalofilas -= 8;
                    }
                    else
                    {
                        intervalocolumnas = 0; intervalofilas = 0;
                        break;
                    }
                }

                //el real convertidor de reinas
                if (matriz8x8[ubicacion1_fila8][9] == 5 || matriz8x8[ubicacion1_fila8][21] == 5 || matriz8x8[ubicacion1_fila8][33] == 5 || matriz8x8[ubicacion1_fila8][45] == 5)
                {
                    intervalo_de_columnas_analizador_de_reinas = 9;
                    while (intervalo_de_columnas_analizador_de_reinas <= 45)
                    {
                        if (matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] == 5)
                        {
                            Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                            matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 1] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 2] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                            matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                        }
                        intervalo_de_columnas_analizador_de_reinas += 12;
                    }
                }
            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 5 && (matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 4 || matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 7) && matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas4 - 12] == 1)
            {
                Console::SetCursorPosition(75, 8); cout << "se come la ficha de la izquierda ";

                matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;


                matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 - 6] = 1;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 - 6] = 1;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 - 6] = 1;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] = 1;
                matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas1 - 6] = 1;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas2 - 6] = 1;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas3 - 6] = 1;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas4 - 6] = 1;

                matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas1 - 12] = 5;  matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas2 - 12] = 5;  matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas3 - 12] = 5;  matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas4 - 12] = 5;
                matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas1 - 12] = 5;  matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas2 - 12] = 5;  matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas3 - 12] = 5;  matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas4 - 12] = 5;

                intervalocolumnas -= 12; intervalofilas -= 8;
                //El real ciclo de comer en cadena by Fabrizio
                while (true)
                {
                    _sleep(2000);
                    graficar_filas_y_columnas8x8();
                    graficar_tablero(color_de_ficha_j1, color_de_ficha_j2);

                    if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 5 && (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] == 4 || (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] == 7)) && (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] == 4 || (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] == 7)) && matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] == 1 && matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] == 1)
                    {
                        do
                        {
                            Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                            Console::SetCursorPosition(75, 8); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                            if (direccionj1 < 1 || direccionj1>2)
                            {
                                Console::SetCursorPosition(75, 10); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 12); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                                system("pause>0");
                                //borrar

                                Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                                Console::SetCursorPosition(75, 10); cout << "                           ";
                                Console::SetCursorPosition(75, 12); cout << "                                                                                              ";
                            }

                        } while (direccionj1 < 1 || direccionj1>2);

                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                        if (direccionj1 == 1)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;

                            matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 5;
                            matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 5;

                            intervalocolumnas -= 12; intervalofilas -= 8;
                        }
                        else if (direccionj1 == 2)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;

                            matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 5;
                            matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 5;

                            intervalocolumnas += 12; intervalofilas -= 8;
                        }

                    }
                    else if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 5 && (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] == 4 || (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] == 7)) && matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] == 1)
                    {
                        Console::SetCursorPosition(75, 8); cout << "se come la ficha de la izquierda ";

                        matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;

                        matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 5;
                        matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 5;

                        intervalocolumnas -= 12; intervalofilas -= 8;
                    }
                    else if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 5 && (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] == 4 || matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] == 7) && matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] == 1)
                    {
                        Console::SetCursorPosition(75, 8); cout << "se come la ficha de la derecha ";

                        matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;

                        matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 5;
                        matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 5;

                        intervalocolumnas += 12; intervalofilas -= 8;
                    }
                    else
                    {
                        intervalocolumnas = 0; intervalofilas = 0;
                        break;
                    }
                }

                //el real convertidor de reinas
                if (matriz8x8[ubicacion1_fila8][9] == 5 || matriz8x8[ubicacion1_fila8][21] == 5 || matriz8x8[ubicacion1_fila8][33] == 5 || matriz8x8[ubicacion1_fila8][45] == 5)
                {
                    intervalo_de_columnas_analizador_de_reinas = 9;
                    while (intervalo_de_columnas_analizador_de_reinas <= 45)
                    {
                        if (matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] == 5)
                        {
                            Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                            matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 1] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 2] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                            matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                        }
                        intervalo_de_columnas_analizador_de_reinas += 12;
                    }
                }
            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 5 && (matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 4 || (matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 7)) && matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas4 + 12] == 1)
            {
                Console::SetCursorPosition(75, 8); cout << "se come la ficha de la derecha ";

                matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;


                matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 + 6] = 1;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] = 1;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] = 1;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] = 1;
                matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas1 + 6] = 1;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas2 + 6] = 1;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas3 + 6] = 1;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas4 + 6] = 1;

                matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas1 + 12] = 5;  matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas2 + 12] = 5;  matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas3 + 12] = 5;  matriz8x8[ubicacionfila1 - 8][ubicacioncolumnas4 + 12] = 5;
                matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas1 + 12] = 5;  matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas2 + 12] = 5;  matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas3 + 12] = 5;  matriz8x8[ubicacionfila2 - 8][ubicacioncolumnas4 + 12] = 5;

                intervalocolumnas += 12; intervalofilas -= 8;
                //El real ciclo de comer en cadena by Fabrizio
                while (true)
                {
                    _sleep(2000);
                    graficar_filas_y_columnas8x8();
                    graficar_tablero(color_de_ficha_j1, color_de_ficha_j2);

                    if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 5 && (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] == 4 || (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] == 7)) && (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] == 4 || (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] == 7)) && matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] == 1 && matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] == 1)
                    {
                        do
                        {
                            Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                            Console::SetCursorPosition(75, 8); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                            if (direccionj1 < 1 || direccionj1>2)
                            {
                                Console::SetCursorPosition(75, 10); cout << "Dato invalido";
                                Console::SetCursorPosition(75, 12); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                                system("pause>0");
                                //borrar

                                Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                                Console::SetCursorPosition(75, 10); cout << "                           ";
                                Console::SetCursorPosition(75, 12); cout << "                                                                                              ";
                            }

                        } while (direccionj1 < 1 || direccionj1>2);

                        matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                        if (direccionj1 == 1)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;

                            matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 5;
                            matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 5;

                            intervalocolumnas -= 12; intervalofilas -= 8;
                        }
                        else if (direccionj1 == 2)
                        {
                            matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;
                            matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;

                            matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 5;
                            matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 5;

                            intervalocolumnas += 12; intervalofilas -= 8;
                        }

                    }
                    else if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 5 && (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] == 4 || (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] == 7)) && matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] == 1)
                    {
                        Console::SetCursorPosition(75, 8); cout << "se come la ficha de la izquierda ";

                        matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas - 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas - 6] = 1;

                        matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 5;
                        matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas - 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas - 12] = 5;

                        intervalocolumnas -= 12; intervalofilas -= 8;
                    }
                    else if (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 5 && (matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] == 4 || matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] == 7) && matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] == 1)
                    {
                        Console::SetCursorPosition(75, 8); cout << "se come la ficha de la derecha ";

                        matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila1 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;
                        matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas1 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas2 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas3 + intervalocolumnas + 6] = 1;  matriz8x8[ubicacionfila2 + intervalofilas - 4][ubicacioncolumnas4 + intervalocolumnas + 6] = 1;

                        matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila1 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 5;
                        matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas1 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas2 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas3 + intervalocolumnas + 12] = 5;  matriz8x8[ubicacionfila2 + intervalofilas - 8][ubicacioncolumnas4 + intervalocolumnas + 12] = 5;

                        intervalocolumnas += 12; intervalofilas -= 8;
                    }
                    else
                    {
                        intervalocolumnas = 0; intervalofilas = 0;
                        break;
                    }
                }

                //el real convertidor de reinas
                if (matriz8x8[ubicacion1_fila8][9] == 5 || matriz8x8[ubicacion1_fila8][21] == 5 || matriz8x8[ubicacion1_fila8][33] == 5 || matriz8x8[ubicacion1_fila8][45] == 5)
                {
                    intervalo_de_columnas_analizador_de_reinas = 9;
                    while (intervalo_de_columnas_analizador_de_reinas <= 45)
                    {
                        if (matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] == 5)
                        {
                            Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                            matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 1] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 2] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                            matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                        }
                        intervalo_de_columnas_analizador_de_reinas += 12;
                    }
                }
            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 5 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 1)
            {
                Console::SetCursorPosition(75, 8); cout << "movemos la ficha a la izquierda ";

                matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 - 6] = 5;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 - 6] = 5;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 - 6] = 5;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] = 5;
                matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas1 - 6] = 5;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas2 - 6] = 5;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas3 - 6] = 5;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas4 - 6] = 5;

                //el real convertidor de reinas
                if (matriz8x8[ubicacion1_fila8][9] == 5 || matriz8x8[ubicacion1_fila8][21] == 5 || matriz8x8[ubicacion1_fila8][33] == 5 || matriz8x8[ubicacion1_fila8][45] == 5)
                {
                    intervalo_de_columnas_analizador_de_reinas = 9;
                    while (intervalo_de_columnas_analizador_de_reinas <= 45)
                    {
                        if (matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] == 5)
                        {
                            Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                            matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 1] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 2] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                            matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                        }
                        intervalo_de_columnas_analizador_de_reinas += 12;
                    }
                }
            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 5 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] == 1)
            {
                Console::SetCursorPosition(75, 8); cout << "movemos la ficha a la derecha ";

                matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1;  matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 + 6] = 5;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] = 5;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] = 5;  matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] = 5;
                matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas1 + 6] = 5;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas2 + 6] = 5;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas3 + 6] = 5;  matriz8x8[ubicacionfila2 - 4][ubicacioncolumnas4 + 6] = 5;

                //el real convertidor de reinas
                if (matriz8x8[ubicacion1_fila8][9] == 5 || matriz8x8[ubicacion1_fila8][21] == 5 || matriz8x8[ubicacion1_fila8][33] == 5 || matriz8x8[ubicacion1_fila8][45] == 5)
                {
                    intervalo_de_columnas_analizador_de_reinas = 9;
                    while (intervalo_de_columnas_analizador_de_reinas <= 45)
                    {
                        if (matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] == 5)
                        {
                            Console::SetCursorPosition(75, 10); cout << "¡Enhorabuena tu ficha ahora es una reina!";

                            matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 1] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 2] = 8;  matriz8x8[ubicacion1_fila8][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                            matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas] = 8;  matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 1] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 2] = 8; matriz8x8[ubicacion1_fila8 + 1][intervalo_de_columnas_analizador_de_reinas + 3] = 8;
                        }
                        intervalo_de_columnas_analizador_de_reinas += 12;
                    }
                }
            }//comienza el movimiento de reinas
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && (matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 1 || matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] == 1) && (matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 1 || matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] == 1))
            {
                 do
                 {
                     Console::SetCursorPosition(75, 8); cout << "Ingresa la direccion 1: arriba; 2: abajo: "; cin >> direccion2;
                     if (direccion2 < 1 || direccion2>2)
                     {
                         Console::SetCursorPosition(75, 10); cout << "Dato invalido";
                         Console::SetCursorPosition(75, 12); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                         system("pause>0");
                         //borrar

                         Console::SetCursorPosition(75, 8); cout << "                                                                         ";
                         Console::SetCursorPosition(75, 10); cout << "                           ";
                         Console::SetCursorPosition(75, 12); cout << "                                                                                              ";
                     }

                 } while (direccion2 < 1 || direccion2>2);

                 if (direccion2 == 1)//la reina se movera hacia arriba
                 {
                     intervalofilas -= 4;

                     if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] == 1)//comprueba que la derecha y la izquierda tengan por lo menos una casilla libre
                     {
                         do
                         {
                             Console::SetCursorPosition(75, 10); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                             if (direccionj1 < 1 || direccionj1>2)
                             {
                                 Console::SetCursorPosition(75, 12); cout << "Dato invalido";
                                 Console::SetCursorPosition(75, 14); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                                 system("pause>0");
                                 //borrar

                                 Console::SetCursorPosition(75, 10); cout << "                                                                         ";
                                 Console::SetCursorPosition(75, 12); cout << "                           ";
                                 Console::SetCursorPosition(75, 14); cout << "                                                                                              ";
                             }

                         } while (direccionj1 < 1 || direccionj1>2);
                         //borra la ubicación actual de la reina
                         matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                         matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                         if (direccionj1 == 1)//arriba y y izquierda
                         {
                             intervalocolumnas -= 6;

                             while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                             {
                                 identificador_de_casillas_libres++;
                                 intervalofilas -= 4;
                                 intervalocolumnas -= 6;

                             }
                             //se reinicia el intervalo para empezar a mover la ficha
                             intervalofilas = -4;
                             intervalocolumnas = -6;

                             do
                             {
                                 Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                                 if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                                 {
                                     Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                     Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                     Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                     system("pause>0");
                                     //borrar
                                     Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                     Console::SetCursorPosition(75, 14); cout << "               ";
                                     Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                     Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                                 }

                             } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                             while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                             {
                                 matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                                 matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                                 if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                                 matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                                 matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                                 contador_de_casillas++; intervalofilas -= 4; intervalocolumnas -= 6;
                             }

                         }
                         else if (direccionj1 == 2)//arriba y derecha
                         {
                             intervalocolumnas += 6;

                             while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                             {
                                 identificador_de_casillas_libres++;
                                 intervalofilas -= 4;
                                 intervalocolumnas += 6;

                             }
                             //se reinicia el intervalo para empezar a mover la ficha
                             intervalofilas = -4;
                             intervalocolumnas = 6;

                             do
                             {
                                 Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                                 if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                                 {
                                     Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                     Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                     Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                     system("pause>0");
                                     //borrar
                                     Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                     Console::SetCursorPosition(75, 14); cout << "               ";
                                     Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                     Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                                 }

                             } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                             while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                             {
                                 matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                                 matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                                 if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                                 matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                                 matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                                 contador_de_casillas++; intervalofilas -= 4; intervalocolumnas += 6;
                             }
                         }
                     }
                     else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 - 6] == 1)// comprueba que la izquierda este libre
                     {

                         //borra la ubicación actual de la reina
                         matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                         matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                         intervalocolumnas -= 6;

                         while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                         {
                             identificador_de_casillas_libres++;
                             intervalofilas -= 4;
                             intervalocolumnas -= 6;

                         }
                         //se reinicia el intervalo para empezar a mover la ficha
                         intervalofilas = -4;
                         intervalocolumnas = -6;

                         do
                         {
                             Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                             if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                             {
                                 Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                 Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                 Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                 system("pause>0");
                                 //borrar
                                 Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                 Console::SetCursorPosition(75, 14); cout << "               ";
                                 Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                 Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                             }

                         } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                         while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                         {                                                                                                                                                                                                                                                                                                                                                                
                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                             if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                             contador_de_casillas++; intervalofilas -= 4; intervalocolumnas -= 6;
                         }
                     }
                     else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 + 6] == 1)//comprueba que la derecha tenga libre por lo menos una casilla 
                     {
                         //borra la ubicación actual de la reina
                         matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                         matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                         intervalocolumnas += 6;

                         while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                         {
                             identificador_de_casillas_libres++;
                             intervalofilas -= 4;
                             intervalocolumnas += 6;

                         }
                         //se reinicia el intervalo para empezar a mover la ficha
                         intervalofilas = -4;
                         intervalocolumnas = 6;

                         do
                         {
                             Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                             if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                             {
                                 Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                 Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                 Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                 system("pause>0");
                                 //borrar
                                 Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                 Console::SetCursorPosition(75, 14); cout << "               ";
                                 Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                 Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                             }

                         } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                         while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                         {
                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                             if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                             contador_de_casillas++; intervalofilas -= 4; intervalocolumnas += 6;
                         }
                     }
                     //se reinicia nuevamente el intervalo para el siguiente turno
                     identificador_de_casillas_libres = 0; intervalofilas = 0; intervalocolumnas = 0; contador_de_casillas = 1;
                 }
                 else if (direccion2 == 2)// la reina se movera hacia abajo
                 {
                     intervalofilas += 4;

                     if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] == 1)
                     {
                         do
                         {
                             Console::SetCursorPosition(75, 10); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                             if (direccionj1 < 1 || direccionj1>2)
                             {
                                 Console::SetCursorPosition(75, 12); cout << "Dato invalido";
                                 Console::SetCursorPosition(75, 14); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                                 system("pause>0");
                                 //borrar

                                 Console::SetCursorPosition(75, 10); cout << "                                                                         ";
                                 Console::SetCursorPosition(75, 12); cout << "                           ";
                                 Console::SetCursorPosition(75, 14); cout << "                                                                                              ";
                             }

                         } while (direccionj1 < 1 || direccionj1>2);

                         matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                         matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                         if (direccionj1 == 1)
                         {
                             intervalocolumnas -= 6;

                             while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                             {
                                 identificador_de_casillas_libres++;
                                 intervalofilas += 4;
                                 intervalocolumnas -= 6;

                             }

                             //se reinicia el intervalo para empezar a mover la ficha
                             intervalofilas = 4;
                             intervalocolumnas = -6;

                             do
                             {
                                 Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                                 if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                                 {
                                     Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                     Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                     Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                     system("pause>0");
                                     //borrar
                                     Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                     Console::SetCursorPosition(75, 14); cout << "               ";
                                     Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                     Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                                 }

                             } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                             while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                             {
                                 matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                                 matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                                 if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                                 matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                                 matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                                 contador_de_casillas++; intervalofilas += 4; intervalocolumnas -= 6;
                             }

                         }
                         else if (direccionj1 == 2)
                         {
                             intervalocolumnas += 6;

                             while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                             {
                                 identificador_de_casillas_libres++;
                                 intervalofilas += 4;
                                 intervalocolumnas += 6;

                             }

                             //se reinicia el intervalo para empezar a mover la ficha
                             intervalofilas = 4;
                             intervalocolumnas = 6;

                             do
                             {
                                 Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                                 if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                                 {
                                     Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                     Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                     Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                     system("pause>0");
                                     //borrar
                                     Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                     Console::SetCursorPosition(75, 14); cout << "               ";
                                     Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                     Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                                 }

                             } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                             while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                             {
                                 matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                                 matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                                 if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                                 matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                                 matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                                 contador_de_casillas++; intervalofilas += 4; intervalocolumnas += 6;
                             }
                         }



                     }
                     else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 - 6] == 1)//comprueba solo izquierda libre y abajo
                     {
                         //borra la ubicación actual de la reina
                         matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                         matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                         intervalocolumnas -= 6;

                         while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                         {
                             identificador_de_casillas_libres++;
                             intervalofilas += 4;
                             intervalocolumnas -= 6;

                         }

                         //se reinicia el intervalo para empezar a mover la ficha
                         intervalofilas = 4;
                         intervalocolumnas = -6;

                         do
                         {
                             Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                             if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                             {
                                 Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                 Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                 Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                 system("pause>0");
                                 //borrar
                                 Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                 Console::SetCursorPosition(75, 14); cout << "               ";
                                 Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                 Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                             }

                         } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                         while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                         {
                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                             if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                             contador_de_casillas++; intervalofilas += 4; intervalocolumnas -= 6;
                         }
                     }
                     else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 + 6] == 1)// comprueba solo la derecha hacia abajo
                     {
                         //borra la ubicación actual de la reina
                         matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                         matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                         intervalocolumnas += 6;

                         while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                         {
                             identificador_de_casillas_libres++;
                             intervalofilas += 4;
                             intervalocolumnas += 6;
                         }

                         //se reinicia el intervalo para empezar a mover la ficha
                         intervalofilas = 4;
                         intervalocolumnas = 6;

                         do
                         {
                             Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                             if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                             {
                                 Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                 Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                 Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                 system("pause>0");
                                 //borrar
                                 Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                 Console::SetCursorPosition(75, 14); cout << "               ";
                                 Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                 Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                             }

                         } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                         while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                         {
                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                             if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                             contador_de_casillas++; intervalofilas += 4; intervalocolumnas += 6;
                         }
                     }
                     //se reinicia nuevamente el intervalo para el siguiente turno
                     identificador_de_casillas_libres = 0; intervalofilas = 0; intervalocolumnas = 0; contador_de_casillas = 1;
                 }

            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && ((matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 - 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6]) == 1 || (matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas1 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1)))
            {
                 intervalofilas += 4;


                 if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] == 1)
                 {
                     do
                     {
                         Console::SetCursorPosition(75, 10); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                         if (direccionj1 < 1 || direccionj1>2)
                         {
                             Console::SetCursorPosition(75, 12); cout << "Dato invalido";
                             Console::SetCursorPosition(75, 14); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                             system("pause>0");
                             //borrar

                             Console::SetCursorPosition(75, 10); cout << "                                                                         ";
                             Console::SetCursorPosition(75, 12); cout << "                           ";
                             Console::SetCursorPosition(75, 14); cout << "                                                                                              ";
                         }

                     } while (direccionj1 < 1 || direccionj1>2);

                     matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                     matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                     if (direccionj1 == 1)
                     {
                         intervalocolumnas -= 6;

                         while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                         {
                             identificador_de_casillas_libres++;
                             intervalofilas += 4;
                             intervalocolumnas -= 6;

                         }

                         //se reinicia el intervalo para empezar a mover la ficha
                         intervalofilas = 4;
                         intervalocolumnas = -6;

                         do
                         {
                             Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                             if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                             {
                                 Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                 Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                 Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                 system("pause>0");
                                 //borrar
                                 Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                 Console::SetCursorPosition(75, 14); cout << "               ";
                                 Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                 Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                             }

                         } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                         while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                         {
                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                             if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                             contador_de_casillas++; intervalofilas += 4; intervalocolumnas -= 6;
                         }

                     }
                     else if (direccionj1 == 2)
                     {
                         intervalocolumnas += 6;

                         while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                         {
                             identificador_de_casillas_libres++;
                             intervalofilas += 4;
                             intervalocolumnas += 6;

                         }

                         //se reinicia el intervalo para empezar a mover la ficha
                         intervalofilas = 4;
                         intervalocolumnas = +6;

                         do
                         {
                             Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                             if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                             {
                                 Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                 Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                 Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                 system("pause>0");
                                 //borrar
                                 Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                 Console::SetCursorPosition(75, 14); cout << "               ";
                                 Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                 Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                             }

                         } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                         while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                         {
                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                             if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                             contador_de_casillas++; intervalofilas += 4; intervalocolumnas += 6;
                         }
                     }


                 }
                 else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 - 6] == 1)//solo izquierda
                 {
                     matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                     matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                     intervalocolumnas -= 6;

                     while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                     {
                         identificador_de_casillas_libres++;
                         intervalofilas += 4;
                         intervalocolumnas -= 6;

                     }

                     //se reinicia el intervalo para empezar a mover la ficha
                     intervalofilas = 4;
                     intervalocolumnas = -6;

                     do
                     {
                         Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                         if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                         {
                             Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                             Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                             Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                             system("pause>0");
                             //borrar
                             Console::SetCursorPosition(75, 12); cout << "                                                     ";
                             Console::SetCursorPosition(75, 14); cout << "               ";
                             Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                             Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                         }

                     } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                     while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                     {
                         matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                         matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                         if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                         matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                         matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                         contador_de_casillas++; intervalofilas += 4; intervalocolumnas -= 6;
                     }

                 }
                 else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 + 4][ubicacioncolumnas2 + 6] == 1)//solo derecha
                 {

                     matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                     matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                     intervalocolumnas += 6;

                     while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                     {
                         identificador_de_casillas_libres++;
                         intervalofilas += 4;
                         intervalocolumnas += 6;

                     }

                     //se reinicia el intervalo para empezar a mover la ficha
                     intervalofilas = 4;
                     intervalocolumnas = +6;

                     do
                     {
                         Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                         if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                         {
                             Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                             Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                             Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                             system("pause>0");
                             //borrar
                             Console::SetCursorPosition(75, 12); cout << "                                                     ";
                             Console::SetCursorPosition(75, 14); cout << "               ";
                             Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                             Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                         }

                     } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                     while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                     {
                         matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                         matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                         if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                         matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                         matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                         contador_de_casillas++; intervalofilas += 4; intervalocolumnas += 6;
                     }
                 }
                 //se reinicia nuevamente el intervalo para el siguiente turno
                 identificador_de_casillas_libres = 0; intervalofilas = 0; intervalocolumnas = 0; contador_de_casillas = 1;
            }
            else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && (matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 + 6] == 1 || matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 - 6] == 1))
            {
                 intervalofilas -= 4;

                 if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas3 + 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas2 + 6] == 1)//comprueba que la derecha y la izquierda tengan por lo menos una casilla libre
                 {
                     do
                     {
                         Console::SetCursorPosition(75, 10); cout << "Ingresa la direccion 1: izquierda; 2: derecha: "; cin >> direccionj1;
                         if (direccionj1 < 1 || direccionj1>2)
                         {
                             Console::SetCursorPosition(75, 12); cout << "Dato invalido";
                             Console::SetCursorPosition(75, 14); cout << "Presiona una tecla para volver a ingresar la direccion, esta vez sin hacerte el payasin";
                             system("pause>0");
                             //borrar

                             Console::SetCursorPosition(75, 10); cout << "                                                                         ";
                             Console::SetCursorPosition(75, 12); cout << "                           ";
                             Console::SetCursorPosition(75, 14); cout << "                                                                                              ";
                         }

                     } while (direccionj1 < 1 || direccionj1>2);
                     //borra la ubicación actual de la reina
                     matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                     matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                     if (direccionj1 == 1)//arriba y y izquierda
                     {
                         intervalocolumnas -= 6;

                         while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                         {
                             identificador_de_casillas_libres++;
                             intervalofilas -= 4;
                             intervalocolumnas -= 6;

                         }
                         //se reinicia el intervalo para empezar a mover la ficha
                         intervalofilas = -4;
                         intervalocolumnas = -6;

                         do
                         {
                             Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                             if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                             {
                                 Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                 Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                 Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                 system("pause>0");
                                 //borrar
                                 Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                 Console::SetCursorPosition(75, 14); cout << "               ";
                                 Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                 Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                             }

                         } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                         while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                         {
                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                             if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                             contador_de_casillas++; intervalofilas -= 4; intervalocolumnas -= 6;
                         }

                     }
                     else if (direccionj1 == 2)//arriba y derecha
                     {
                         intervalocolumnas += 6;

                         while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                         {
                             identificador_de_casillas_libres++;
                             intervalofilas -= 4;
                             intervalocolumnas += 6;

                         }
                         //se reinicia el intervalo para empezar a mover la ficha
                         intervalofilas = -4;
                         intervalocolumnas = 6;

                         do
                         {
                             Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                             if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                             {
                                 Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                                 Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                                 Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                                 system("pause>0");
                                 //borrar
                                 Console::SetCursorPosition(75, 12); cout << "                                                     ";
                                 Console::SetCursorPosition(75, 14); cout << "               ";
                                 Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                                 Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                             }

                         } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                         while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                         {
                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                             if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                             matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                             matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                             contador_de_casillas++; intervalofilas -= 4; intervalocolumnas += 6;
                         }
                     }
                 }

                 else if (matriz8x8[ubicacionfila1][ubicacioncolumnas1] == 8 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas4 - 6] == 1 && matriz8x8[ubicacionfila1 - 4][ubicacioncolumnas1 - 6] == 1)// comprueba que la izquierda este libre
                 {

                     //borra la ubicación actual de la reina
                     matriz8x8[ubicacionfila1][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila1][ubicacioncolumnas4] = 1;
                     matriz8x8[ubicacionfila2][ubicacioncolumnas1] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas2] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas3] = 1; matriz8x8[ubicacionfila2][ubicacioncolumnas4] = 1;

                     intervalocolumnas -= 6;

                     while (matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] == 1 && matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] == 1)
                     {
                         identificador_de_casillas_libres++;
                         intervalofilas -= 4;
                         intervalocolumnas -= 6;

                     }
                     //se reinicia el intervalo para empezar a mover la ficha
                     intervalofilas = -4;
                     intervalocolumnas = -6;

                     do
                     {
                         Console::SetCursorPosition(75, 12); cout << "Ingresa la cantidad de casillas que vas a mover: "; cin >> cantidad_de_casillas_a_mover;

                         if (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1)
                         {
                             Console::SetCursorPosition(75, 14); cout << "Dato invalido";
                             Console::SetCursorPosition(75, 16); cout << "Aprende a contar e ingresa nuevamente una cantidad de casillas valida";
                             Console::SetCursorPosition(75, 18); cout << "Presiona una tecla para volver a ingresar la cantidad de casillas que deseas mover";
                             system("pause>0");
                             //borrar
                             Console::SetCursorPosition(75, 12); cout << "                                                     ";
                             Console::SetCursorPosition(75, 14); cout << "               ";
                             Console::SetCursorPosition(75, 16); cout << "                                                                        ";
                             Console::SetCursorPosition(75, 18); cout << "                                                                                      ";
                         }

                     } while (identificador_de_casillas_libres < cantidad_de_casillas_a_mover || cantidad_de_casillas_a_mover < 1);

                     while (contador_de_casillas <= cantidad_de_casillas_a_mover)
                     {
                         matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;
                         matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 8; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 8;

                         if (contador_de_casillas == cantidad_de_casillas_a_mover) break;

                         matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila1 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;
                         matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas1 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas2 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas3 + intervalocolumnas] = 1; matriz8x8[ubicacionfila2 + intervalofilas][ubicacioncolumnas4 + intervalocolumnas] = 1;

                         contador_de_casillas++; intervalofilas -= 4; intervalocolumnas -= 6;
                     }
                 }

                 //se reinicia nuevamente el intervalo para el siguiente turno
                 identificador_de_casillas_libres = 0; intervalofilas = 0; intervalocolumnas = 0; contador_de_casillas = 1;
            }
            else
            {
                Console::SetCursorPosition(75, 10);
                cout << "Haz ingresado una ficha que no se puede mover o directamente una no existente";
                Console::SetCursorPosition(75, 12);
                cout << "Presiona cualquier tecla para volver a elegir una ficha";
                system("pause>0");
                if (turno == 2)
                {
                    turno = 1;
                }
                else if (turno == 1)
                {
                    turno = 2;
                }
                contador_de_movimientosj2--;
            }
            contador_de_movimientosj2++;
        }

        Console::SetCursorPosition(75, 14); cout << "Cargando...";
        _sleep(1500);
        system("cls");
        //volvemos a graficar la matriz
        graficar_filas_y_columnas8x8();
        graficar_tablero(color_de_ficha_j1, color_de_ficha_j2);


        for (int k = 0; k < Filas8x8; k++)
        {
            for (int h = 0; h < Columnas8x8; h++)
            {
                 //X=h  Y=k
                
                if (matriz8x8[k][h] == 4 || matriz8x8 [k][h] == 7)
                {
                    contador_de_fichasj1++;
                }
                else if (matriz8x8[k][h] == 5 || matriz8x8[k][h] == 8)
                {
                    contador_de_fichasj2++;
                }
                

            }
        }

        if (contador_de_fichasj1 == 0 || contador_de_fichasj2 == 0 || tablas == 1)
        {
            gameover = 1;
        }

        if (gameover == 1)
        {
            break;
        }
    }
}
void fin_del_juego()
{
    int matriz[14][80]= { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,1,1,1,0,1,0,1,1,0,0,0,1,0,1,1,1,1,0,0,0,1,1,1,1,1,0,1,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,0,1,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,1,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,1,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,1,1,0,1,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,1,0,1,1,1,1,1,1,0,1,0,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,0,0,0,0,1,0,1,0,0,0,1,1,0,1,0,0,0,1,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,1,0,1,1,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,0,0,0,0,1,0,1,0,0,0,0,1,0,1,1,1,1,0,0,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };

    for (int f = 0; f < 14; f++)
    {
        for (int c = 0; c < 80; c++)
        {
            Console::SetCursorPosition(c + 55, f + 2);//x=columnas y y=filas
            if (matriz[f][c] == 1)
            {
                Console::ForegroundColor = ConsoleColor::Red;
                cout << (char)219;
            }

            if (matriz[f][c] == 0)
            {
                Console::ForegroundColor = ConsoleColor::Black;
                cout << (char)219;
            }
        }
    }
}
void felicidades()
{
    int matriz[14][80] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,0,0,0,0,0,1,0,1,1,1,1,1,1,1,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0},
{1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,0,0,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0},
{1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
{1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
{1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,0,1,0,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,0,0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };

    for (int f = 0; f < 14; f++)
    {
        for (int c = 0; c < 80; c++)
        {
            Console::SetCursorPosition(c + 10, f + 2);//x=columnas y y=filas
            if (matriz[f][c] == 1)
            {
                Console::ForegroundColor = ConsoleColor::Red;
                cout << (char)219;
            }

            if (matriz[f][c] == 0)
            {
                Console::ForegroundColor = ConsoleColor::Black;
                cout << (char)219;
            }
        }
    }


}
void ganador()
{
    int matriz[14][80] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,1,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,0,1,1,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };

    for (int f = 0; f < 14; f++)
    {
        for (int c = 0; c < 80; c++)
        {
            Console::SetCursorPosition(c + 10, f + 2);//x=columnas y y=filas
            if (matriz[f][c] == 1)
            {
                Console::ForegroundColor = ConsoleColor::Red;
                cout << (char)219;
            }

            if (matriz[f][c] == 0)
            {
                Console::ForegroundColor = ConsoleColor::Black;
                cout << (char)219;
            }
        }
    }

}
void jugador1()
{
    int matriz [14][80] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,0,1,0,0,0,1,0,1,0,1,1,1,1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,1,1,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,1,0,1,1,1,1,0,0,0,1,1,1,1,1,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };


    for (int f = 0; f < 14; f++)
    {
        for (int c = 0; c < 80; c++)
        {
            Console::SetCursorPosition(c + 10, f + 2);//x=columnas y y=filas
            if (matriz[f][c] == 1)
            {
                Console::ForegroundColor = ConsoleColor::Red;
                cout << (char)219;
            }

            if (matriz[f][c] == 0)
            {
                Console::ForegroundColor = ConsoleColor::Black;
                cout << (char)219;
            }
        }
    }
}
void jugador2()
{
    int matriz [14][80] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,0,1,0,0,0,0,1,0,1,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,1,1,1,1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,1,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };

    for (int f = 0; f < 80; f++)
    {
        for (int c = 0; c < 40; c++)
        {
            Console::SetCursorPosition(c + 10, f + 2);//x=columnas y y=filas
            if (matriz[f][c] == 1)
            {
                Console::ForegroundColor = ConsoleColor::Red;
                cout << (char)219;
            }

            if (matriz[f][c] == 0)
            {
                Console::ForegroundColor = ConsoleColor::Black;
                cout << (char)219;
            }
        }
    }

}
void tablas_grafico()
{
    int matriz [14][80] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };

    for (int f = 0; f < 14; f++)
    {
        for (int c = 0; c < 80; c++)
        {
            Console::SetCursorPosition(c + 10, f + 2);//x=columnas y y=filas
            if (matriz[f][c] == 1)
            {
                Console::ForegroundColor = ConsoleColor::Red;
                cout << (char)219;
            }

            if (matriz[f][c] == 0)
            {
                Console::ForegroundColor = ConsoleColor::Black;
                cout << (char)219;
            }
        }
    }

}
void carita_triste()
{
    int matriz[14][80] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };
    for (int f = 0; f < 14; f++)
    {
        for (int c = 0; c < 80; c++)
        {
            Console::SetCursorPosition(c + 10, f + 2);//x=columnas y y=filas
            if (matriz[f][c] == 1)
            {
                Console::ForegroundColor = ConsoleColor::Red;
                cout << (char)219;
            }

            if (matriz[f][c] == 0)
            {
                Console::ForegroundColor = ConsoleColor::Black;
                cout << (char)219;
            }
        }
    }

}
void hallar_ganador(int& tablas, int& contador_de_fichasj1, int& contador_de_fichas_j2)
{
    Console::CursorVisible = false;
    system("cls");
    fin_del_juego();
    _sleep(2000);

    if (tablas == 1)
    {
        system("cls");
        tablas_grafico(); _sleep(2000);
        system("cls");
        carita_triste(); _sleep(2000);
    }
    else if (contador_de_fichasj1 > contador_de_fichas_j2)
    {
        system("cls");
        ganador(); _sleep(2000);
        system("cls");
        jugador1(); _sleep(2000);
        system("cls");
        felicidades();
        
    }
    else if (contador_de_fichas_j2 > contador_de_fichasj1)
    {
        system("cls");
        ganador(); _sleep(2000);
        system("cls");
        //jugador2();
        system("cls"); 
        felicidades(); _sleep(2000);
    }

    int salir = 0;
    while (true)
    {
        Console::ForegroundColor = ConsoleColor::White;
        system("cls");
        cout << "\n\n\n\n\t\tPresione 'esc' para salir al menu";
        while (true)
        {
            if (_kbhit())
            {
                char tecla = getch();

                if (tecla == esc)
                {
                    salir = 1;
                    break;
                }
            }

            
        }

        if (salir == 1)
        {
            break;
        }
    }
    
}
int main()
{
    Console::SetWindowSize(120, 31);
    char fichaP1, fichaP2;
    int turno = 0;
    char* nombre1 = new char[20];
    char* nombre2 = new char[20];
    int tiro_dado_J1 = 0;
    int tiro_Dado_j2 = 0;
    int color_de_ficha_j1 = 0;
    int color_de_ficha_j2 = 0;
    //estas variables tienen que ver directamente con el gameplay
    int filaj1;
    char columnaj1;
    int ubicacionfila1 = 0;
    int ubicacioncolumnas1 = 0;
    int ubicacionfila2 = 0;
    int ubicacioncolumnas2 = 0;
    int ubicacioncolumnas3 = 0;
    int ubicacioncolumnas4 = 0;
    int direccionj1;
    int contador_de_movimientosj1 = 0;
    int contador_de_movimientosj2 = 0;
    int contador_de_fichasj1 = 0;
    int contador_de_fichasj2 = 0;
    int gameover = 0;
    int tablas = 0;
    int tablas1 = 0;
    int tablas2 = 0;
    //define matriz


    //int x = 60, y=10
   // Console::SetCursorPosition(x, y); cout << "*"; x= 60 significa que el puntero esta ubicado en el medio de la consola

    Console::CursorVisible = false;
    int salir = 0;
    while (true)
    {
        _sleep(1000);
        system("cls");
        logo_upc();
        marco();
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(48, 3); cout << "El real juego de damas";
        Console::SetCursorPosition(40, 6); cout << "Presione 1 para empezar una nueva partida";
        Console::SetCursorPosition(42, 9); cout << "Presione 2 para ver las instrucciones";
        Console::SetCursorPosition(44, 12); cout << "Presione 3 para ver los creditos";
        Console::SetCursorPosition(50, 15); cout << "Presione 4 para salir";

        while (true)
        {
            Console::SetWindowSize(120, 31);
            if (_kbhit())
            {
                char tecla = getch();

                if (tecla == uno)
                {
                    system("cls");
                    nombres_participantes(nombre1, nombre2);
                    lanzar_dados(tiro_dado_J1, tiro_Dado_j2, nombre1, nombre2);
                    color_de_fichas(color_de_ficha_j1, color_de_ficha_j2, nombre1, nombre2, tiro_dado_J1, tiro_Dado_j2);

                    Console::SetWindowSize(165, 45);
                    Console::CursorVisible = false;
                    //imprime matriz 8x8
                    system("cls");
                    graficar_filas_y_columnas8x8();
                    graficar_tablero(color_de_ficha_j1, color_de_ficha_j2);
                    jugar(filaj1, columnaj1, ubicacionfila1, ubicacioncolumnas1, ubicacionfila2, ubicacioncolumnas2, ubicacioncolumnas3, ubicacioncolumnas4, direccionj1, nombre1, nombre2, tiro_dado_J1, tiro_Dado_j2, turno, color_de_ficha_j1, color_de_ficha_j2, contador_de_movimientosj1, contador_de_movimientosj2, contador_de_fichasj1, contador_de_fichasj2, gameover, tablas, tablas1, tablas2);
                    hallar_ganador(tablas, contador_de_fichasj1, contador_de_fichasj2);

                    getch(); // ponemos temporalmente un getch() para observar el tablero
                    break;
                }
                if (tecla == dos)
                {
                    system("cls");
                    instrucciones(); break;
                }
                if (tecla == tres)
                {
                    system("cls");
                    creditos(); break;
                }
                if (tecla == cuatro)
                {
                    system("cls");

                    salir = 1;
                    break;
                }
            }
        }
        if (salir == 1) break;
    }

    return 0;
}