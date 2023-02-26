
#include <iostream>
#include <cstdlib>

using namespace std;

//Modificadores globales de enemigos
class enemies{
    
    public:
        //Nombre del enemigo
        string enemy_name;

        //Vida del enemigo
        int enemy_life;

        //Daño del enemigo
        int enemy_damage;

        //Velocidad del enemigo
        int enemy_speed;
};

//Modificadores globales del jugador
class player{

    public:
        //Nombre del jugador
        string player_name;

        //Vida del jugador
        int player_life;

        //Daño del jugador
        int player_damage;

        //Velocidad del jugador
        int player_speed;
    
        //Oro del jugador
        int player_gold;
};

int main(){

    //Semilla de generacion de numeros aleatorios
    srand((unsigned) time(NULL));

    //Sistema de oro y overkill
    int gold_given;
    int overkill;

    //oro dado por overkill
    while (enemy_life <= 0)
    {
        enemy_life++;
        overkill++;
    }
    
    //actualizacion del oro
    gold_given = overkill;
    player_gold = player_gold + gold_given;

}