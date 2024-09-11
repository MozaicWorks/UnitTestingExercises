namespace RPGCombatKata
{
	public class CharacterWriter
	{
		private Character character;

		public CharacterWriter(Character character)
		{
			this.character = character;
		}

		public void Write(string fileName)
		{
			// Write the character data to a text file named fileName in the format: health, level, isAlive
			// For example: 1000, 1, true
			// Or: 100, 1, true
			// Or: 0, 1, false 
		}

	}

}
