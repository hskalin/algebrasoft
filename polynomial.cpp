#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int tonum(char c)
{
		return (((int)(c))-48);
}
void main()
{
clrscr();
int deg,coeff[500],i,j,ct=0;
char poly[1000],polyr[1000];
cout<<"Enter the degree of polynomial"<<endl;
cin>>deg;
cout<<"Enter the polynomial using ^ sign for exponent. Ensure to enter the polynomial with exponents in decreasing order the coefficients must be non negative."<<endl;
gets(poly);
strcpy(polyr,strrev(poly));
for(i=0;i<1000;i++)
	{
	if(isdigit(*(polyr+i)))
		{
		if(isdigit(*(polyr+i+1)))
			{
			for(j=i;;j++)
				{
				ct=ct*10+(tonum(*(poly+j)));
				if(!(isdigit(*(polyr+j+1))))
					{
					coeff[i]=ct;
					i=j;
					break;
					}
				}
			}
		else
			{
			coeff[i]=tonum(*(polyr+i));
			}
		}
	else
		continue;
	}
cout<<"The constant term is "<<coeff[0]<<endl;
cout<<"The deg 1 term is "<<coeff[1];
getch();
}
