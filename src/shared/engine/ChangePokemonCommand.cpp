#include "ChangePokemonCommand.h"
#include <iostream>


namespace engine {

    ChangePokemonCommand::ChangePokemonCommand (int pokemon, int pokemon_target) {
        this->pokemon = pokemon;
        this->pokemon_target = pokemon_target;
    }
    void ChangePokemonCommand::execute (state::State& state, int player) {
        state.changeTeam(pokemon, pokemon_target);
        if (player==0 && pokemon<6) std::cout << state.getPokemon(pokemon_target).getName() << " échange avec " << state.getPokemon(pokemon).getName() << std::endl;
        if (player==1 && pokemon>5) std::cout << state.getPokemon(pokemon_target).getName() << " échange avec " << state.getPokemon(pokemon).getName() << std::endl;
        if (player==0 && pokemon>5) std::cout << state.getPokemon(pokemon_target).getName() << " ennemi échange avec " << state.getPokemon(pokemon).getName() << " ennemi" << std::endl;
        if (player==1 && pokemon<6) std::cout << state.getPokemon(pokemon_target).getName() << " ennemi échange avec " << state.getPokemon(pokemon).getName() << " ennemi" << std::endl;
        }

};
