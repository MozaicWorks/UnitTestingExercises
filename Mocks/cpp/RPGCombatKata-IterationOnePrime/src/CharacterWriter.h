#include <string>
#include "Character.h"

#pragma once

class CharacterWriter{
	private:
		const Character& character;

	public:
		CharacterWriter(const Character& character): character(character){}

		void write(std::string fileName){
			// Write the character data to a text file named fileName in the format: health, level, isAlive
			// For example: 1000, 1, true
			// Or: 100, 1, true
			// Or: 0, 1, false 
		}
};
