#include <stdio.h>
#include <cs50.h>

int main(void) 
{
	// Оголошуємо змінну
	int висота_піраміди = 0;
	
	// Беремо від користувача число, якщо це не так - повторюємо  
	do {
		printf("Оберіть вистоту піраміди від 1 до 8:\n");
		висота_піраміди = get_int (" ");
        if (висота_піраміди == 0)
        {
            return 0;
        }
	} while (висота_піраміди < 1 || висота_піраміди > 8);

		for(int i = 0; i < висота_піраміди; i++) 
	{
		// Print the required spaces
        for(int j = 0; j < висота_піраміди-i-1; j++)
        {
            printf("%s", " ");
        }
        // Print the '#' character.
		for(int k = 0; k < i+1; k++)
		{
			printf("#");
		}
		printf("  ");
		for(int k = 0; k < i+1; k++)
		{
			printf("#");
		}
		printf("\n");
	}	
	return 0;
}
