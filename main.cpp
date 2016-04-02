#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	int n = atoi(argv[1]);
	int seed = atoi(argv[2]);
	srand(argc==3 ? seed : time(NULL));
	drawCharSquare(charSquare(n), n);	
}

char **charSquare(int n)
{
	char **square = new char*[n];
	for(int i = 0; i<n; i++){
		square[i] = new char[n];
	}
	int x;
	int y;
	for(int i = 0; i<n*n; i++){
		x = i/n;
		y = i%n;
		square[x][y]='a'+rand()%26;
			}

	return square;
}

void drawCharSquare(char **square, int n)
{
	for(int i = 0; i<n*n; i++){
		int x = i/n;
		int y = i%n;
		printf("%c ", square[x][y]);
		if(y==n-1){
			printf("\n");
		}
	}

}
