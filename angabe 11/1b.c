#include<stdio.h>
int count1(int number,int array[],int length);
int count=0;
int main()
{
                  int i,length,number,count;
                  printf("enter the length of the array: ");
                  scanf("%d",&length);
                  int array[length];
                  printf(" enter array elements: ");
                  for(i=0;i<length;i++)
                  scanf("%d",&array[i]);
                  printf("enter the number to be counted: ");
                  scanf("%d",&number);
                  count=count1(number,array,length);
                  printf("%d",count);
                  return 0;
}
int count1(int number,int array[],int length)
{
                  if(length>0)
                 {
                           if(array[length-1]==number)
                           count++;
                           length--;
                           count1(number,array,length);
                           return count;
                 }
                 else return count;
}