#include <studio.h>
#include <stdlib.h>
#include <conio.h>

char maydon[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int golibni_tekshir();
void board();

int main()
{
	int player = 1, i, tanlov;
	char belgi;
	
	do
	{
		board();
		player = (player % 2) ? 1 : 2;

		printf("%d -chi o'yinchi raqam kiriting: ", player);
		scanf("%d", &tanlov);

		belgi = (player == 1) ? 'X' : 'O';

		if (tanlov == 1 && maydon[1] == '1')
			maydon[1] = belgi;
		else if (tanlov == 2 && maydon[2] == '2')
			maydon[2] = belgi;
		else if (tanlov == 3 && maydon[3] == '3')
			maydon[3] = belgi;
		else if (tanlov == 4 && maydon[4] == '4')
			maydon[4] = belgi;
		else if (tanlov == 5 && maydon[5] == '5')
			maydon[5] = belgi;
		else if (tanlov == 6 && maydon[6] == '6')
			maydon[6] = belgi;
		else if (tanlov == 7 && maydon[7] == '7')
			maydon[7] = belgi;
		else if (tanlov == 8 && maydon[8] == '8')
			maydon[8] = belgi;
		else if (tanlov == 9 && maydon[9] == '9')
			maydon[9] = belgi;
		else
		{
			printf("Deeng!");
			player--;
			getchar();
		}
		i = golibni_tekshir();

		player++;
	}while(i == - 1)
	board();

	if ( i == 1)
		printf("==> %d - chi o'yinchi g'olib ", --player);
		getchar();
	else
		printf("==> Durrang!");

	getchar();
	return 0;

}

/// 1 O'yin natija bilan tugaydi
/// -1 O'yin hali tugamaydi
/// 0 O'yin tugagan lekin natija yo'q

int golibni_tekshir()
{
	if (maydon[1] == maydon[2] && maydon[2] == maydon[3])
		return 1;
	else if (maydon[4] == maydon[5] && maydon[5] == maydon[6])
		return 1;
	else if (maydon[7] == maydon[8] && maydon[8] == maydon[9])
		return 1;
	else if (maydon[1] == maydon[4] && maydon[4] == maydon[7])
		return 1;
	else if (maydon[2] == maydon[5] && maydon[5] == maydon[8])
		return 1;
	else if (maydon[3] == maydon[6] && maydon[6] == maydon[9])
		return 1;
	else if (maydon[1] == maydon[5] && maydon[5] == maydon[9])
		return 1;
	else if (maydon[3] == maydon[5] && maydon[5] == maydon[7])
		return 1;
	else if (maydon[1] != '1' && maydon[2] != '2' && maydon[3] != '3' && maydon[4] != '4' && maydon[5] != '5' && maydon[6] != '6' && maydon[7] != '7' && maydon[8] != '8' && maydon[9] != '9')
		return 0;
	else
		return -1;

}
void board()
{
	system('clear');
	printf("Tica Tac Toe\n\n");

	printf("Player 1 (X) - Player 2 (O)\n\n\n");

	printf("    |    |    \n");
	printf(" %c | %c |  %c \n", maydon[1], maydon[2], maydon[3]);

	printf("_____|____|_____\n");
	printf("     |    |     \n");

	printf(" %c  | %c | %c  \n", maydon[4], maydon[5], maydon[6]);

	printf("_____|____|_____\n");
	printf("     |    |     \n");
	
	printf(" %c  | %c | %c  \n", maydon[7], maydon[8], maydon[9]);
	
	printf("     |    |     \n\n");

}
