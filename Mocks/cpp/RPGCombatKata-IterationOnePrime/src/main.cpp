#include "Game.h"
#include "Character.h"

int main(){
	Character arthur;
	Character mordred;
	Character merlin;
	CharacterWriter arthurWriter(arthur);

	Game game(arthur, mordred, merlin, arthurWriter);
	game.run();
	return 0;
}
