#include <iostream>
#include <unistd.h>

// Les lignes suivantes ne servent qu'à vérifier que la compilation avec SFML fonctionne
#include <SFML/Graphics.hpp>

void testSFML() {
    sf::Texture texture;
}

// Fin test SFML

#include <state.h>
#include <string.h>
#include "render.h"
#include "engine.h"

using namespace std;
using namespace state;
using namespace render;
using namespace engine;

int main(int argc, char* argv[])
{
    //Exemple exemple;
    //exemple.setX(53);
	
    if (argc>1) {
        if (string(argv[1]) == "hello") {
            cout << "Bonjour tout le monde !" << endl;
        }
	    if (string(argv[1]) == "state") {
		    cout << "Veillez utiliser les commandes make unittest et make code-coverage depuis le dossier build" << endl;
	    }
        if (string(argv[1]) == "render") {
            cout << "Affichage d'un état" << endl;
            Pokemon p;
            // seul un nombre réduit de pokemon sont codés : groudon, kyogre, rayquaza, leveinard, heatran, staross, noacier
            Pokemon groudon = PokemonFactory::createPokemon(GROUDON);
            Pokemon kyogre = PokemonFactory::createPokemon(KYOGRE);
            Pokemon ray = PokemonFactory::createPokemon(RAYQUAZA);
            Pokemon heatran = PokemonFactory::createPokemon(HEATRAN);
            Pokemon staross = PokemonFactory::createPokemon(STAROSS);
            Pokemon noacier = PokemonFactory::createPokemon(NOACIER);
            std::vector <Pokemon> battle {kyogre,groudon, ray, staross, noacier, heatran, kyogre, groudon, ray, heatran, staross, noacier};
            // le terrain PSYCHIC peut etre remplacé par GRASSY, MISTY ou ELECTRIK
            State s(battle, SUN, PSYCHIC);
		    Scene scene1;
            scene1.draw(s);
        }
        if (string(argv[1]) == "engine") {
            cout << "Affichage de l'état initial" << endl;
            Pokemon p;
            // seul un nombre réduit de pokemon sont codés : groudon, kyogre, rayquaza, leveinard, heatran, staross, noacier
            Pokemon groudon = PokemonFactory::createPokemon(GROUDON);
            Pokemon kyogre = PokemonFactory::createPokemon(KYOGRE);
            Pokemon ray = PokemonFactory::createPokemon(RAYQUAZA);
            Pokemon heatran = PokemonFactory::createPokemon(HEATRAN);
            Pokemon staross = PokemonFactory::createPokemon(STAROSS);
            Pokemon noacier = PokemonFactory::createPokemon(NOACIER);
            std::vector <Pokemon> battle {kyogre,groudon, ray, staross, noacier, heatran, kyogre, groudon, ray, heatran, staross, noacier};

            // le terrain PSYCHIC peut etre remplacé par GRASSY, MISTY ou ELECTRIK
            State s(battle, SUN, PSYCHIC);

            Scene scene;
            scene.draw(s);
        }
        if (string(argv[1]) == "random_ai") {
            cout << "Affichage de l'état initial avec une IA random" << endl;
            Pokemon p;
            // seul un nombre réduit de pokemon sont codés : groudon, kyogre, rayquaza, leveinard, heatran, staross, noacier
            Pokemon groudon = PokemonFactory::createPokemon(GROUDON);
            Pokemon kyogre = PokemonFactory::createPokemon(KYOGRE);
            Pokemon ray = PokemonFactory::createPokemon(RAYQUAZA);
            Pokemon heatran = PokemonFactory::createPokemon(HEATRAN);
            Pokemon staross = PokemonFactory::createPokemon(STAROSS);
            Pokemon noacier = PokemonFactory::createPokemon(NOACIER);
            std::vector <Pokemon> battle {kyogre,groudon, ray, staross, noacier, heatran, kyogre, groudon, ray, heatran, staross, noacier};

            // le terrain PSYCHIC peut etre remplacé par GRASSY, MISTY ou ELECTRIK
            State s(battle, SUN, PSYCHIC);

            Scene scene;
            scene.draw(s, 0);
        }
        if (string(argv[1]) == "heuristic_ai") {
            cout << "Affichage de l'état initial avec une IA heuristic" << endl;
            Pokemon p;
            // seul un nombre réduit de pokemon sont codés : groudon, kyogre, rayquaza, leveinard, heatran, staross, noacier
            Pokemon groudon = PokemonFactory::createPokemon(GROUDON);
            Pokemon kyogre = PokemonFactory::createPokemon(KYOGRE);
            Pokemon ray = PokemonFactory::createPokemon(RAYQUAZA);
            Pokemon heatran = PokemonFactory::createPokemon(HEATRAN);
            Pokemon staross = PokemonFactory::createPokemon(STAROSS);
            Pokemon noacier = PokemonFactory::createPokemon(NOACIER);
            std::vector <Pokemon> battle {kyogre,groudon, ray, staross, noacier, heatran, kyogre, groudon, ray, heatran, staross, noacier};

            // le terrain PSYCHIC peut etre remplacé par GRASSY, MISTY ou ELECTRIK
            State s(battle, SUN, PSYCHIC);

            Scene scene;
            scene.draw(s, 1);
        }
        if (string(argv[1]) == "deep_ai") {
            cout << "Affichage de l'état initial avec une IA deep" << endl;
            Pokemon p;
            // seul un nombre réduit de pokemon sont codés : groudon, kyogre, rayquaza, leveinard, heatran, staross, noacier
            Pokemon groudon = PokemonFactory::createPokemon(GROUDON);
            Pokemon kyogre = PokemonFactory::createPokemon(KYOGRE);
            Pokemon ray = PokemonFactory::createPokemon(RAYQUAZA);
            Pokemon heatran = PokemonFactory::createPokemon(HEATRAN);
            Pokemon staross = PokemonFactory::createPokemon(STAROSS);
            Pokemon noacier = PokemonFactory::createPokemon(NOACIER);
            std::vector <Pokemon> battle {kyogre,groudon, ray, staross, noacier, heatran, kyogre, groudon, ray, heatran, staross, noacier};

            // le terrain PSYCHIC peut etre remplacé par GRASSY, MISTY ou ELECTRIK
            State s(battle, SUN, PSYCHIC);

            Scene scene;
            scene.draw(s, 2);
        }
    }

    else {
        cout << "Veuillez ajouté hello, render ou engine en argument" << endl;
        cout << "Affichage de l'état initial" << endl;
        Pokemon p;
        // seul un nombre réduit de pokemon sont codés : groudon, kyogre, rayquaza, leveinard, heatran, staross, noacier
        Pokemon groudon = PokemonFactory::createPokemon(GROUDON);
        Pokemon kyogre = PokemonFactory::createPokemon(KYOGRE);
        Pokemon ray = PokemonFactory::createPokemon(RAYQUAZA);
        Pokemon heatran = PokemonFactory::createPokemon(HEATRAN);
        Pokemon staross = PokemonFactory::createPokemon(STAROSS);
        Pokemon noacier = PokemonFactory::createPokemon(NOACIER);
        std::vector <Pokemon> battle {kyogre,groudon, ray, staross, noacier, heatran, kyogre, groudon, ray, heatran, staross, noacier};
        
        // le terrain PSYCHIC peut etre remplacé par GRASSY, MISTY ou ELECTRIK
        State s(battle, SUN, PSYCHIC);

        Scene scene;
        scene.draw(s,2);
    }
    
    return 0;
}
