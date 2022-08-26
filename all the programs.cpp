//1)wap in c to take array element from user and display them:
#include<stdio.h>
int main()
{
	int n,i,a[30];
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements of an array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

//2) wap in c to reverse the elements of an array:
#include<stdio.h>
int main()
{
	int i,n,a[30];
	printf("enter the size of an array:");
	scanf("%d", &n);
	printf("enter the elements of an array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=n;i>0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}



//3)wap inc to input 10 intergers and find the maximum and minimum:
#include<stdio.h>
int main()
{
	int i,a[10],max,min;
	printf("enter 10 numbers:");
	for(i=0;i<10;i++)
	scanf("%d\t",&a[i]);
	max=min=a[0];
	for(i=0;i<10;i++)
{
		if(max<a[i])
		{
		max=a[i];
	}
	if (min>a[i])
	{
		min=a[i];
	}
}
	printf("the maximum is %d and minimum is %d",max,min);
	return 0;
}


//4)wap in c to add numbers at even position of integer array of size 10:
#include<stdio.h>
int main()
{
	int i,n=10,a[10],sum=0;
	printf("enter 10 interger numbers:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if (i%2==0)
		sum=sum+a[i];
	}
	printf("the sum of the array at even position is %d",sum);
	return 0;
}


//5)wap in c to swap the given index value to another given index value:
#include<stdio.h>
int main()
{
	int i,n1,n2,a[10],b[10],temp;
	printf("enter the size of first array:");
	scanf("%d",&n1);
	printf("enter the element of first array:");
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	printf("enter the size of second array:");
	scanf("%d",&n2);
	printf("enter the element of second array:");
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n1;i++)
	{
	
	for(i=0;i<n2;i++)
	{
		temp=a[i];
		a[i]=b[i];
	     b[i]=temp;
	}
}
	printf("the first array after swap is:");
	for(i=0;i<n1;i++)
	{
	printf("%d\t",a[i]);
	}
	printf("\nthe second array after swap is:");
		for(i=0;i<n2;i++)
		{
			printf("%d\t",b[i]);
		}
		return 0;
}



//6)wap in c to add two array integer and store in the third array:
#include<stdio.h>
int main()
{
	int i,n1,n2,a[30],b[30],c[30];
	printf("enter the size the first array:");
	scanf("%d",&n1);
	printf("enter the element of first array:");
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	printf("enter the size of second array:");
	scanf("%d",&n2);
	printf("enter the element of second array:");
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n1;i++)
	{
		for(i=0;i<n2;i++)
		{
			c[i]=a[i]+b[i];
		}
	}
	printf("the addition of two array is:");
	for(i=0;i<n1;i++)
	{
		for(i=0;i<n2;i++)
		{
	printf("%d",c[i]);}
}
	return 0;
}


//7)wap in c to store the age of 20 students and find the second largest age:
#include<stdio.h>
int main()
{
	int i,n,a[30],max,secondmax;
	printf("enter the age of 20 students:");
	for(i=0;i<20;i++)
	scanf("%d",&a[i]);
	for(i=0;i<20;i++)
     {
     	if(max<a[i])
     	{
		 
     	secondmax=max;
     	max=a[i];
	 }
	 else if (max>a[i] && a[i]>secondmax)
	 {
	 	secondmax=a[i];
	 }
}
	 printf("the second maximum element of an array is %d",secondmax);
	 return 0;
}

//8) take different word input from user and display those:
#include<stdio.h>
int main()
{
	char word[40];
	printf("enter any sentence:");
	gets(word);
	puts(word);
	return 0;
}

///9) wap in c to count the total number of spaces and total nuber of character in a string:
#include<stdio.h>
int main()
{
	char word[50];
	int i;
	int countspace;
	int countstring;
	printf("enter any sentence:");
	gets(word);
	for(i=0;word[i]!='\0';i++)
	{
		countstring++;
	if (word[i]==' ')
	countspace++;
}
printf("the total number of string is %d  and total number of space is %d",countstring,countspace);
return 0;
}

//10)wap in c to convert the given character lower into upper case without using string handling function:
#include<stdio.h> 
int main()
{
	char word[30];
	int i;
	puts("enter a sentence:");
	gets(word);
	for(i=0;word[i]!='\0';i++)
	if (word[i]>='a' && word[i]<='z')
	{
		word[i]=word[i]-32;
	}
	printf("%s",word);
	return 0;
}

//11) wap in c to check if the character is numerical,alpha,lower or upper:
#include<stdio.h>
int main()
{
	char c;
	puts("enter a chatacter:");
	scanf("%c",&c);
{
	if(c>='0' && c<='9')
	{
		printf("%c is numerical.",c);
	}
	if(c>='a' && c<='z')
	{
		printf("%c is lowercase alphabet.",c);
	}
	if(c>='A' && c<='Z')
	{
		printf("%c is uppercase letter.",c);
	}
}
	return 0;
}

//12)wap in c to check if the character is alphabet or not.
#include<stdio.h>
int main()
{
	char c;
	printf("enter a character:");
	scanf("%c",&c);
	{
		if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
		{
			printf("%c is alphabet.",c);
		}
		else
		{
			printf("%c is not alphabet.",c);
		}
		return 0;
	}
}

//13)wap in c to check if the string is palindrome or not without using string handling function:
#include<stdio.h>
#include<string.h>
int main()
{
	char string[40],temp[40];
	int length=0,i,j;
	int flag=1;
	//input string
	printf("enter a string:");
	scanf("%s",string);
	for(i=0;string[i]!='\0';i++)
	{
		length++;
	}
	//reverse a string
	length--;
	for(i=0;string[i]!='\0';i++)
	{
		temp[length]=string[i];
		length--;
	}
	//string compare
	for(i=0;string[i]!='\0';i++)
	{
		if (string[i]!=temp[i])
		flag= 0;
		break;
    }
	if(flag==1)
	puts(" palindrome.");
	else
	puts(" not palindrome.");
   return 0;
}


//14)give an example to show function call by value:
#include<stdio.h>
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a,b;
	printf("enter the value of a and b before swap:");
	scanf("%d %d",&a,&b);
	swap(a,b);
	printf("the value of a and b after swap is %d %d",a,b);
	return 0;
}

