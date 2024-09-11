# Mocks

* Start from the Stubs codebase
* Add a class CharacterWriter with a function void write(string fileName) that writes the Character data to a file as a comma separated string containing the values for health, level, and if it's alive and with a name provided by the caller. For example "Arthur.txt": "1000, 1, true"
* Add a class Game with a method run() that contains the code from the main() function and saves the characters from time to time. Pass in a CharacterWriter instance
* Test that Game.run() calls CharacterWriter.write()
