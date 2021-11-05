#include<stdio.h>
#include<stdlib.h>
#include"repair_scheme_tbl_11_8.h"

void decToHexa(int n)
{
	// char array to store hexadecimal number
	char hexaDeciNum[100];

	// counter for hexadecimal number array
	int i = 0;
	while (n != 0) {
		// temporary variable to store remainder
		int temp = 0;

		// storing remainder in temp variable.
		temp = n%16;

		// check if temp < 10
		if (temp < 10) {
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else {
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		n = n / 16;
	}

	// printing hexadecimal number array in reverse order
	//if (n == 0) printf("0x00");
	printf("0x");
	for (int j = i - 1; j >= 0; j--)
		printf("%c", hexaDeciNum[j]);
		printf(",");
	
}



int main(){

	int i, j, k;
	int p;
	printf("{");
	for(i=0; i<11;i++){
		printf("{");
		for(j=0;j<11;j++){
			printf("{");
			for(k=0;k<9;k++){
				decToHexa(h_rtbl[i][j][k]);
			}
			printf("}, \n");
		}
		printf("}, \n");
	}
	printf("} \n \n");
	//decToHexa(255);
	
	return 0;

    	
}