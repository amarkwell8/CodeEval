#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	FILE *input = fopen( argv[1], "r");
	
	if( input != NULL) {
		char line[25];
		int x, y, z;
		int test = 0; 
		//char hold;
		
		while( fgets( line, sizeof line, input) != NULL) {
			//printf("%s", line);
			z = strlen(line);
			for ( x = 0; x <= z; x++) {
				if ( test == 0) {
					char hold = line[x];
					//printf("x %c\n", line[x]);
					for ( y = 0; y <= z; y++) {
						//printf("y %c\n", line[y]);
						if ( x != y) {
							if ( line[y] == hold) {
								test = 0;
								//printf("If %c\n", line[y]);
								break;
							}
							
							else {
								test = 1;
								//printf("Else %c\n", line[y]);
							}
							//printf("Yolo!\n");
						}
					}
					if (test == 1) {printf("%c\n", hold);}
				}
			}//end for 
			test = 0;
		}//end while
	}//end if
	fclose( input);
}//end main