//15)give an example to show function call by reference:
#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main()
{
	int a,b;
	printf("enter the value of a and b before swap:");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("the value of a and b after swap is %d %d",a,b);
	return 0;
}

//16)wap in c to return sum ,subtraction and multiplication of two numbers using only one function:
#include<stdio.h>
void result(int *a1,int *b1,int *sum1,int *sub1,int *mul1)
{
	*sum1=*a1+*b1;
	*sub1=*a1-*b1;
	*mul1=*a1 * *b1;
}
int main()
{
	int a,b;
	int sum,sub,mul;
	printf("enter two numbers a and b:");
	scanf("%d %d",&a,&b);
	result(&a,&b,&sum,&sub,&mul);
	printf("the sum is %d\nthe subtraction is %d\nthe multiplication is %d\n",sum,sub,mul);
	return 0;
}


//17)wap in c to find the factorial of a user given number:
#include<stdio.h>
int main()
{
	int f=1,n,i;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("the factorial of the given number is %d",f);
	return 0;
}


//18)wap inc to find the factorial of a user given number using recursive function;
#include<stdio.h>
int factorial(int n)
{
	if(n==1 ||n==0)
	return 1;
	else
	return(n*factorial(n-1));
}
int main()
{
	int n;
	printf("enter any number:");
	scanf("%d",&n);
	if (n>=0)
	printf("the factorial of %d is %d",n,factorial(n));
	else
	printf("the factorial 0f only positive number is possible.");
	return 0;
}


//19)wap in c to find the fibonaccis series till nth term :
#include<stdio.h>
int main()
{
	int a=1,b=0,c=1,i,n;
	printf("enter the number of terms:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}

//20)wap inc to find the fibonacci series till nth term using recursive function:

#include<stdio.h>
int fibonacci(int);
int main()
{
	int n,i;
	printf("enter the number of terms:");
	scanf("%d",&n);
	printf("fibonacci series\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",fibonacci(i));
	}
	return 0;
}
int fibonacci(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return (fibonacci(n-1)+fibonacci(n-2));
}

//wap in c to print the sum of natural numbers till nth term.
#include<stdio.h>
int main()
{
	int i,n;
	int sum=0;
	printf("enter the number of terms:");//n=5
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=sum+i;//(4+3+2+1+0=10)
	}
	printf("the sum is %d ",sum);
	return 0;
	
}

