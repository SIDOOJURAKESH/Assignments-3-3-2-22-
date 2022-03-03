#include<stdio.h>
int main()
{

	char ch[6]={'r','a','k','e','s','h',};
	int a[5],i;
	int b[5]={1,2,3,4,5};
	int c[]={1,2,3,4,5,6,7,8};
	int e[5]={1,2,3,4,5};
	int arr[5];
	for(i=0;i<5;i++)
	printf("address of [%d]char elements:%p\n",i,&ch[i]);
	
	
	printf("elements of array:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
//---------------------------------1st method-----------------//	
	printf("array of elements b:");
	for(i=0;i<5;i++)
		printf("%d\t",b[i]);
	printf("\n");
//----------------------------------2nd method -----------------//	
	printf("array of elements c:");
	for(i=0;i<8;i++)
		printf("%d\t",c[i]);
	printf("\n");
	
	//--------------------------------without using for/while lopp---------//
	
	printf("address of elements without using for/while loop:\n");
	printf("array of address of [%d] element of array:%p\n",b[0],&b[0]);
	printf("array of address of [%d] element of array:%p\n",b[1],&b[1]);
	printf("array of address of [%d] element of array:%p\n",b[2],&b[2]);
	printf("array of address of [%d] element of array:%p\n",b[3],&b[3]);
	printf("array of address of [%d] element of array:%p\n",b[4],&b[4]);


       





//----------------------------	using whileloop--------------------------//
	printf("using while loop:\n");
	int j=0;
	while(j<5)
	{
		printf("array of elements:%d\n",e[j]);
		j++;
	}

//------------------------4th method --------------//
for(i=0;i<5;i++)
{
printf("enter the 5 elements \n");
scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
printf("entered array elements are %d\n",arr[i]);
}

    
   
  





