//binarsearch
#include <stdio.h>
int c = 0;
int d = 0;
int binarySearch(int n, int a[], int l)
{
	int left = 0;
	int right = l - 1;

	while (left<=right){
		int mid =(left + right)/2;
		if(n==a[mid])
		{
			c = 1;
			return mid;
		}
		else if(n < a[mid]){
			right=mid -1;
		}
		else if(n > a[mid]){
			left = mid + 1;
		}
	}
	return -1;
}

int linearSearch(int n,int a[], int l) {
	int q;
	for (q=0;q<l;q++){
		if (a[q]== n){
			d = 1;
			return q;
		}
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	int l,i;
	int pos,pos1;
	int a[l];
	int num;
	printf("Geben Sie die Laenge der Reihung ein: ");
	scanf("%d",&l);
	printf("Geben Sie die Zahlen in der Reihung: ");
	for(i=0;i<l;i++){
         scanf("%d",&a[i]);
    }
    printf("Nummer, um zu suchen: ");
    scanf("%d",&num);
    pos = binarySearch(num,a,l);
    linearSearch(num,a,l);
    if(c==0){
        printf("Es gibt keine Zahl, die die Bedingung efuellt\n");
    }
    else{
        printf("Die Zahl ist an der Position %d\n",pos);
    }
	return 0;
}