//wap in c to find the sum of two matrices and store it in the third matrices.
#include<stdio.h>
int main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	printf("\nenter the value for matrix A:\n");
	for(i=0;i<2;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	printf("\nenter the value for matrix B:\n");
	for(i=0;i<2;i++)
	for(j=0;j<3;j++)
	scanf("%d",&b[i][j]);
	for(i=0;i<2;i++)
	for(j=0;j<3;j++){
	c[i][j]=a[i][j]+b[i][j];}
	printf("\nthe values of matrix  c are:\n");
	for(i=0;i<2;i++){
	
	for(j=0;j<3;j++)
	printf("%d ",c[i][j]);
	printf("\n"); 
	} 

	return 0;
}

//wap in c to find the sum of two matrices and store it in the third matrices using function.
#include<stdio.h>
#include<conio.h>
void addition(int a[2][3],int b[2][3]);
int main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	printf("enter the numbers for matrix A:\n");
	for(i=0;i<2;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
	printf("\nenter the value for matrix B:\n");
	for(i=0;i<2;i++)
	for(j=0;j<3;j++)
	scanf("%d",&b[i][j]);
	printf("\nthe values of matrix  c are:\n");
	addition(a,b);
	return 0;
}
void addition(int a[2][3],int b[2][3])
{
	int i,j,c[2][3];
	for(i=0;i<2;i++){
	for(j=0;j<3;j++)
	{
	c[i][j]=a[i][j]+b[i][j];
	printf("%d\t",c[i][j]);
}
	printf("\n"); 
}
}

//wap in c to find the largest element of an array using function.
#include<stdio.h>
void largestnumber(int n,int a[10]);
int main()
{
	int i,n,a[10];
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the elements of an array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the largest element of an array is:");
	largestnumber(n,a);
	return 0;
}
void largestnumber (int n,int a[10])
{
	int i,largest;
    largest=a[0];
    for(i=0;i<n;i++)
	if(largest<a[i])
	{
	largest=a[i];}
	printf("%d",largest);
	
}

//wap inc to transpose the matrix and store it in new matrix and display using a function.
#include<stdio.h>
#include<conio.h>
void transpose(int a[2][3]);
int main()
{
	int a[2][3],b[3][2],i,j;
	printf("enter the numbers for matrix A:\n");
	for(i=0;i<2;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
	printf("\nthe values of matrix B after transpose are:\n");
	transpose(a);
	return 0;
}
void transpose(int a[2][3])
{
	int i,j,b[3][2];
	for(i=0;i<2;i++) 
	{
	for(j=0;j<3;j++)
	{
	b[j][i]=a[i][j];
}}
for(i=0;i<3;i++) 
	{
	for(j=0;j<2;j++)
	{
	printf("%d\t",b[i][j]);
}
	printf("\n"); 
}
}


//wap in c to transpose a given matrix and store it in a new matrix.

#include<stdio.h>
int main()
{
	int a[3][2],i,j,b[2][3];
	printf("enter te value for matrix A:\n");
	for(i=0;i<3;i++)
	for(j=0;j<2;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	{
	for(j=0;j<2;j++)
	b[j][i]=a[i][j]; 
}
    printf("the matrix  after transpose is:\n");
    for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	printf("%d\t",b[i][j]);
	printf("\n");
} 
return 0;
}
	
	
////wap inc to find the largest element of a array :a[20]={1 2 3  4 5 }
#include<stdio.h>
int main()
{
	int a[20],i,n;
	int largest;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the element of an array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	largest=a[0];
	for(i=0;i<n;i++)
	{
		if(largest<a[i])
		{
			largest=a[i];
		}
	}
	printf(" the largest element is %d",largest);
	return 0;
	}	

//
////wap in c to find the sum of all the element of an integer array using pointer.
#include<stdio.h>
int main()
{
	int a[20],n,i;
	int *p;
	p=a;
	int sum=0;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the element of na array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum=sum+*p;
		p++;
	}
	printf("the sum is %d.",sum);
	return 0;
}

////wap in c to find the maximum in an integer array using pointer.
#include<stdio.h>
int main()
{
	int i,n,a[20],maximum;
	int *ptr;
	ptr=a;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements of an array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	maximum=*ptr;
	for(i=0;i<n;i++)
	{
		if (maximum<*(ptr+i))
		{
			maximum=*(ptr+i);
		}	
	}
	printf("the maximum elemet is %d",maximum);
	return 0;
}
 
 

