#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
#include<iostream.h>
#include<string.h>
#include<time.h>
#include<graphics.h>
#include<dos.h>

void strjum()
{
 clrscr();
 fstream fil;
 fil.open("doc.txt", ios::in);
 char arr[50][200], a[50][200], tac[50][200], temp[100];

 int x=0,y=0, m=0, c,n, s=0, t=0;
 srand(time(NULL));

cout<<"\t\t\t";
printf("Solve the jumbled sentences");
gotoxy(25,8);
printf("  You only got 3 chances");
cout<<endl<<endl<<endl<<endl<<"\t\t\t\t";
cout<<"RULES:"<<endl;
cout<<"\t\t 1.Keep an eye out for commas and fullstop"<<endl;



getch();
int scr=0, count=0;
char ans[200];

 while(fil.getline(arr[m],200))
 {
	for(int i=0; arr[m][i]!='\0'; i++)
	{
		a[x][y]=arr[m][i];
		y++;
		if(arr[m][i]==' ' || arr[m][i]=='.')
			{
				a[x][y]='\0';
				x++;
				y=0;
			}
	}
	c=x-1;
	while(c>=0)
	{
		n=rand()%x;

		strcpy(temp,a[n]);
		strcpy(a[n],a[c]);
		strcpy(a[c],temp);
		c--;
	}


       /*
	for(int k=0; arr[m][k]!='\0'; k++)
	{
		tac[m][k]=a[s][t];
		t++;

		if(a[s][t]=='\0')
		{
			s++;
			t=0;
		}
	}
       */
clrscr();


for(int j=0; j<x; j++)
{
  cout<<a[j];
}
  cout<<endl<<endl<<endl;
	cout<<"Enter your answer"<<endl;
	gets(ans);

	if(strcmpi(arr[m],ans)!=0)
	{
		cout<<endl<<endl<<"Wrong ans";
		cout<<endl<<endl<<"The correct answer is: ";
		cout<<"\n"<<arr[m];
		count++;
	}

	else
	{
		scr++;
		cout<<endl<<"Right Answer";
	}

	cout<<endl<<"\t\t\t\t\t The score is: "<<scr;


getch();

//cout<<tac[m]<<" "<<s<<endl<<endl;
	m++;
	x=0;
	s=0;

      if(count==3)
      {
	clrscr();

while(!kbhit())
{       gotoxy(35,13);
	printf("GAME OVER");
	clrscr();
}
	break;
      }
// cout<<endl;

}

//for (int r=0; r<m; r++)
 //	 cout<<tac[r]<<endl<<endl;

/*
int cro=0, num[100], xae;

for(int r=0; r<m; r++)
{
	num[r]=r;
  //     cout<<num[r]<<" ";
}
cout<<endl;
while(cro<m)
{
xae=rand()%m;
int tempo=num[xae];
num[xae]=num[cro];
num[cro]=tempo;
cro++;
}

//for(int e=0; e<m; e++)
//cout<<num[e]<<" ";
//textcolor(67);

cout<<"\t\t\t";
printf("Solve the jumbled sentences");
gotoxy(25,8);
printf("  You only got 3 chances");
getch();

int count=0, scr=0;
char ans[200];

for(int f=0; f<m ; f++)
{
	clrscr();
	cout<<tac[num[f]];
	cout<<endl<<endl<<endl;
	cout<<"Enter your answer";
	cin>>ans;

	if(strcmp(ans,arr[num[f]])==0)
	{
		cout<<endl<<endl<<"Correct ans";
		scr++;
	}
	else
	{
		count++;
		cout<<"Wrong Answer";
	}

	cout<<"\t\t The score is: "<<scr;
}

*/
 getch();
}

void jumble()
{ clrscr();
int xe;
while(!kbhit())
{ delay(15);
gotoxy(29,12);
 xe=rand()%26+65;
textcolor(xe);
cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe);
gotoxy(29,13);
cprintf("%c%c%c WORD  JUMBLER %c%c%c",xe,xe,xe,xe,xe,xe);
gotoxy(29,14);
cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe,xe);
}
textcolor(15);
   getch();
   srand(time(NULL));
  clrscr();
fstream fil;
fil.open("diary.TXT",ios::in);
  char br;
 int x,wjx, point=0,p=0;
 char arr[1000][20];
while(!fil.eof())
{ fil>>arr[p];
p++;
}
long char array[1000][30];


for(int o=0; o<1000; o++)
strcpy(array[o],arr[o]);

 int n[1000];
 for(int k=0; k<1000;k++)
 {
    for(int l=0; arr[k][l]!='\0'; l++);
    n[k]=l;
 }


int flag=0;

for( int m=rand()%20; m<1000 && flag<=4; m=m+rand()%30+1)
{  clrscr();
char b[100];
int c=n[m]-1;

while(c>=0)
{
x=rand()%n[m];
int temp=arr[m][x];
arr[m][x]=arr[m][c];
arr[m][c]=temp;
c--;
}
printf("\nGuess the word \n");
for(int j=0; j<=n[m]; j++)
printf("%c",arr[m][j]);

 printf("\nnow enter your answer\n");
 gets(b);

 if(strcmpi(b,array[m])==0)
 {
 printf("\ncongrats correct answer \n");
 point++;
   }
 else
{
 printf("oops wrong answer\n");
  cout<<"the answer is "<<array[m];
 flag++;
 }
 printf("\t\t\tyour score is %d", point);
getch();

}

