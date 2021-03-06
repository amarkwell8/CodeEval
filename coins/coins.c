#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {

	FILE *input = fopen( argv[1], "r");
	int penny = 1;
	int three = 3;
	int nickel =5;
	int change, count;
	
	while (!feof(input)) {
		fscanf( input, "%d", &change);
		
		if(feof(input)) { break;}
		
		count = 0;
		
		while (change != 0) {
			if( change >= nickel) {
				change = change - nickel;
				count++;
			}
			else if ( change >= three) {
				change = change - three;
				count++;
			}
			else {
				change = change - penny;
				count++;
			}
		}
		printf("%d\n", count);
	}
}