////wap inc to find the smallest elemet of an integer array using pointer:
#include<stdio.h>
int main()
{
	int a[20],smallest,i;
	int *ptr;
	int n;
	ptr=a;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements of an array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	smallest=*ptr;
	for(i=0;i<n;i++)
	{
		if(smallest>*(ptr+i))
		{
			smallest=*(ptr+i);
		}
	}
	printf("the smallest element is %d",smallest);
	return 0;
}
 


//wap inc to find the second largest element of an array.
#include<stdio.h>
#include<limits.h>
int main()
{
	int n,a[20],i,max,secondmax;;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements f an array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
		secondmax=max;
		max=a[i];
	    }
	else if (a[i]<max && a[i]>secondmax)
	{
		secondmax=a[i];
	}
}
printf("the second maximum element is %d.",secondmax);
return 0;
}
// 
 
// //wap inc to find the second maximum element of an array using pointer.
 #include<stdio.h>
 int main()
 {
 	int a[20],n,i,max,secondmax;
 	int *p;
 	p=a;
 	printf("enter the size of the array:");
 	scanf("%d",&n);
 	printf("enter the elements of an array:");
    for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 	for(i=0;i<n;i++)
 	{
 		if(*(p+i)>max) 
		 {
 		secondmax=max;
 		max=*(p+i);
		 }
 		else if (*(p+i)<max && *(p+i)>secondmax)
		 {
 		secondmax=*(p+i);
		 }
	 }
	 printf("the second maximum element of an array is %d",secondmax);
	 return 0;
 }
// 
 
 
//array ko question ma a[i] ko thau ma *(p+i) rakhne ho nothing more than that. 
 
 
 
 
// //find the sum of natural numbers till nth term using DMA:
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 	int n,*p,i;
 	int sum=0;
 	printf("enter the number of terms: ");
 	scanf("%d",&n);
 	p=(int*) malloc (n*sizeof(int));
 	if(p==NULL)
 	{
 		printf("sorry! unable to allocate memory!");
 		exit(1);
	 }
	 for(i=0;i<n;i++)
	 {
	 	sum=sum+*(p+i);
	 }
	 printf("the sum of the natural number till %d term is %d",n,sum);
	 free(p);
	 return 0;
 }
// 
// 
////wap in c to arrange in ascending order using dma:
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,*p;
	int temp;
	printf("enter the size of the array:");
	scanf("%d",&n);
	p=(int*) malloc (n*sizeof(int));
	printf("enter the values:");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (*(p+i)>*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("the numbers ina ascending order:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	free(p);
	return 0;
}
// 
// //wap inc to arrange the number in ascening  and desceding order using dma,
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 	int i,j,n,temp,*p;
 	printf("enter the size of the array:");
 	scanf("%d",&n);
 	p=(int *) malloc (n*sizeof(int));
 	printf("enter the values:");
 	for(i=0;i<n;i++)
 	scanf("%d",(p+i));
 	for(i=0;i<n;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if (*(p+i)>*(p+j))
 			{
 				temp=*(p+i);
 				*(p+i)=*(p+j);
 				*(p+j)=temp;
			 }
		 }
	 }
	 printf("ascending order:\n");
	 for(i=0;i<n;i++)
	 printf("%d\t",*(p+i));
	 printf("\ndescending order:");
	 for(i=n-1;i>=0;i--)
	 printf("%d\t",*(p+i));
	 free(p);
	 return 0;
 }
// 
 //wap inc to find the maximum and minimum element of an array using dma.
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 	int i,n,max,min,*p;
 	printf("enter th size of the array:");
 	scanf("%d",&n);
 	p=(int*) malloc (n*sizeof(int));
 	printf("enter the values:");
 	for(i=0;i<n;i++)
 	scanf("%d",(p+i));
  max=min=*p;
 	for(i=0;i<n;i++)
 	{
 		if (*(p+i)>max)
 		{
 		max=*(p+i);
		 }
 		if(*(p+i)<min)
 		{
 		min=*(p+i);
		 }
	 }
	 printf("the maximum element is:%d\n",max);
	 printf("the mimimum element is:%d",min);
	 free(p);
	 return 0;
 }
 
