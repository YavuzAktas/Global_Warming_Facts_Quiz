#include <stdio.h>
#include <stdlib.h>


int answerChech( unsigned int x, unsigned int y, unsigned int z, unsigned int t, unsigned int n );
void query( unsigned int n );
void evaluation( int n );



int main( void ){


	unsigned int answer1, answer2, answer3, answer4, answer5;
	int yourScore;


	printf("--------------------WARM UP--------------------\n");
	printf("Test your knowledge of global temperature change and its impact on Earth's climate.\n\n");

	

	do{

		printf("1-) How do scientists collect evidence about climate?\n\n");
		printf("1- Using remote sensing from space with satellites\n2- By ground-based measurements of surface temperature, carbon dioxide concentration and sea level\n3- By collecting ""proxy data"" from tree rings, ice cores and historical records\n4- All of the above\n");	
		scanf("%u", &answer1 );

		query( answer1 );

	}while( answer1 > 4 || answer1 < 1 );

	
	puts("******************************************************************************************************");




	do{

		printf("\n2-) If you removed the atmosphere's natural greenhouse effect, and everything else stayed the same, Earth's temperature would be: \n\n");
		printf("1- 10 to 20°F (6 to 11°C) warmer \n2- 30 to 40°F (17 to 22°C) warmer \n3- 10 to 20°F (6 to 11°C) cooler \n4- 50 to 60°F (28 to 33°C) cooler\n");	
		scanf("%u", &answer2 );

		query( answer2 );


	}while( answer2 > 4 || answer2 < 1 );


	puts("******************************************************************************************************");



	do{

		printf("\n3-) Which of the following gases does not trap heat? \n\n");
		printf("1- Carbon dioxide \n2- Nitrogen \n3- Water vapor \n4- Methane \n");	
		scanf("%u", &answer3 );

		query( answer3 );


	}while( answer3 > 4 || answer3 < 1 );


	puts("******************************************************************************************************");



	do{

		printf("\n4-) Today's warming is unprecedented in the last:  \n\n");
		printf("1- 100 years  \n2- 500 years \n3- 1,000 years \n4- 2,000 years \n");	
		scanf("%u", &answer4 );

		query( answer4 );


	}while( answer4 > 4 || answer4 < 1 );


	puts("******************************************************************************************************");



	do{

		printf("\n5-) Which greenhouse gas is the main driver of Earth’s current warming?   \n\n");
		printf("1- Methane   \n2- Carbon dioxide \n3- Nitrous oxide \n4- Water vapor  \n");	
		scanf("%u", &answer5 );

		query( answer5 );


	}while( answer5 > 4 || answer5 < 1 );


	puts("******************************************************************************************************");
	puts(" ");


	yourScore = answerChech( answer1, answer2, answer3, answer4, answer5 );
	printf("Number of correct questions : %d", yourScore );
	puts(" ");

	evaluation( yourScore );
	puts("");


}






void query( unsigned int n ){

	
	if( n > 4 || n < 1 ){

		printf("Please enter an answer between 1 and 4\n");
		puts("---------------------------------------------------------------------------------------------------------");
	}

}



int answerChech( unsigned int x, unsigned int y, unsigned int z, unsigned int t, unsigned int n ){

	
	int counter;
	counter = 0;


	if( x == 4 ){

		++counter;
	}

	if( y == 4 ){

		++counter;
	}

	if( z == 2 ){

		++counter;
	}

	if( t == 4 ){

		++counter;
	}

	if( n == 2 ){

		++counter;
	}


	return counter;

}



void evaluation( int n ){

	

	if( n == 5 ){

		printf("Excellent");
	}


	else if( n == 4 ){

		printf("Very good");
	}


	else{

		printf("Time to brush up on your knowledge of global warming");
	}

}

