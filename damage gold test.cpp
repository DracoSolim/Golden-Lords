//Churches of Gold: A Roguelite Dungeon Crawler Game
//Made by Draco Solim,
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    //Stats jugador
    //Vida del jugador
    int player_life;
    player_life = 10;

    //Daño del jugador
    int player_damage;
    player_damage = 2;

    //Velocidad del jugador
    int player_speed;
    player_speed = 50;
    
    //Oro del jugador
    int player_gold;
    player_gold = 0;

    //Stats enemigo
    int enemy_life;
    enemy_life = 10;

    int enemy_damage;
    enemy_damage = 1;

    int enemy_speed;
    enemy_speed = ;

    //Sistema de oro y overkill
    int gold_given;
    int overkill;

    //Simple combat system
    
    while (enemy_life > 0)
    {
        if (player_speed > enemy_speed)
        {
            enemy_life = enemy_life - player_damage;
        }

        else if(enemy_speed > player_speed)
        {
            player_life = player_life - enemy_damage;
        }
    }
    
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