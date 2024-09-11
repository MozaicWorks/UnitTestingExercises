using System;
using System.Linq;
using RPGCombatKata;

public class Program
{
	public static void Main()
	{
		Character arthur = new Character();
		Character mordred = new Character();
		Character merlin = new Character();
		CharacterWriter arthurWriter = new CharacterWriter(arthur);
		Game game = new Game(arthur, mordred, merlin, arthurWriter);
		game.Run();
	}
}