//getch();
}
/*
void file()
{
fstream pname;
char pn[80];
pname.open("PLAYER_N.TXT", ios::in);
while(pname.getline(pn,80))
{
	for(int pj=0; pj<strlen(pn); pj++)
	printf("%c",pn[pj]);
	cout<<endl;
}
}
*/

void ridal()
{
clrscr();
//_______________________________________
/*

   int gd = DETECT, gm;
    int ir, xr, yr;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    int pixrand;

 while (!kbhit())
 {
     for(ir=1; ir<=500; ir++)
      {
       xr=rand()%getmaxx()+1;
	  yr=rand()%getmaxy()+1;
	  putpixel(xr,yr,15);
      }
      delay(100);
      cleardevice();
    }
    closegraph();
getch();
//_______________________________________
//starting screen
*/

int dlevel, color;
while(!kbhit())
{
color=rand()%13+2;
textcolor(color);
gotoxy(25,8);
cprintf("Enter Player's Name: ");
gotoxy(25,9);
cprintf("Enter the LEVEL you wanna Play: ");
gotoxy(17,10);
cprintf("\n\n\t\t\t\t     I");
cprintf("\n\t\t\t\t       II");
cprintf("\n\t\t\t\t       III");
cprintf("\n\t\t\t\t       IV");
}
gotoxy(46,8);

char playername[20];
cin>>playername;
gotoxy(57,9);
scanf("%d",&dlevel);



//once you enter a higher number it wont accept small ones

getch();

if(dlevel>4)
{
clrscr();
cout<<"\n\n\n\n\t\t\t\tWRONG LEVEL ENTERED";
getch();
exit(0);
}


//______________________________________
srand(time(NULL));

// storing questions
fstream fil;
fil.open("QUEST.TXT",ios::in);
char lin[40][300];
int i=0,j=0;
while(!fil.eof())
{
	while(fil.getline(lin[i],300))
	i++;
	}

//______________________________
//storing answers
fstream fish;
fish.open("ANS.TXT",ios::in);
char fin[40][300];
i=0;

while(!fish.eof())
{
	fish>>fin[i];
	i++;
	}
//_____________________________________

char c[40][300];
int z[100];
char y[4];

//_____________________________________
//making a copy of answers
for( int l=0; l<31; l++)
{
 for( int m=0; m<strlen(fin[l]); m++)
 {
 c[l][m]=fin[l][m];
 }
}
//_____________________________________
for(int ij=0; ij<30 ; ij++)
{
z[ij]=strlen(fin[ij]);
for( j=0; j<dlevel ; j++)
{
y[j]=rand()%26+97;

}

for(int k=0; k<dlevel; k++)
{
 c[ij][z[ij]+k]=y[k];
}


}

//RANDOM QUESTIONS
int cro=0, num[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
int xae;
while(cro<30)
{
xae=rand()%30	;
int tempo=num[xae];
num[xae]=num[cro];
num[cro]=tempo;
cro++;
}

//___________________________________________
//the main game starts here

int xe,point=0, flag=0;

for( int n=0; n<30 && flag!=5; n++)
{

textcolor(15);
clrscr();
char b[100];
int znew[31];
znew[num[n]]=strlen(c[num[n]]);
int cm=znew[num[n]]-1;



while(cm>=0)
{
xe=rand()%znew[num[n]];
int temp=c[num[n]][xe];
c[num[n]][xe]=c[num[n]][cm];
c[num[n]][cm]=temp;
cm--;
}


printf("\nGuess the answer \n\n");
cout<<lin[num[n]]<<endl;
cout<<"\n\t\t\t\t";
for( int jk=0; jk<=znew[num[n]]; jk++)
{
  //gets buggy so remove
printf("%c ", c[num[n]][jk]);
}
cout<<endl;

 printf("\nNow enter your answer\n");
 gets(b);

 if(strcmpi(b,fin[num[n]])==0)
 {
 printf("\ncongrats correct answer \n");
 point++;
   }
 else
{ printf("\toops wrong answer\n");
  cout<<"\tthe answer is "<<fin[num[n]];
 flag++;
 }
 printf("\t\t\t\t your score is %d", point);

getch();
}
clrscr();
getch();
cout<<"\t\n\n\n\n\n             THE FINAL SCORE OF "<<playername<<" is "<<point<<endl;
//___________________________________
//closegraph();

//fstream pname;
//pname.open("PLAYER_N.TXT",ios::app | ios::out);
//pname<<playername<<" ";
//pname<<point<<endl;

//reading and writing of a file cannot happen in the same function

//file();

//pname.close();
fish.close();
fil.close();
getch();
//exit(0);

}


void main()
{
clrscr();
int in;
char ch;
do
{

cout<<"\t\t\tWelcome to the play zone\n\n\n";
cout<<"\t\t CHOOSE WHICH GAME YOU WOULD LIKE TO PLAY\n\n\n\n";
cout<<"\t\t\t  1. JUMBLED WORDS\n\n";
cout<<"\t\t\t  2. JUMBLED SENTENCES \n\n";
cout<<"\t\t\t  3. MIND RIDDLER \n\n\t\t\t    ";
cin>>in;

switch(in)
{
case 1:
	jumble();
	clrscr();
	break;

case 2:
	strjum();
	clrscr();
	break;

case 3:
	ridal();
	clrscr();
	break;

default:
	clrscr();
	gotoxy(35,8);
	cout<<"Wrong Input";
	getch();


}
clrscr();
gotoxy(20,8);
cout<<"Would you like to play more? Press y/n\n";
	cin>>ch;
getch();
clrscr();
}
while(ch=='y');

getch();
}