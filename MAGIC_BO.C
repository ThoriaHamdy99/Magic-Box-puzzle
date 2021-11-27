#include<stdio.h>
#include<conio.h>


void main(){

	int arrSize;
	int row = 0;
	int col;
	int i, j;
	int dx = 4, dy = 1;

	clrscr();
	flushall();

	//-----solve magic box------------
	printf("Enter size of matrix: ");
	scanf("%d", &arrSize);
	col = arrSize / 2;
    clrscr();

	gotoxy((col + 1) * dx, (row + 1) * dy);
	printf("%d", 1);
	for(i = 1; i < arrSize * arrSize; i++){
		if(i % arrSize != 0){
			row = row - 1 < 0 ? arrSize - 1 : row - 1;
			col = col - 1 < 0 ? arrSize - 1 : col - 1;
		}
		else
			row = row + 1 > arrSize - 1 ? 0 : row + 1;
		gotoxy((col + 1) * dx, (row + 1) * dy);
		printf("%d", i + 1);
		flushall();
	}
	
	getch();

}