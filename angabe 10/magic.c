//magic square
#include <stdio.h>
#include <conio.h>
int main (){
	int magic[99][99];
	int n;
	printf("Geben Sie die Grosse von magischem Quadrat:\n");
	scanf("%d",&n);
	int sum;
	sum = (n*n*n +n)/2;
	printf("Sum of each col and row: %d\n", sum);
	int start = n/2;
	int max = n*n;
	magic[n-1][start]=1;

	int cur_col;
	int cur_rol;
	int next_col;
	int next_rol;
	int num;

	for(num=2,cur_rol=n-1,cur_col=start;num<=max;num++){ // chua sua gia tri 0 = n
		if ((cur_col+1)>(n-1)){
			next_col=0;
		}
		else{
			next_col=cur_col+1;
		}
		if ((cur_rol+1)>(n-1)){
			next_rol=0;
		}
		else{
			next_rol=cur_rol+1;
		}
		if(magic[next_rol][next_col]!=0){
				next_rol = cur_rol-1;
				next_col = cur_col;
		}
		cur_rol=next_rol;
		cur_col=next_col;
		magic[cur_rol][cur_col]=num;

	}
	int i,j;
	for(i=0;i<n;i++){
		for (j = 0; j<n;j++)
		{
			printf("%4d", magic[i][j]);
		}
		printf("\n");
		
	}

	getch();
}