// 
 //wap inc to store the marks of 5 students and find the heighest and lowest marks using dma.
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 	int i,n=5,temp,heighest,lowest;
 	int *p;
 	p=(int *) malloc (n*sizeof(int));
 	printf("enter the marks of 5 students:");
 	for(i=0;i<5;i++)
 	scanf("%d",(p+i));
 	heighest=lowest=*p;
 	for(i=0;i<5;i++)
 	{
 		if (*(p+i)>heighest)
 		{
 			heighest=*(p+i);
		 }
		 if (*(p+i)<lowest)
		 {
		 	lowest=*(p+i);
		 }
	 }
	 printf("the heighest marks is %d\nlowest marks is %d",heighest,lowest);
	 free(p);
	 return 0;
 }

 //wap in c to enter the age of 10 students and find the maximum age using function:
 #include<stdio.h>
 void maximum(int a[5]);
 int main()
 {
 	int n=5,i,a[5];
 	printf("enter the age of 5 studets:");
 	for(i=0;i<5;i++)
 	scanf("%d",&a[i]);
 	printf("the maximum age is");
 	maximum(a);
 	return 0;
 }
 void maximum(int a[5])
 {
 	int i,max;
 	max=a[0];
 	for(i=0;i<5;i++)
 	
 		if(max<a[i])
 		{
 			max=a[i];
		 }
	 
	 printf("%d",max);
 }
 

//wap in c to enter the age of 10 students and count the age between 18 and 25 from the array:
a[10]={1 2 3 6 8 9 5 67 43 23 } count=0 count++ garne 
#include<stdio.h>
int main()
{
	int n=10,i,count=0,a[10];
	printf("enter the age of 10 students:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]>18 && a[i]<25)
		count++;
}
	printf("%d.",count);
	return 0;
}
 
 
 //wap in c to enter the age of 5 students and count the age between 18 and 25 from the array usind dma:
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 	int i,n=5,*p,count=0;
 	p=(int *)malloc (n*sizeof(int)) ;
 	printf("enter the marks of 5 students:");
 	for(i=0;i<n;i++)
 	scanf("%d",(p+i));
 	for(i=0;i<5;i++)
 	{
 		if (*(p+i)>18 && *(p+i)<25)
 		count++;
	 }
	 printf("%d",count);
	 return 0;
	  }
 
// //wap in c to read n numbers and find all the even number between 20 and 60.
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	int n,i,a[10];
 	printf("enter the size of the array:");
 	scanf("%d",&n);
 	printf("enter the elements of an array:");
 	for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 	for(i=20;i<60;i++) 
	 {
 		if (a[i]%2== 0)
 		{
 	    printf("%d\t",a[i]);
 	}
 }
	 return 0;
 }
 
  
 
 
