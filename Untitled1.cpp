#include<stdio.h>

int main()
{
	FILE* file;
	
	file = fopen("blemca.txt", "w");
	
	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {
			if (i * j > 9) {
				fprintf(file, "%d  ", i * j);
			} else {
				fprintf(file, "%d   ", i * j);
			}
		}
		fprintf(file,"\n");
	}
	
	fclose(file);
}
