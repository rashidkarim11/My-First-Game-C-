#include<iostream>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<iomanip>
#include<stdio.h>
#include<fstream>
#include<string.h>

using namespace std;
int  x=0,y=0,k=0,m=10;//variables for row and coloum
int c=3;//variable to run programe untill user terminte
int f=3,p=12;
int gl=0;//variable to store game level
char o='y';
void line(int);
int main()

{

srand(time(NULL));
int a=0,b=0;
   
char ch[30][30];//30 by 20 2d array to print (  --  )
char cg;
int rn[p],rn1[p],rn3[p];//random number to print cross randomly
int w=0;
string name,line;//strring type variable to store player name


cout<<"Hunza touristan\t\t\t\t\t\t\t   RR production\n\n\n\n\n\n\t\t\t\t:WELCOME :\n\t\t\t\t---------\n\n\n";

        cout<<"enter your name:";
        getline(cin,name);
        system ("cls");
//sleep( 600);



while(o=='y'||o=='Y')
{
     
     
 
       
     

   
    cout<<"Hunza touristan\t\t==========WELCOME TO STEP DOWN =========   RR production\n\t\t\t\t   GAME";
cout<<"\n\n\n\n\n";


cout<<"\t\t\t\t\t\t      ========================\n";
cout<<" -----------------------"<<"\t\t\t      : remaining lifes are "<<f<<":";
cout<<endl<<" : to move right use (s):"<<"\t\t\t      : Game level is "<<gl<<"      :"<<"\n :   to move left (a)\t: \n : next line use (d)    :\t\t\t      ======================== \n : NOTE:DONT TOUCH THE X:\n -----------------------"<<endl;



for(int i=0;i<=25;i++)

{
        cout<<"  \t\t\t";
int w=0;
for(int j=0;j<=20;j++)
{      
   
     if(i==k&&j==m)
{
cout<<"O";
if (rn[w]==i||rn1[w]==i||rn3[w]==i)//if radom cross and (o) is equall  1 life will decreament
         {
       
        f--;
        }
}
 
else if (rn[w]==i||rn1[w]==i||rn3[w]==i)//it will print cross randomly
{
cout<<"x";
}

    else
  {
      ch[i][j]='-';//on the remaning pkaces it will print ( --  )
       cout<<ch[i][j];
      }
         w++;
   }

        cout<<endl;
    }
             
   
   cout<<"_______________________________________________________________________________";
     cg=getche();//it will input user command
    // Sleep( -20 );
      if(cg=='s')//if user press s coloum position of charcter (o) will increament
      {
      m++;
      if(m>20)//if character reaches postion 20 in coloum it will increament row as well
      {
      k++;
     
}
}
if (cg=='a')
{
m--;
}
else if(cg=='d')
{
k++;
}
else if(cg=='f')
{
k--;
}
if(k==12)
{
m=0;
k=0;
p++;
gl++;


for(w;w<=29;w++)
{
rn[w]=(rand()%29+1);
rn1[w]=(rand()%29+1);
rn3[w]=(rand()%29+1);
    }
w=0;


}
system("cls") ;//clrscrn();
 if(f==0)//it will output below file when remaing life will equall to zero
     {
 ofstream data("myfile1.txt");//creating file to store user name and his/her score
         if(data.is_open())
         {
          data<<"palyer name :"<<name<<endl;
        data<<"your level was:"<<gl;
        data.close();
         }
     else
         {
       cout<<"unable to open file :";
         }
   fstream dat("myfile1.txt");
       if(dat.is_open())
          {
   while (getline(dat,line))
     {
   cout<<endl;
    cout<<line;
         }

    dat.close();
       }

cout<<"\n\n\n\n\n:\t\t\t\t:BETTER LUCK NEXT TIME:\n";
cout<<"DO YOU WANT TO PLAY AGAIN:";
    cin>>o;
    system("cls");
    if(o=='y'||o=='Y')//when user wants to play again it will chage all below variables to orignal value
     {
          c==3;
          gl=0;
          m=8;
          f=3;
           k=0;
    }
  }


else if(o=='n'||o=='N')
{
c=='n';
cout<<"\t\t\t : GOOD BYE :";
}

}



return 0;
}
void line(int x)
{
for(int i=1;i<=x;i++)
{
cout<<1;
}
}