// 
// //wap in c to find the maximum and minimum element of an array.a[20]={1 4 8 9}
 #include<stdio.h>
 int main()
 {
 	int n,a[20],i,max,min;
 	printf("enter the size of the array:");
 	scanf("%d",&n);
 	printf("enter the elements of an array:");
 	for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 	max=min=a[0];
 	for(i=0;i<n;i++)
 	{
 		if (max<a[i]){
		 
 		max=a[i];
}

	 if(min>a[i])
{
	 	 min=a[i];

}
}
printf("the maximum is %d \nthe mimimum is %d",max,min);

 	
return 0;
 }
 
 
 //class test 4:
 
 //1)check if the user given number is palindrome or not.
 #include<stdio.h>
 int main()
 {
 	int n,rev=0,rem,orignal;
 	printf("enter a number:");
 	scanf("%d",&n);
 	orignal=n;
 	while(n>0)
 	{
 		rem=n%10;
 		rev=rem+rev*10;
 		n=n/10;
	 }
	 if(orignal==rev)
	 {
	 	puts("palindrome.");
	 }
	 else
	 {
	 	puts("not palindrome.");
	 }
	 return 0;
 }
 
 //2)check if the user given number is armstrong or not
 #include<stdio.h>
 int main()
 {
 	int n,orignal,rem,result=0;
 	printf("enter any number:");
 	scanf("%d",&n);
 	orignal=n;
 	while(n>0)
 	{
 		rem=n%10;
		result=result+rem*rem*rem;
		n=n/10;
	}
	if(orignal==result)
	{
		puts("armstrong");
	}
	else
	{
		puts("not armstrong");
	}
	return 0;
 }



 
 
 
 //4)find geometric series(1+1/2+1/3+1/4+.......)
 #include<stdio.h>
 int main()
 {
 	int n;
 	float sum=0;
 	printf("enter the value of n:");
 	scanf("%d",&n);
 	for(int i=1;i<=n;i++)
 	{
 		sum=sum+(float)1/i;
	 }
	 printf("the sum is %f",sum);
	 return 0;
 }
 
 //5)find harmonic series(a+ar+ar^2+ar^3+ar^4+.....)
 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	int n,a,r;
 	float sum=0;
 	printf("enter the number of terms:");
 	scanf("%d",&n);
 	printf("enter the value of a :");
 	scanf("%d",&a);
 	printf("enter the value of r:");
 	scanf("%d",&r);
 	for(int i=1;i<=n;i++)
 	{
 		sum=sum+(a*pow(r,i-1));
	 }
	 printf("the sum is %f",sum);
	 return 0;
 }
 

 
 //7)call by value
 #include<stdio.h>
 void swap(int a,int b);
 int main()
 {
 	int a,b;
 	printf("enter the value of a and b:");
 	scanf("%d%d",&a,&b);
 	printf("the value of a and b after swap is :");
 	swap(a,b);
 	return 0;
 }
 void swap(int a,int b)
 {
 	a=a+b;
 	b=a-b;
 	a=a-b;
 	printf("%d %d",a,b);
 }
 
 //8)call by reference
#include<stdio.h>
void swap(int *x,int *y);
int main()
 {
 	int a,b;
 	printf("enter the value of a and b:");
 	scanf("%d%d",&a,&b);
 	printf("the value of a and b after swap is :");
 	swap(&a,&b);
 	return 0;
 }
 void swap(int *x,int *y)
 {
 	int temp;
 	temp=*x;
 	*x=*y;
    *y=temp;	
 	printf("%d %d",*x,*y);
 }
 
 // 9)Write a program to write N numbers in file "number.txt" and then read it 
 //and display only even numbers in monitors..
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 	FILE*fp;
 	int n;
 	fp=fopen("number.txt","w+");
 	if(fp==NULL)
 	{
 		printf("error!");
 		exit(1);
	 }
	 printf("enter the value of n:");
	 scanf("%d",&n);
	 for(int i=0;i<n;i++)
	 {
	 	putw(i,fp);
	 }
	 printf("records added successfully:");
	 fclose(fp);
	 fp=fopen("number.txt","r");
	 int ch;
	 while((ch=getw(fp))!=EOF)
	 {
	 	if(ch%2==0)
	 	{
	 		printf("%d\t",ch);
		 }
	 }
	 fclose(fp);
	 return 0;
 }
 
 
 
// //11)Write a program to arrange 10 integer numbers in ascending order using function.
 #include<stdio.h>
 void ascending(int a[10]);
 int main()
 {
 	int n=10,a[10],i;
 	printf("enter 10 numbers:");
 	for(i=0;i<10;i++)
 	scanf("%d",&a[i]);
 	printf("the ascending order is:");
 	ascending(a);
 	return 0;
 }
 void ascending(int a[10])
 {
 	int i,j,temp;
 	for(i=0;i<10;i++)
 	{
 		for(j=i+1;j<10;j++)
 		{
 			if(a[i]>a[j])
 			{
 				temp=a[i];
 				a[i]=a[j];
 				a[j]=temp;
			 }
		 }
	 }
	 for(i=0;i<10;i++)
	 printf("%d\t",a[i]);
 }
 
 //12)Write a program to read employ id, name, post and salary of 20 employee
 // and display detail of those employee whose post is "clerk".
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 struct employee
 {
 	int id;
 	char name[10];
 	char post[20];
 	int salary;
 }e[5];
 int main()
 {
 	int i;
 	for(i=0;i<5;i++)
 	{
 		puts("enter id:");
 		scanf("%d",&e[i].id);
 		getchar();
 		puts("enter name:");
 		gets(e[i].name);
 		getchar();
 		puts("enter post:");
 		gets(e[i].post);
 		puts("enter salary:");
 		scanf("%d",&e[i].salary);
 		getchar();
	 }
	 struct employee e1;
	 printf("\nid\tname\tpost\tsalary\n");
	 for(i=0;i<5;i++)
	 {
	 	if (strcasecmp(e[i].post,"clerk")==0)
	 	{
	 		printf("\n%d\t%s\t%s\t%d\n",e[i].id,e[i].name,e[i].post,e[i].salary);
		 }
	 }
	 return 0;
 }
 
 
 
 
 //14)Write a program to print even number between 1 to 100.
 #include<stdio.h>
 int main()
 {
 	int i;
 	for(i=1;i<100;i++)
 	{
 		if(i%2==0)
 		{
 			printf("%d ",i);
		 }
	 }
	 return 0;
 }
