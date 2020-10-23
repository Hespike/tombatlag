
#include <stdio.h>

int sorozat_atlag(int tomb[]){
	int osszeg = 0, i;
	for( i = 0; tomb[i] != 0; ++i){
		osszeg += tomb[i];
		printf("%d ", tomb[i]);
	}
	printf("\n");
	printf("A sorozat atlaga: %.2f", osszeg / (float)(i));

	return i;
}

int main(){
	int sorozat[50];
	int szam;

	int i = 0;
	while(1){
		scanf("%d", &szam);
		if(szam == 0){
			break;
		}

		sorozat[i] = szam;
		i++;
	}
	sorozat[i]=0;

	sorozat_atlag(sorozat);
	return 0;
}