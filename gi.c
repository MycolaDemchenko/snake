#include <stdio.h>

int main(){

	int size, h_lives, h_position, i;
	char input;

	int point_position = 0; 

	//= rand() % 20;

	int score = 0;

	size = 400;
	char area[size];

	h_position = 10;

	while(score >= 0){

		//init game draw

//		if(score % 5 == 1){

//			size += 5;

//		}

		printf("\033[2J");
		printf("\033[0;0f");
	        printf("snake version 0.2\n");
	        printf("press 'a' + ENTER to move left\n");
	        printf("press 'd' + ENTER to move right\n");
	        printf("press 'w' + ENTER to move up\n");
	        printf("press 's' + ENTER to move down\n");
	        printf("press 'q' + ENTER to exit\n");
		printf("______________score:____%d________________\n|", score);

		if(point_position == 0){

			point_position = rand() % size;

		}

		if(point_position == h_position)
		{

			score++;
			point_position = 0;

		}

		for(i = 1; i <= size; i++){

			if(i == h_position){

				area[i] = '#';

			}
			else if(i == point_position){

				area[i] = '$';

			}
			else{

				area[i] = '_';

			}

			printf("%c|", area[i]);

			if(i % 20 == 0 && i != size){printf("\n|");}

		}

		printf("\n");

		scanf("%c", &input);

        	if(input == 'a'){

	        	--h_position;

        	}
        	else if(input == 'd'){

	            	++h_position;

        	}
		else if(input == 'w' && h_position - 20 > 0){

			h_position = h_position - 20; 

		}
		else if(input == 's' && h_position + 20 <= size){

			h_position = h_position + 20;

		}
		else if(input == 'q'){

			return 0;

		}

	}

	printf("you win\n");

	return 0;

}