//  //15)Write a program to read N numbers using DMA and then display only odd numbers.
  #include<stdio.h>
  #include<stdlib.h>
  int main()
  {
  	int n,*p,i;
  	printf("enter the number of elements you want to enter:");
  	scanf("%d",&n);
  	p=(int*) malloc (n*sizeof(int));
  	printf("enter the number of elements:");
  	for(i=0;i<n;i++)
  	scanf("%d",(p+i));
  	for(i=0;i<n;i++)
  	{
  		if(*(p+i)%2!=0)
  		{
  			printf("%d",*(p+i));
		  }
	  }
	  free(p);
	  return 0;
  }
 
 
 
 
 
 //18)Write a program to display first 10 terms of sequence 6, 3, 10, 5, 16, 8, 4, â€
 #include<stdio.h>
 int main()
 {
 	int i,n=6;
 	for(i=0;i<10;i++)
 	{
 		printf("%d\t",n);
 		if(n%2==0)
 		{
 			n=n/2;
		 }
		 else
		 {
		 	n=3*n+1;
		 }
	 }
	 return 0;
 }
 
 
 //19)print the patterns
 //# $ % & *
 //# $ % &
 //# $ %
 //# $
 //#
 #include<stdio.h>
 int main()
 {
 	int i,j;
 	char pattern[]="#$%&*";
 	for(i=0;i<5;i++)
 	{
 		for(j=0;j<5-i;j++)
 		{
 			printf("%c\t",pattern[j]);
		 }
		 printf("\n");
	 }
	 return 0;
 }
 
 



//21)Write a program to calculate b^n using recursive function.
#include<stdio.h>
#include<math.h>
int power(int b,int n);
int main()
{
	int n,i,b;
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("the root is %d",power(b,n));
	return 0;
}
int power(int b,int n)
{
	if(n==0)
	return 1;
	else if (n==1)
	return b;
	else
	return (b*power(b,n-1));
}


////22)Write a program that reads the n elements of an array using malloc() and display the elements using pointer variable.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n,a[20];
	printf("enter the number of elements you want to enter:");
	scanf("%d",&n);
	p=(int*) malloc (n*sizeof(int));
	printf("enter the elemets:");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	free(p);
	return 0;
}



////23)Write a program to read a line of text then count how many spaces are there.
#include<stdio.h>
#include<string.h>
int main()
{
	char word[30];
	int i,countspace;
	puts("enter any sentence:");
	gets(word);
	for(i=0;word[i]!='\0';i++)
	{
		if(word[i]==' ')
		countspace++;
	}
	printf("%d",countspace);
	return 0;
}


//24)Write a program to read the name, address and salary of 5 employees using array of structure.
//// Display information of each employee in ascending order of their name.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
	char name[20];
	char address[20];
	int salary;
}e[5];
int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		fflush;
		puts("enter name:");
		gets(e[i].name);
		getchar();
		puts("enter address:");
		gets(e[i].address);
		puts("enter salary:");
		scanf("%d",&e[i].salary);
		getchar();
	}
	struct employee e1;
	printf("\nname\taddress\tsalary");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcasecmp(e[i].name,e[j].name)>0)
			{
				e1=e[i];
				e[i]=e[j];
				e[j]=e1;
			}
		}
	}
	for(i=0;i<5;i++)
	printf("\n%s\t%s\t%d",e[i].name,e[i].address,e[i].salary);
	return 0;
}


