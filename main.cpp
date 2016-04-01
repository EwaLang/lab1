#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{


int n = atoi(argv[1]);
int seed = atoi(argv[2]);
srand(argc == 3 ? seed : time(NULL));
drawCharSquare(charSquare(n), n);
}

char **charSquare(int n)
{
char **square = new char * [n];
int w = n; //Wysokosc
int s = n; //Szerokosc

for(int i = 0; i < n; i++)
{
square[i] = new char[n];
}
for(int i = 0 ; i < (w * s) ; i++)
{
square[i % s][i / s] = ( ( rand() % ( 'z' - 'a' ) ) + 'a' );
}



return square;
}

void drawCharSquare(char **square, int n)
{
int w = n;
int s = n;
for(int i = 0 ; i < (w * s) ; i++)
{
printf("%c", square[i % s][i / s]);
if(i%s==n-1){
	printf("\n");
}
}


}
