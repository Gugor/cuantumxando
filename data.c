#include "engine.h"

typedef struct s_player 
{
	char name[2][35];
	int	score;
}t_player; 

typedef struct s_game
{
	int		status;			// 0 = not started, 1 = started, 2 = paused
	size_t	deltatime;		// time in game
	int		turn;			// who to play 0 = player 1, 1 = player 2
	char	board[9][9];	// board 9 tiles with another board of 9 tiles in it. 
} t_game;