////25)Write a program to open a file and copy all its content to another file.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE *fptr1,*fptr2;
	fptr1=fopen("abc.txt","r");
	if(fptr1==NULL)
	{
		printf("error!");
		exit(1);
	}
	fptr2=fopen("xyz.txt","w");
	if(fptr2==NULL)
	{
		printf("no file!");
		exit(1);
	}
	while((ch=fgetc(fptr1))!=EOF)
	{
		fputc(ch,fptr2);
	}
	fclose(fptr1);
	fclose(fptr2);
	printf("successfully copied");
	return 0;
}




//27)Write a c program to read a number from user and check whether it is palindrome or not?
#include<stdio.h>
int main()
{
	int n,orignal,rev,rem;
	printf("enter any number:");
	scanf("%d",&n);
	orignal=n;
	while(n>0)
	{
		rem=n%10;
		rev=rem+rev*10;
		n=n/10;
	}
	if(orignal==rev)
	{
		printf("%d is palindrome.",orignal);
	}
	else
	{
		printf("%d is not palindrome.",orignal);
	}
	return 0;
}



//29)Write a program to sort n numbers in ascending order using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*p,j,temp;
	printf("enter number of elements you want to enter:");
	scanf("%d",&n);
	p=(int*) malloc (n*sizeof(int));
	printf("enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("ascending order:");
	for(i=0;i<n;i++)
	printf("%d\t",*(p+i));
	free(p);
	return 0;
}


//30)Write a program that read n records of structure student with members id, name, faculty, and marks.
//// Display the records of those student having id is even. 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[30];
	int id;
	char faculty[40];
	int marks;
};
int main()
{
	int n;
	printf("enter the number of students you want to enter:");
	scanf("%d",&n);
	struct student s[n];
	int i;
	for(i=0;i<n;i++)
	{
		getchar();
		puts("enter name:");
		gets(s[i].name);
		puts("enter id:");
		scanf("%d",&s[i].id);
		getchar();
		puts("enter faculty:");
		gets(s[i].faculty);
		getchar();
		puts("enter marks:");
		scanf("%d",&s[i].marks);
		getchar();
	}
	struct student s1;
	printf("\nname\tid\tfaculty\tmarks");
	for(i=0;i<n;i++)
	{
		if(s[i].id%2==0)
		{
			printf("\n%s\t%d\t%s\t%d",s[i].name,s[i].id,s[i].faculty,s[i].marks);
		}
	}
	return 0;
}
 


//31) Write a C program using structure that reads the records
//of 35 students with members roll, name, address and markes and display the record of
//students who have obtained greater than 250 marks.
////note:getchar rakhda character linu vanda mathi rakhne ho.....
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[30];
	int roll;
	char address[40];
	int marks;
}s[5];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		puts("enter name:");
		gets(s[i].name);
		puts("enter roll number:");
		scanf("%d",&s[i].roll);
		getchar();
		puts("enter address:");
		gets(s[i].address);
		puts("enter marks:");
		scanf("%d",&s[i].marks);
		getchar();
	}
	struct student s1;
	printf("\nname\troll\taddress");
	for(i=0;i<5;i++)
	{
		if(s[i].marks>250)
		{
			printf("\n%s\t%d\t%s\t%d",s[i].name,s[i].roll,s[i].address,s[i].marks);
		}
	}
	return 0;
}
 
 
 //32)Write a program to open a file and count the number of lines in that file.
 #include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	int count=1;
	FILE *fptr1;
	fptr1=fopen("abc.txt","r+");
	if(fptr1==NULL)
	{
		printf("error!");
		exit(1);
	}
	
	while((ch=fgetc(fptr1))!=EOF)
	{
		if(ch=='\n')
		{
			count++;
		}
	}
	fclose(fptr1);
	printf("%d",count);
	return 0;
}
 

////matrix multiplication:
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,sum=0,k;
	printf("ENTER THE VALUE FOR MATRIX A:\n");
	for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("\nENTER THE VALUE FOR MATRIX B:\n");
	for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    	for(k=0;k<3;k++)
    {
    	sum=sum+a[i][k]*b[k][j];
	}
	c[i][j]=sum;
}
}
	printf(" \nTHE VALUES FOR MATRIX C ARE:\n");
	for(i=0;i<3;i++)
	{
    for(j=0;j<3;j++)
    {
    	printf("%d\t",c[i][j]);
	}
	printf("\n");
}
	return 0;	
	
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 







