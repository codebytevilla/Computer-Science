#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Game structure
struct Game
{
    char name[50];
    int numPlayers;
    char **playerNames; // Array of pointers to store player names
};

int main()
{
    int i;
    char playerName[50];
    struct Game game;

    // Input details for the game
    printf("Enter the name of the game: ");
    scanf("%s", game.name);

    printf("Enter the number of players: ");
    scanf("%d", &game.numPlayers);

    // Allocate memory for player names
    game.playerNames = (char **)malloc(game.numPlayers * sizeof(char *));

    if (game.playerNames == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Input player names
    for (i = 0; i < game.numPlayers; i++)
    {
        printf("Enter name for player %d: ", i + 1);
        
        scanf("%s", playerName);

        // Allocate memory for player name and copy it
        game.playerNames[i] = (char *)malloc((strlen(playerName) + 1) * sizeof(char));
        strcpy(game.playerNames[i], playerName);
    }

    // Display game details
    printf("\nGame Details:\n");
    printf("Name: %s\n", game.name);
    printf("Number of Players: %d\n", game.numPlayers);
    printf("Player Names:\n");
    for (i = 0; i < game.numPlayers; i++)
    {
        printf("Player %d: %s\n", i + 1, game.playerNames[i]);
    }

    // Free allocated memory
    for (i = 0; i < game.numPlayers; i++)
    {
        free(game.playerNames[i]);
    }
    free(game.playerNames);
}
