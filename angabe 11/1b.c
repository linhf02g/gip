#include<stdio.h>
int count1(int number,int array[],int length);
int count=0;
int main()
{
  int i,length,number,count;
  printf("Die Laenge von array: ");
  scanf("%d",&length);
  int array[length];
  printf("Elementen von array : ");
  for(i=0;i<length;i++){
    scanf("%d",&array[i]);
  }
  printf("Nummer: ");
  scanf("%d",&number);
  count=count1(number,array,length);
  printf("%d",count);
  return 0;
}
int count1(int number,int array[],int length)
{
  if(length>0)
  {
    if(array[length-1]==number){
      count++;
      length--;
      count1(number,array,length);
      return count;
    }
  }
  else return count;
}