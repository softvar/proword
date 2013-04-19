#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<process.h>
#include<string.h>
#include<malloc.h>
#define makestr(s) # s
int color;
int lines;
int bco;
struct word{
	    char s[20];
	    struct word *next;
	    struct word *prev;
	    struct alpha *link;
	    }*start=NULL,*temp,*end;
struct alpha{
	     char a;
	     struct alpha *next1;
	     struct alpha *prev1;
	     }*start1=NULL,*temp1,*end1;


struct linex
{
int jx;
struct linex * agla;
}*head,*tem;

struct dir
{
int posx;
int lno;
struct dir * nxt;
}*dirhead,*dirtemp,*dirend;
void pusd(int,int);
int popd(int);

void push(int);
int pop(void);
void scupdate(void);
void wr2file(struct word *);
struct word *trw;
struct alpha *tra;


struct cflow {int rang;
	      struct cflow *cnext,*cprev;
	     }*cstart,*cend,*ctemp;
struct cflow * ccreate();
void draw(struct cflow *);
void rect1(int,int,int,int);
void rect2(int,int,int,int);
int flow(struct cflow *);
int coverflow(struct cflow *);
void drcase(int);
char * matchcolor(int);

struct node{char name[20];
	    struct node *n;
	   }*s,*t,*e;
int i,x;
int colour=9;
int menu(int);
void keystroke(int);
void open();
void fnew();
void notebook();
void help();
void abc(int,int,int);
void fileopen(FILE *);
char *serch(void);
void proword();
void pos(char [7][7],int);
int login(void);
char * search(void);
void wait1();
int selector(void);
void spellcheck(char [20]);
void main()
{clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"");
 int c,pass;
 cstart=ctemp=cend=NULL;
 proword();
 pass=login();
 if(pass==0)
 {cleardevice();
  settextstyle(1,0,2);
  setcolor(1);
  wait1();
  outtextxy(120,200,"You seem to be unaware of the app");
  outtextxy(200,250,"Exiting...");
  getch();
  exit(0);
 }
 else
 {
 wait1();
 //getch();
 cleardevice();
 settextstyle(0,0,1);
 c=menu(colour);
 keystroke(c);
 }
 getch();
}
void proword()
{int x,t,i=-1;
 int o,m,f,g,l,v,k,z;
 char no[7][7]={"P","R","O","W","O","R","D"};
 settextstyle(0,0,4);
 for(t=0;t<(52*7);t+=52)
 {i++;
  for(x=0;x<100;x+=10)
  {cleardevice();
   if(i>0)
   {pos(no,i-1);}
   outtextxy(140+t,0+x,no[i]);
   sound(t*t+t*x*x);
   delay(35);
   nosound();
   if(i==6)
   {cleardevice();
   }
  }
  pos(no,i);
 }
 settextstyle(0,0,0);
 outtextxy(490,85,"TM");
 setcolor(RED);
 for(l=10;l<640;l+=10)
  { for(v=1;v<10;v++)
   {
    line(0,0+v,0+l,0+v);
   }
   delay(30);
  }
 for(k=10;k<480;k+=10)
  { for(z=1;z<10;z++)
   {
    line(630+z,0,630+z,0+k);
   }
   delay(30);
  }
 for( o=10;o<640;o+=10)
  { for( m=1;m<10;m++)
   {
    line(640,480-m,640-o,480-m);
   }
   delay(30);
  }
 for(f=10;f<640;f+=10)
  { for(g=1;g<10;g++)
   {
    line(10-g,480,10-g,480-f);
   }
   delay(30);
  }
  notebook();
  getch();
}
void pos(char no[7][7],int i)
{int j,k;
 char ar[10][10];
 for(j=0,k=0;j<=i;k+=52,j++)
 {
  setcolor(j+1);
  strcpy(ar[j],no[j]);
  outtextxy(140+k,100,ar[j]);
 }
}
void notebook()
{int i,j;
 setcolor(RED);
 line(200,250,200,400);//
 line(400,250,400,400);
 line(200,250,300,300);//
 line(200,400,300,450);
 line(300,300,400,250);//
 line(300,450,400,400);
 setfillstyle(1,14);
 floodfill(290,325,RED);
 setcolor(1);
 line(300,300,300,450);//
 for(i=10;i<150;i+=10)
 {line(200,250+i,300,300+i);//
 }
 for(j=10;j<150;j+=10)
 {line(300,300+j,400,250+j);//
 }
}
int login(void)
{
 int wrch,ok;
 ok=0;
 wrch=0;

   char tp[30]="root";
   char usd[30]="wolf";
   char pa[30];
   int k;//y;
   k=0;//y=0;
   while(tp[k])
   {
    pa[k]=tp[k] + 5;
    k++;
    }

  //do
  //{
     cleardevice();
     setcolor(RED);
/*     for(int oi=0;oi<10;oi++)
     {
     rectangle(0+oi,0+oi,640 -oi,480-oi);
     }  */
  if(wrch>3)
  exit(0);
   setbkcolor(GREEN);
   setcolor(BROWN);

   settextstyle(1,0,0);
   outtextxy(200,100," LOGIN WINDOW ");
   settextstyle(0,0,0);
   setcolor(YELLOW);
   rectangle(206,196,354,224);
   setcolor(CYAN);
   bar(210,200,350,220);
   setcolor(YELLOW);
   outtextxy(60,210,"USERNAME");
    setcolor(CYAN);
   bar(210,260,350,280);
   setcolor(YELLOW);
   outtextxy(60,270,"PASSWORD");
   int i;
   i=0;
   char tem[2];
   char ch;
   setcolor(BLACK);
   settextstyle(0,0,1);
   setcolor(BLACK);
   int df;
   //int cnt=0;

 i=0;
   char us[30];
   us[0]='\0';
    tem[0]='\0';
    ch=0;
   while(ch!=13)
   {
	while(!kbhit())
    {
     setfillstyle(1, WHITE);
    bar(215+(i*7),214,222+(i*7),215);
    delay(100);
    setfillstyle(1,RED);
    bar(215+(i*7),214,222+(i*7),215);
    delay(100);
    }
       setfillstyle(1, WHITE);
    bar(215+(i*7),214,222+(i*7),215);

    ch=getch();
  if(ch==13)
  {
  break;
  }

  if(ch!='\b')
   {
   setcolor(BLUE);
   tem[0]=ch;
  // tem[1]='\0';

   outtextxy(215+(i*7),205,tem);
    df=215+(i*7);

   us[i]=ch;
// printf("(%d)",i);
 //  df=df+7;
   i++;

   }
   else
   {
    if(i>0)
   i--;
   else i=0;

 //  printf(" *%d",i);
   setcolor(WHITE);
   tem[0]=us[i];
   tem[1]='\0';
//   printf("%d-%c",i,us[i]);
   outtextxy(df,205,tem);
   us[i]='\0';
/* if(i>0)
   i--;
   else i=0;   */

   if(df>222)
   df=df-7;
   else df=215;

   }
   //   ch=getch();
      }

      us[i]='\0';
      i=0;    df=0;

      ch=0 ;
      char ps[30];
      ps[0]='\0';
       setcolor(GREEN);
   rectangle(206,196,354,224);

      setcolor(YELLOW);
	 rectangle(206,256,354,284);

     while(ch!=13)
   {

	while(!kbhit())
    {
     setfillstyle(1, WHITE);
    bar(215+(i*7),272,222+(i*7),273);
    delay(100);
    setfillstyle(1,RED);
    bar(215+(i*7),272,222+(i*7),273);
    delay(100);
    }
       setfillstyle(1, WHITE);
    bar(215+(i*7),272,222+(i*7),273);

    ch=getch();
    if(ch==13)
    break;
  if(ch!='\b')
   {
   setcolor(BLUE);
   tem[0]='*';
   tem[1]='\0';

   outtextxy(215+(i*7),265,tem);
   df=215+(i*7);

   ps[i]=ch;
   i++;
   }
   else
   {
   setcolor(WHITE);
   tem[0]='*';
   outtextxy(df,265,tem);
   ps[i]='\0';
   if(i>0)
   i--;
   else i=0;
   if(df>222)
   df=df-7;
   else df=215;
   }

//   ch=getch();
   }

   ps[i]='\0';
       //	   printf(" %s",us);
	   setcolor(YELLOW);
   //	outtextxy(100,25,us);
  //	outtextxy(100,70,ps);
	getch();
      char tup[30];
     k=0;//y=0;

	while(ps[k])
   {
    tup[k]=ps[k]+5;
    k++;
    }
    cleardevice();
    setbkcolor(GREEN);
    setcolor(YELLOW);
    if(!(strcmp(usd,us))&&  !(strcmp(tp,ps)))
    {
    setcolor(BROWN);
    settextstyle(1,0,0);
    outtextxy(200,130,"LOGIN SUCCESSFULL");
    delay(100);
    ok=1;
    // bar
    cleardevice();
    setbkcolor(BLACK);
    setcolor(YELLOW);
 settextstyle(1,0,1);
 outtextxy(113,150,"Please wait while your settings are being loaded..");
 setcolor(8);
 setfillstyle(1,GREEN);
 bar(120,210,500,235);
 setfillstyle(1,15);
 bar(130,220,490,225);
 setcolor(RED);
int bi=0;
//int  bj=0;
 for(bi=0;bi<=358;bi++)
 {
 setcolor(BLUE);
 line(131+bi,221,131+bi,224);
 delay(20);
		       }
 setcolor(WHITE);
 getch();
    ok=1;
    }
return ok;
}
void wait1()
{int x,y,t,j=0,i;
 float pi=3.1452;
 cleardevice();
 do{
 for(t=0;t<360;t+=36)
 {x=20*cos(t*pi/180);
  y=20*sin(t*pi/180);
  setcolor(WHITE);
  line(320+2*x,240+y*2,320+x,240+y);
 }
 j=0;
 for(t=0;t<360;t+=36)
 {x=20*cos(t*pi/180);
  y=20*sin(t*pi/180);
  setcolor(GREEN);
  line(320+2*x,240+y*2,320+x,240+y);
  setcolor(BLUE);   //////
  settextstyle(0,0,2) ;
  outtextxy(220,320,"Loading");
  circle(350,330,7);          //1
   setfillstyle(1,1);
   floodfill(350,331,BLUE);
  if(j==1||j==3||j==5||j==7)  //2
  {circle(380,330,7);
   setfillstyle(1,1);
   floodfill(380,331,BLUE);
   delay(30);
  }
  if(j==2||j==4||j==6)         //3
  {circle(410,330,7);
   setfillstyle(1,1);
   floodfill(410,331,BLUE);
  }
  j++;
 delay(80);
 }
 cleardevice();
}while(!kbhit());

}
int menu(int colour)
{
 char msg[5][10]={"File","Format","Search","Help","Exit"};
 setfillstyle(1,15);
 bar(0,20,640,480);
 setfillstyle(1,colour);
 bar(0,0,640,20);
 setcolor(11);
 outtextxy(300,10,"P R O W O R D");
 setfillstyle(1,7);
 bar(0,20,640,40);
 setfillstyle(1,0);
 {bar(0,18,640,20);
  bar(0,40,640,42);
 }
 for(i=0,x=0;i<5;i++,x+=128)
 {setcolor(8);
  line(128+x,20,128+x,40);
  setcolor(0);
  outtextxy(64+x,30,msg[i]);
 }
 //help();
 setfillstyle(1,7);
 return colour;
}
void help()
{int i;
 circle(575,87,12);
 setcolor(BLUE);
 circle(575,87,10);
 setfillstyle(1,BLUE);
 floodfill(576,87,BLUE);
 setcolor(WHITE);
 outtextxy(572,85,"?");

}
void keystroke(int colour)
{char ch1,fchar[100],dear[20];
 int ch,n=0,p,j=0,i,k;
 //int yt1,yt2,yt3,yt4,t;
 do{
 start:
 ch=getche();
 switch(ch)
 {
  case 33:p=0,n=4,j=0;//t=20,yt1=yt3=50,yt2=yt4=70;
	   a:
	   cleardevice();
	   menu(colour);
	   abc(p,j,n);

	   /*do{
	   if(ch1=='8')
	    {setcolor(RED);
	     yt1+=t,yt2+=t;
	     rectangle(50,yt1,158,yt2);
	    }
	   if(ch1=='2')
	    {setcolor(RED);
	     yt3-=t,yt4-=t;
	     rectangle(50,yt3,158,yt4);
	    }
	    ch1=getche();
	    if(ch1=='8' || ch1=='2')
	    {goto a;
	    }
	   }while(ch1=='8' || ch1=='2');
	   */ch1=getche();
	   cleardevice();
	   menu(colour);
	   if(ch1==15)
	    {open();
	    }
	   if(ch1==14)
	    {fnew();
	    }
	   if(ch1==19)
	    {outtextxy(100,470,"SAVED...");
	    }
	   if(ch1==5)
	    exit(0);
	   break;
  case 64:cleardevice();
	   menu(colour);
	   p=128,j=4,n=1;
	   abc(p,j,n);
	   ch1=getche();
	   if(ch1==6)
	   {
	   fnew();
	   }
	   cleardevice();
	   menu(1);
	   break;
  case 35:cleardevice();
	   menu(colour);
	   p=128*2,j=5,n=1;
	   abc(p,j,n);
	   ch1=getche();
	   strcpy(dear,search());
	   cleardevice();
	   menu(colour);
	   break;

  case 36:cleardevice();
	   menu(colour);
	   p=128*3,n=1,j=6;
	   abc(p,j,n);
	   ch=getche();
	   if(ch==1)
	   {help();
	   }
	   break;
  case 37:cleardevice();
	   menu(colour);
	   p=128*4,n=1,j=7;
	   abc(p,j,n);
	   ch=getche();
	   if(ch==5)
	   exit(0);

	   break;
 }
 }while(ch!='x');
}
void abc(int p,int j,int n)
{ char ch,drp1[12][12]={"New","Open","Save As","Exit","Font","Find","About","Exit"};
  bar(p,40,128+p,40+20*n);
  setcolor(0);
  rectangle(1+p,20,127+p,39);
  for(i=0,x=0;i<n;i++,x+=20,j++)
   {setcolor(8);
    line(p,40+x,128+p,40+x);
    setcolor(0);
    outtextxy(64+p,50+x,drp1[j]);
   }
 }
 int selector(void)
{
int selval=0;
int preval;
void *tng;
setbkcolor(BLACK);
setcolor(BLUE);
int pos[8];
char *a,*b;
a="CONSOLE MODE";
b="NOTE MODE";
pos[0]=50;
pos[1]=50;
pos[2]=50;
pos[3]=90;
pos[4]=85;
pos[5]=70;
pos[6]=50;
pos[7]=50;
setfillstyle(SOLID_FILL,CYAN);
fillpoly(4,pos);
tng=(void *)malloc(imagesize(45,45,90,95));
getimage(45,45,90,95,tng);
cleardevice();
//putimage(120,220,tng,XOR_PUT);
setcolor(GREEN);
settextstyle(1,0,3);
outtextxy(200,140,a);
outtextxy(210,240,b);
int ar=1;
char ch=1;

selval=0;

setcolor(BLACK);
rectangle(205,235,347,270);
setcolor(YELLOW);
rectangle(195,135,373,170);
putimage(130,125,tng,XOR_PUT);
putimage(150,225,tng,XOR_PUT);

//putimage(130,125,tng,XOR_PUT);
putimage(150,225,tng,XOR_PUT);


while(ch!=13)
{
ch=getch();
if(!ch)
{
ch=getch();
ar=0;
}
if(ch==72 && ar==0)
{
if(selval==1)
{
selval=0;

setcolor(BLACK);
rectangle(205,235,347,270);
setcolor(YELLOW);
rectangle(195,135,373,170);
putimage(130,125,tng,XOR_PUT);
putimage(150,225,tng,XOR_PUT);
}
else
{
}
}
else if(ch==80&& ar==0)
{
if(selval==0)
{
selval=1;
setcolor(BLACK);
rectangle(195,135,373,170);
setcolor(YELLOW);
rectangle(205,235,347,270);
putimage(150,225,tng,XOR_PUT);
putimage(130,125,tng,XOR_PUT);

//putimage(150,225,tng,XOR_PUT);
//putimage(130,125,tng,XOR_PUT);


}
else
{
}
}
else if(ch==13 && ar==1)
{
return selval;
}
}
return selval;
}
char * search(void)
{
int x,y,i,j;

 setcolor(YELLOW);
 settextstyle(0,0,1);
 setfillstyle(1,GREEN);
 bar(60,50,530,75);
 setfillstyle(1,WHITE);
 bar(126,55,510,70);
 setcolor(WHITE);
 pieslice(126,63,90,270,7);
 pieslice(510,63,0,360,7);
 settextstyle(0,0,1);
 outtextxy(63,60,"SEARCH");



 i=0;
 int df=0;
   char sear[30],tem[2],ch;
   sear[0]='\0';
    tem[0]='\0';
    ch=0;

   while(ch!=13)
   {
	while(!kbhit())
    {
     setfillstyle(1, WHITE);
    bar(128+(i*7),66,135+(i*7),68);
    delay(100);
    setfillstyle(1,RED);
    bar(128+(i*7),66,135+(i*7),68);
    delay(100);
    }
       setfillstyle(1, WHITE);
    bar(128+(i*7),66,135+(i*7),68);

    ch=getch();
  if(ch==13)
  {
  break;
  }

  if(ch!='\b')
   {
   setcolor(BROWN);
   tem[0]=ch;
  tem[1]='\0';

   outtextxy(128+(i*7),60,tem);
    df=128+(i*7);

   sear[i]=ch;
// printf("(%d)",i);
 //  df=df+7;
   i++;

   }
   else
   {
    if(i>0)
   i--;
   else i=0;

 //  printf(" *%d",i);
   setcolor(WHITE);
   tem[0]=sear[i];
   tem[1]='\0';
//   printf("%d-%c",i,us[i]);
   outtextxy(df,60,tem);
   sear[i]='\0';
//if(i>0)
 //  i--;
  // else i=0;


   if(df>135)
   df=df-7;
   else df=128;

   }
   //   ch=getch();
      }
	  sear[i]='\0';
	  outtextxy(150,400,sear);
    return  sear;

}
int coverflow(struct cflow * cstart)
{int co;
 cstart=ccreate();
 co=flow(cstart);
 return co;
}
int flow(struct cflow * p)
{       char ch;
char *name;
     struct cflow * x1,*x2;
     x1=x2=p;
    setcolor(WHITE);
    draw(p);
    for(int i=0;i<6;i++)
    x1=x1->cnext;
	   setfillstyle(1,x1->rang);
	  for(int d=0;d<40;d++)
	   {
	   rectangle(286-d-1,160-d-1,336+d+1,220+d+1);
	   bar(286-d,160-d,336+d,220+d);
	   delay(8);
	   }
	   setcolor(x1->rang);
	   settextstyle(1,0,0);
	   name=matchcolor(x1->rang);
	   settextstyle(0,0,3);
	   outtextxy(250,310,name);
	   settextstyle(0,0,0);
	   outtextxy(150,40,"Use arroy keys");
	   outtextxy(150,50,"Press enter to select color from colour box");
     ch=1;

     while(ch!=13)
     {
	 ch=getch();
	 if(!ch)
	 {
	 ch=getch();
	 }

	 if(ch==75)
	 {
	  setfillstyle(1,BLACK);
	  bar(246,120,376,260);

	    cleardevice();


	 p=p->cnext->cnext->cnext->cnext->cnext->cnext->cnext->cnext->cnext->cnext->cnext->cnext->cnext->cnext->cnext;

	 x1=p;
	setcolor(WHITE);
	   draw(p);
    for(int i=0;i<6;i++)
    x1=x1->cnext;
	   setfillstyle(1,x1->rang);
	   for(int d=0;d<40;d++)
	   {
	   rectangle(286-d-1,160-d-1,336+d+1,220+d+1);
	   bar(286-d,160-d,336+d,220+d);
	   delay(8);
	   }
	       setcolor(x1->rang);
	      settextstyle(1,0,0);
	   name=matchcolor(x1->rang);
	   settextstyle(0,0,3);
	   outtextxy(250,310,name);
	   settextstyle(0,0,0);
	   outtextxy(150,40,"Use arroy keys");
	   outtextxy(150,50,"Press enter to select color from colour box");

       x2=x1;

       }

       else if(ch==77)
       {
	    setfillstyle(1,BLACK);
	    bar(246,120,376,260);


       cleardevice();

	 p=p->cnext;
	 x1=p;
	 setcolor(WHITE);
	   draw(p);
    for(int i=0;i<6;i++)
    x1=x1->cnext;
	   setfillstyle(1,x1->rang);
	   for(int d=0;d<40;d++)
	   {
	   rectangle(286-d-1,160-d-1,336+d+1,220+d+1);
	   bar(286-d,160-d,336+d,220+d);
	   delay(8);
	   }
	    setcolor(x1->rang);
	      settextstyle(1,0,0);
	   name=matchcolor(x1->rang);
	   settextstyle(0,0,3);
	   outtextxy(250,310,name);
	   settextstyle(0,0,0);
	   outtextxy(150,40,"Use arroy keys");
	   outtextxy(150,50,"Press enter to select color from colour box");


       x2=x1;

       }

else if(ch==13)
{
 return x2->rang;
}


    }
  return x2->rang;

 }

struct cflow *ccreate(void)
{struct cflow * ctst;
ctst=NULL;
//cend=NULL;
for(int j=0;j<16;j++)
{
 ctemp=(struct cflow *)malloc(sizeof(struct cflow *));
 ctemp->rang=j;
 ctemp->cnext=NULL;
 ctemp->cprev=NULL;
 if(ctst==NULL)
 {
  ctst=ctemp;
  cend=ctemp;
  ctst->cprev=cend;

 }
 else
 {

  ctemp->cprev=cend;
  cend->cnext=ctemp;

  cend=ctemp;

 }

 }


  ctemp->cnext=ctst;
 ctst->cprev=ctemp;
  cend->cnext=ctst;
 cend=ctemp;


 return ctst;
}

void draw(struct cflow * p)
{
  for(int i=0;i<12;i++)
  {
  setfillstyle(1,p->rang);
  drcase(i);
  p=p->cnext;
  }

}
void rect1(int x1,int y1,int x2,int y2)
{line(x1,y1,x2,y2);
 line(x1-50,y1-10,x2-50,y2+10);
 line(x1-50,y1-10,x1,y1);
 line(x2-50,y2+10,x2,y2);
  int p1[10];
 p1[0]=x1-50;
 p1[1]=y1-10;
 p1[2]=x1;
 p1[3]=y1;
 p1[4]=x1;
 p1[5]=y2;
 p1[6]=x1-50;
 p1[7]=y2+10;
 p1[8]=p1[0];
 p1[9]=p1[1];
 fillpoly(4,p1);

}
void rect2(int x1,int y1,int x2,int y2)
{line(x1,y1,x2,y2);
 line(x1+50,y1-10,x2+50,y2+10);
 line(x1+50,y1-10,x1,y1);
 line(x2+50,y2+10,x2,y2);

 int p1[10];
 p1[0]=x1;
 p1[1]=y1;
 p1[2]=x1+50;
 p1[3]=y1-10;
 p1[4]=x1+50;
 p1[5]=y2+10;
 p1[6]=x1;
 p1[7]=y2;
 p1[8]=p1[0];
 p1[9]=p1[1];
 fillpoly(4,p1);


}

void drcase(int ca)
{
switch (ca)
{
case 0:
{
    rect1(56,150,56,230);
    break;
 }
 case 1:
 {
 rect1(108,160,108,220);
 break;
 }

 case 2:
 {
 rectangle(110-1,160-1,160+1,220+1);
 bar(110,160,160,220);
 break;
 }

  case 3:
  {
  rectangle(162-1,160-1,212+1,220+1);
  bar(162,160,212,220);
 break;
  }
  case 4:
  {
  rectangle(214-1,160-1,264+1,220+1);
 bar(214,160,264,220);
   break;
  }

  case 5:
  {
   rectangle(266-1,160-1,316+1,220+1);
    bar(266,160,316,220);
  break;
  }

  case 6:
  {
  rectangle(318-1,160-1,368+1,220+1);
   bar(318,160,368,220);
  break;
  }

  case 7:
  {
   rectangle(370-1,160-1,420+1,220+1);
    bar(370,160,420,220);
  break;
  }

  case 8:
  {
   rectangle(422-1,160-1,472+1,220+1);
   bar(422,160,472,220);
  break;
  }

  case 9:
  {
   rectangle(474-1,160-1,524+1,220+1);
   bar(474,160,524,220);
  break;
  }

  case 10:
  {
    rect2(526,160,526,220);
  break;
  }

  case 11:
  {
   rect2(578,150,578,230);

  break;
  }
  }
  }

  char * matchcolor(int i)
  {

  char *cna;

  switch(i)
  {

  case 0:
  {
  cna="BLACK";
  break;
  }
  case 1:
  {
  cna="BLUE";
  break;
  }
  case 2:
  {
  cna="GREEN";
  break;
  }
  case 3:
  {
  cna="CYAN";
  break;
  }
  case 4:
  {
  cna="RED";
  break;
  }
  case 5:
  {
  cna="MAGENTA";
  break;
  }
  case 6:
  {
  cna="BROWN";
  break;
  }
  case 7:
  {
  cna="LIGHT GRAY";
  break;
  }
  case 8:
  {
  cna="DARK GREY";
  break;
  }
  case 9:
  {
  cna="LIGHT BLUE";
  break;
  }
  case 10:
  {
  cna="LIGHT GREEN";
  break;
  }
  case 11:
  {
  cna="LIGHT CYAN";
  break;
  }
  case 12:
  {
  cna="LIGHT RED";
  break;
  }
  case 13:
  {
  cna="LIGHT MAGENTA";
  break;
  }
  case 14:
  {
  cna="YELLOW";
  break;
  }
  case 15:
  {
  cna="WHITE";
  break;
  }

  }
  return cna;
  }

void fileopen(FILE *fp1)
{char fchar[20];
 int i;
 if(fp1==NULL)
 {sound(6500);
  delay(20);
  nosound();
  bar(200,200,450,300);
  setfillstyle(1,1);
  bar(200,200,450,218);
  outtextxy(202,207,"C:\\tc\\bin\\.c");
  setfillstyle(1,12);     //red
  bar(430,200,449,217);  //box
  setfillstyle(1,4);     //light
  bar(430,206,449,217);  //bar
  setcolor(BLACK);
  line(435,203,444,214);
  line(444,203,435,214);
  circle(215,230,10);
  circle(215,230,8);
  setcolor(RED);
  for(i=0;i<5;i++)
  {
  line(210+i,227,217+i,233);
  line(217+i,227,210+i,233);
  }
  setcolor(BLACK);
  setfillstyle(1,7);
  outtextxy(230,230,"No such file exist or the");
  outtextxy(230,240,"version of this file is not");
  outtextxy(229,250,"compatible with this windows");
  rectangle(310,270,340,290);
  setfillstyle(1,8);
  bar(311,280,339,289);

  outtextxy(321,277,"Ok");
  getch();
  menu(colour);
 }
 else{
 while(!feof(fp1))
 {fscanf(fp1,"%s",fchar);
  setfillstyle(1,0);
  setcolor(BLUE);
  outtextxy(55,80,fchar);
 }
 if(getche())
 {//fnew();
 }
 }
}
void open()
{FILE *fp,*fp1;
 int j=0,y=10,x1=0,m,l;
 char fname[10][20],fnm[20],tmp[20],str[15];

	     fp=fopen("files.txt","r");
	     setfillstyle(1,15);
	     setcolor(BLACK);
	     rectangle(150,100,500,400);
	     setfillstyle(1,1);
	     {bar(150,100,500,120);
	     }
	     s=t=e=NULL;
	     while(!feof(fp))
	     {fscanf(fp,"%s",fnm);
	      strcpy(fname[j],fnm);
	      t=(struct node*)malloc(sizeof(struct node));
	      strcpy(t->name,fnm);
	      t->n=NULL;
	      if(s==NULL)
	      {s=t;
	       e=t;
	      }
	      else
	      {e->n=t;
	       e=t;
	      }j++;
	      }
	      //sort
	      for(m=0;m<j;m++)
	      {for(l=m+1;l<j;l++)
	       {if(strcmp(fname[m],fname[l])>0)
		{strcpy(tmp,fname[l]);
		 strcpy(fname[l],fname[m]);
		 strcpy(fname[m],tmp);
		}
	       }
	      }//sort
	      for(m=0;m<j;m++)
	      {rectangle(200,150,450,350);
	      if((160+y)>=330)
	      {x1+=100;
	       y=10;
	       line(205+x1,160,205+x1,330);
	      }
	      outtextxy(210+x1,160+y,fname[m]);
	      line(200,330,450,330);
	      rectangle(300,360,380,380);
	      rectangle(400,360,480,380);
	      setfillstyle(1,9);
	      {bar(301,361,379,368);
	       bar(401,361,479,368);
	       bar(201,331,449,338);
	      }
	      outtextxy(210,335,"File Name");
	      outtextxy(320,365,"Ok");
	      outtextxy(420,365,"Cancel");
	      line(300,330,300,350);
	      y+=20;
	      }

	    gotoxy(40,22);
	    //settextstyle(1,0,4);
	    scanf("%s",&str);
	    menu(colour);
	    gotoxy(8,6);

	      t=s;
	      while(t!=NULL)
	      {if(strcmp(t->name,str)==0)
	       {
		strcat(str,".txt");
		fp1=fopen(str,"r");
		fileopen(fp1);
	       }
	       t=t->n;
	      }
}
/*void fnew()
{char ch,ch1,s[100],fname[20];
 struct node *infi,*infstart,*infend;
 FILE *fp1,*fp2;
 infi=infstart=infend=NULL;
 menu();
 gotoxy(8,6);
 //do
 {settextstyle(1,4,3);
 gets(s);
 }//while();
 ch=getche();
 ch1=getche();
 if(ch=='c')
  {if(ch1=='s')
   {//fp2=fopen("NONAME.txt","w");
    //fprintf(fp2,"%s",*s);
    fp1=fopen("files.txt","a");

    //fclose(fp1);
    //fclose(fp2);
    fp2=fopen("infi.txt","r");
    while(!feof(fp2))
	     {fscanf(fp2,"%s",fname);
	      infi=(struct node*)malloc(sizeof(struct node));
	      strcpy(infi->name,fname);
	      infi->next=NULL;
	      if(infstart==NULL)
	      {infstart=infi;
	       infend=infi;
	      }
	      else
	      {infend->next=temp;
	       infend=infi;
	      }
	      }
	      infi=infstart;
	      temp=start;
	      while(temp!=NULL)
	      {temp=temp->next;
	      }
	      temp=(struct node*)malloc(sizeof(struct node));
	      strcpy(temp->name,infi->name);
	      temp->next=NULL;
	      if(start==NULL)
	      {start=temp;
	       end=temp;
	      }
	      else
	      {end->next=temp;
	       end=temp;
	      }
		fprintf(fp1,"\n%s",infi->name);
	      infi=infi->next;
    outtextxy(70,420,"Saved...");

   }
  }
}
void fnew()
{int i=0,x[100],f=0,n=0,d=0,sx2,sx1=0,sy=14,len=0;
 int sx,fsx1,fsx2,fsy1,fsy2;
 int p=8,q=6;
 char c,ch,fs[100][100],fss[100][100];
 FILE *fp,*fp1,*fp2;
 fp=fopen("auto.txt","r");
 while(!feof(fp))
 {fscanf(fp,"%s",fs[i]);
  i++;
 }
 fp1=fopen("autosave.txt","w");
 fp2=fopen("autopixel.txt","w");
 gotoxy(p,q);
 for(int l=0;l<10;l++)
 {
  do
  {
  scanf("%c",&c);
  //outtextxy(55,80,"wots up");
  fprintf(fp1,"%c",c);
  len++;
  if(c==' ' || c==10)
  {sx2=8*(len-1);
   sx=(sx1+sx2);
   fprintf(fp2,"%d\t%d\t%d\t%d\n",sx1,sy,sx,sy);
   len=0;
   if(c==' ')
    {sx1=8+sx;
    }
  }
 }while(c!=10);
 q++;
 gotoxy(p,q);
 if(d!=3)
 {d++;}
 if(d==3 && d!=0)
 {d--;
 }
 sx1=0,sy+=14+d;
 }
 fclose(fp2);
 fclose(fp1);
 fp1=fopen("autosave.txt","r");
 //fseek(fp1,x,1);
 while(!feof(fp1))
 {fscanf(fp1,"%s",fss[f]);
  x[f]=strlen(fss[f]);
  f++;
 }
 fp2=fopen("autopixel.txt","r");
 for(int m=0;m<f-1;m++)
  {
   for(int j=0;j<i;j++)
   {if(strcmp(fss[m],fs[j])!=0)
    {n++;
    }
   }
    if(n==i)
    {n=0;
    setcolor(11);
    //fseek(fp2,d,1);
    fscanf(fp2,"%d %d %d %d",&fsx1,&fsy1,&fsx2,&fsy2);
    line(fsx1+55,fsy1+80,fsx2+55,fsy2+80);
    }
    else
    {n=0;
     fscanf(fp2,"%d %d %d %d",&fsx1,&fsy1,&fsx2,&fsy2);
     setcolor(10);
     //line(fsx1,fsy1,fsx2,fsy2);

    }
  }
 fclose(fp2);
 fclose(fp1);

}*/
void fnew()
{lines=selector();
settextstyle(0,0,0);
if(lines==1)
{cleardevice();
 color=coverflow(cstart);
 settextstyle(0,0,0);
 cleardevice();
 menu(9);
 lines=1;
 bco=WHITE;
}
else
{lines=0;
 bco=BLACK;
  color=GREEN;
  setbkcolor(bco);
  colour=2;
  menu(colour);
  setfillstyle(1,0);
  bar(0,40,639,479);
  setcolor(2);
  rectangle(0,40,639,479);
}
end1=NULL;
   end=NULL;
   trw=end;
   tra=end1;
   dirhead=dirtemp=dirend=NULL;
	head=tem=NULL;

   //setbkcolor(bco);

   if(lines)
   {
   setcolor(RED);
   line(50,40,50,480);
   line(54,40,54,480);
     setcolor(BLUE);
   for(int i=65;i<482;i=i+15)
   {
   line(0,i,640,i);
   }
   }  //setcolor(BLACK);
 //  color=GREEN;
   char ch,c[2];
   int k,j,br;
   k=55;
   j=0;
   br=0;
   char tc;
 //  ch=getch();
  temp=(struct word*)malloc(sizeof(struct word));
       temp->link=NULL;
       temp->next=NULL;
       temp->prev=NULL;
       if(start==NULL)
	  {
	  temp->prev=NULL;
	  start=temp;
	  end=temp;
	  trw=temp;
	  }
       else
	  {
	  end->next=temp;
	  temp->prev=end;
	  end=temp;
	  trw=end;
	  }

	  start1=NULL;
	  end->link=start1;
	  int ar=0;

   while(1)
   {    ar=0;
     while(!kbhit())
    {

     setfillstyle(1, bco);

    bar(56+j,k+2+5,63+j,k+8);
    delay(100);
    setfillstyle(1,RED);
    bar(56+j,k+2+5,63+j,k+8);
    delay(100);
    }
       setfillstyle(1,bco);

    bar(56+j,k+2+5,63+j,k+8);
    if(start==NULL)
    {

     temp=(struct word*)malloc(sizeof(struct word));
       temp->link=NULL;
       temp->next=NULL;
       temp->prev=NULL;
       if(start==NULL)
	  {
	  temp->prev=NULL;
	  start=temp;
	  end=temp;
	  trw=end;
	  }
       else
	  {
	  end->next=temp;
	  temp->prev=end;
	  end=temp;
	  trw=end;
	  }
	  start1=NULL;
	 end->link=start1;
      //	 tra=start1;


    }


      ch=getch();
      if(!ch)
      {
      ar=1;
      ch=getch();

       }
      if(ch==27)
      break;
      if(ch==13 && ar!=1)
      {


      if(tra==end1)
      {

      end->link=start1;

	   /* creating new node of type word*/
	     start1=NULL;
	     temp=(struct word*)malloc(sizeof(struct word));
       temp->link=NULL;
       temp->next=NULL;
       temp->prev=NULL;


		  temp1=(struct alpha*)malloc(sizeof(struct alpha));
       temp1->a=ch;
       temp1->next1=NULL;
       temp1->prev1=NULL;
       if(start1==NULL)
	  {
	  temp1->prev1=NULL;
	  start1=temp1;
	  end1=temp1;
	  tra=end1;
	  }
       else
	  {
	  end1->next1=temp1;
	  temp1->prev1=end1;
	  end1=temp1;
	  tra=end1;
	  }

	  temp->link=start1;

	if(start==NULL)
	  {
	  temp->prev=NULL;
	  start=temp;
	  end=temp;
	  trw=end;
	  }
       else
	  {
	  end->next=temp;
	  temp->prev=end;
	  end=temp;
	  trw=end;
	  }

      /* creating another node of type word */

	    start1=NULL;

	temp=(struct word*)malloc(sizeof(struct word));
       temp->link=NULL;
       temp->next=NULL;
       temp->prev=NULL;
       if(start==NULL)
	  {
	  temp->prev=NULL;
	  start=temp;
	  end=temp;
	  trw=end;
	  }
       else
	  {
	  end->next=temp;
	  temp->prev=end;
	  end=temp;
	  trw=end;
	  }


      start1=NULL;
      end1=start1;
      end->link=start1;
      tra=end1;
   //   tra=start1;

       k+=15;
      push(j);
      pusd(j,(k-55)/15);
      j=0;
	continue;
	}

     }


	/* case of arrow keys*/


      else   if(ch==75 && ar==1)
      {
      c[0]='\0';

	br=1;


	    if(trw==start)
	    {
			 if(tra->prev1!=NULL)
		{

		  tra=tra->prev1;


		 }

		else
		{
	      trw=NULL;
	       //	 j+=7;

	    }
	  }

      else	if(trw!=NULL)
		{
		 if(tra->prev1!=NULL)
		{

		  tra=tra->prev1;


		 }
		 else if(trw->prev!=NULL)
		{
			 trw=trw->prev;
		  struct alpha *rt;
		start1=trw->link;
		rt=trw->link;
		while(rt->next1!=NULL)
		    {
			rt=rt->next1;
		    }
		 tra=rt;

		}   }
    else
     {

     //	trw=trw->next;
      //	tra=trw->link;
	}
       if(j>0)
       j-=7;

       else if(j==0 && k>55)

       {j=popd((k-55)/15);
	k-=15;
	}
	else
	{
	j=0;
	k=55;
	}
      }
     // j=0;


   else if(ch==77 && ar==1)
      {


       setcolor(BLUE);
      c[0]='\0';
	br=1;
	int ent=0;
	int en=0;

       if(trw==NULL)
      {
      trw=start;
      tra=trw->link;
	j+=7;
       en=1;
      }


    else  if(trw->next==NULL)
	{
	trw=end;

	setcolor(BLUE);
		if(tra->next1!=NULL)
		{
			if(tra->a==13)
			 { ent=1;
			break;
			}
		   tra=tra->next1;
		 }
	 else
	{
	tra=end1;
	    en=1;

	}
      }
      else
     {



		if(tra->next1!=NULL)
		{
		if(tra->a==13)
		  ent=1;
	      tra=tra->next1;
	     }
		 else
	     {
		 trw=trw->next;
		  start1=trw->link;
	       tra=trw->link;
		if(tra->a==13)
		 ent=1;
	    }
    }


      if(!en)
      {
       if(!ent)
       {
       if(j<483)
       j+=7;

       else
       j=483;
      }
      else
      {
      j=0;
      k+=15;
      }
    }
   //   j=0;
      }



 else   if(ch!='\b'&& ch!=' '&& ar!=1)
     {  br=0;


       if(tra==end1)
	  {
	  start1=trw->link;
	   c[0]=ch;
       c[1]='\0';

	  temp1=(struct alpha*)malloc(sizeof(struct alpha));
       temp1->a=ch;
       temp1->next1=NULL;
       if(start1==NULL)
	  {
	  temp1->prev1=NULL;
	  start1=end1=temp1;
	  tra=end1;
	  }
       else
	  {
	  end1->next1=temp1;
	  temp1->prev1=end1;
	  end1=temp1;
	  tra=end1;
	  }
	 end->link=start1;
       }
       else
       {
       ar=1;
       struct alpha *yo,*ne;
       ne=trw->link;


       yo=(struct alpha *)malloc(sizeof(struct alpha ));
       yo->a=ch;

       yo->next1=tra->next1;
       yo->prev1=tra;
       tra->next1->prev1=yo;

       tra->next1=yo;
       tra=yo;
       trw->link=ne;


      scupdate();


      c[0]='\0';
       br=1;
       ar=1;
       if(j!=483)
       {
       j+=7;
       }
       else
       {

       k+=15;

      j=0;

      }

       scupdate();

       }
	}


       else if(ch==' ')   // case of space
       {
	br=0;
       c[0]=ch;
       c[1]='\0';

       if(tra==end1)
       {
	end->link=start1;

	   /* creating new node of type word*/
	     start1=NULL;
	     temp=(struct word*)malloc(sizeof(struct word));
       temp->link=NULL;
       temp->next=NULL;
       temp->prev=NULL;


		  temp1=(struct alpha*)malloc(sizeof(struct alpha));
       temp1->a=ch;
       temp1->next1=NULL;
       if(start1==NULL)
	  {
	  temp1->prev1=NULL;
	  start1=end1=temp1;
	  tra=end1;
	  }
       else
	  {
	  end1->next1=temp1;
	  temp1->prev1=end1;
	  end1=temp1;
	  tra=end1;
	  }

	  temp->link=start1;

	if(start==NULL)
	  {
	  temp->prev=NULL;
	  start=end=temp;
	  trw=end;
	  }
       else
	  {
	  end->next=temp;
	  temp->prev=end;
	  end=temp;
	  trw=end;
	  }

      /* creating another node of type word */

       start1=NULL;

	temp=(struct word*)malloc(sizeof(struct word));
       temp->link=NULL;
       temp->next=NULL;
       temp->prev=NULL;
       if(start==NULL)
	  {
	  temp->prev=NULL;
	  start=temp;
	  end=temp;
	  trw=end;
	  }
       else
	  {
	  end->next=temp;
	  temp->prev=end;
	  end=temp;
	  trw=end;
	  }
	 start1=NULL;

	 end->link=start1;
	 end1=start1;
	 tra=end1;
	 }
     else
   {
	 ar=1;
	 struct alpha *tem1,*tem2;
	 tem2=NULL;
	 struct word *wt1,wt2;
 //	 tem1=tra;
       tem2=tra->next1;
       tra->next1=NULL;
       tem2->prev1=NULL;

	     temp=(struct word*)malloc(sizeof(struct word));
       temp->link=NULL;
       temp->next=NULL;
       temp->prev=NULL;


		  temp1=(struct alpha*)malloc(sizeof(struct alpha));
       temp1->a=ch;
       temp1->next1=NULL;
       temp1->prev1=NULL;
       temp->link=temp1;
       if(trw->next!=NULL)
       {
      wt1=trw->next;
       temp->prev=trw;
       trw->next=temp;
       trw=temp;

	     temp=(struct word*)malloc(sizeof(struct word));
       temp->link=NULL;
       temp->next=NULL;
       temp->prev=NULL;

       temp->link=tem2;
	temp->prev=trw;
       trw->next=temp;
       trw=temp;
       trw->next=wt1;
       wt1->prev=trw;
       trw=trw->prev;
       tra=trw->link;
     //  j+=7;
       scupdate();
       }
      else
      {
       temp->prev=trw;
       trw->next=temp;
       trw=temp;

	     temp=(struct word*)malloc(sizeof(struct word));
       temp->link=NULL;
       temp->next=NULL;
       temp->prev=NULL;

       temp->link=tem2;
       tem2=NULL;
	temp->prev=trw;
       trw->next=temp;
       trw=trw->next;
     trw->next=NULL;
     trw=trw->prev;
       end=trw->next;
 //      trw=end;
 trw=end->prev;
       tra=trw->link;

    //  j+=7;
       scupdate();

       }


}
 }

 else if((ch==72 || ch==80) && ar==1)
 {
 //haha it does nothing ;
 br=1;
 ar=1;
 }
       else
  /* case of backspace */
    {



    if(trw==end && tra==end1)
    {

     if(j>0)
       j-=7;
     else if(k>55)
     {
     k-=15;
     j=pop();
     }
     else
     {
       j=0;
       k=55;
       }


       if(end!=NULL)
       {
	if(end1!=NULL)
     {
       if(end1->a==13)
       c[0]=' ';
       else
       c[0]=end1->a;
       c[1]='\0';
       end1=end1->prev1;
       end1->next1=NULL;
       tra=end1;
       }
       else
       {
       start1=NULL;
       end=end->prev;
       end->next=NULL;
       trw=end;
       start1=end->link;
       struct alpha *tr;
       tr=end->link;
       while(tr->next1!=NULL)
       {
	tr=tr->next1;
	}
       end1=tr;
       tra=end1;
       if(end1->a==13)
       c[0]=' ';
       else
	c[0]=end1->a;
       c[1]='\0';
       end1=end1->prev1;
       end1->next1=NULL;
       tra=end1;
       }
       if(end1==NULL)
       {
       end=end->prev;
       trw=end;
       end->next=NULL;
       struct alpha *r;
       r=end->link;
       while(r->next1!=NULL)
       r=r->next1;
       end1=r;
       tra=end1;
       }

	}
	else
	{
	start=NULL;
	c[0]='\0';
	}
       setcolor(bco);
	   outtextxy(56+j,k,c);
	   c[0]='\0';
	   br=1;
       }
   else
       {
	 ar=1;
	 br=1;

     if(j>0)
       j-=7;
     else if(k>55)
     {
     k-=15;
     j=pop();
     }
     else
     {
       j=0;
       k=55;
       }
       if(trw==NULL)
       {
       }


  else if(tra->prev1==NULL && tra->next1!=NULL)
     {


       tra->next1->prev1=NULL;
       tra=tra->next1;
       trw->link=tra;
       trw=trw->prev;
       struct alpha *netem;
       start1=trw->link;
       netem=trw->link;
       while(netem->next1!=NULL)
       netem=netem->next1;
       tra=netem;
       scupdate();

     }



     else if(tra->a==13 || tra->a==' ')
     {
     if(trw->next==end)
     {
       struct alpha *y;
       y=end->link;
       while(y->next1!=NULL)
       y=y->next1;
       end1=y;
	 struct word *ptr1,*ptr2;
     ptr1=trw->prev;
     ptr2=trw->next;
      struct alpha *p1,*p2;
     p1=ptr2->link;
    p2=ptr1->link;
    while(p2->next1!=NULL)
    p2=p2->next1;
    tra=p2;
    p2->next1=p1;
    ptr1->next=NULL;
    end=ptr1;
    trw=ptr1;
    start1=trw->link;
    scupdate();
     }

     else
     {
     struct word *ptr1,*ptr2,*ptr3;
     ptr1=trw->prev;
     ptr2=trw->next;
     ptr3=ptr2->next;
     struct alpha *p1,*p2,*p3;
     p1=ptr2->link;
    p2=ptr1->link;
     while(p2->next1!=NULL)
     p2=p2->next1;
     tra=p2;
     p2->next1=p1;
       ptr1->next=ptr3;
      ptr3->prev=ptr1;
     start1=ptr1->link;
     trw=ptr1;

     start1=trw->link;





     scupdate();
     }
   }


  else  if(trw==start)
    {
      if(tra->next1==NULL)
      {
	 tra->prev1->next1=NULL;
	 tra=tra->prev1;
      }
      else if(tra->prev1==NULL)
      {

      start->link=tra->next1;
      tra->next1->prev1=NULL;

      trw=NULL;
      tra=NULL;


    }
    else
    {
      struct alpha *al1,*al2;
       al1=tra->prev1;
       al2=tra->next1;
       al1->next1=al2;
       al2->prev1=al1;
       tra=al1;


    }
 }
  else  if(trw==end && tra!=end1)
    {
      if(tra->prev1==NULL)
      {tra->next1->prev1=NULL;
       trw->link=tra->next1;
       trw=trw->prev;
       end=trw;
       struct alpha *alte;
       alte=trw->link;
       while(alte->next1!=NULL)
       alte=alte->next1;
       tra=alte;
       }
       else
       {
       struct alpha *b1,*b2;
       b1=tra->prev1;
       b2=tra->next1;
       b1->next1=b2;
       b2->prev1=b1;
       tra=b1;
       }
    }
    else if( trw!=end && tra!=end1)
    {

      if(tra->prev1==NULL)
      {tra->next1->prev1=NULL;
       trw->link=tra->next1;
       trw=trw->prev;
    //   end=trw;
       struct alpha *alte;
       alte=trw->link;
       while(alte->next1!=NULL)
       alte=alte->next1;
       tra=alte;
       }
       else
       {
       struct alpha *b1,*b2;
       b1=tra->prev1;
       b2=tra->next1;
       b1->next1=b2;
       b2->prev1=b1;
       tra=b1;
       }

   }

      scupdate();

       }
      }
     if(!ar)
     {

     setcolor(color);
    outtextxy(56+j,k,c);
    }

    if(!br)
    {
    if(j==483)
   { j=0;
    k+=15;
//    outtextxy(200,400,"reached");
    }
    else j+=7;
//    ch=getch();
    }
      wr2file(start);
      }
   /* clean up */




   end->next=NULL;
   //setcolor(WHITE);
   //bar(0,0,640,480);
   //getch();
   cleardevice();
   if(bco==BLACK)
   {setbkcolor(BLACK);
    menu(2);
    setfillstyle(0,0);
    bar(0,40,640,480);
    setcolor(2);
    rectangle(0,40,639,479);
   }
   else{
   menu(colour);
   }
   scupdate();
     getch();
   cleardevice();
   menu(9);
}

void push(int x)
{
char f[2];
tem=(struct linex*)malloc(sizeof(struct linex *));
tem->jx=x;
tem->agla=NULL;
if(head==NULL)
{
head=tem;
}
else
{
 tem->agla=head;
head=tem;
}

}

int pop(void)
{
char f[2];
int y;
if(head==NULL)

{return 0;
}


else
{
struct linex *u;
y=head->jx;


u=head;
head=head->agla;
free(u);

return y;
}
}

void scupdate(void)
{

//int br=0;
bar(0,41,640,480);

  //setbkcolor(bco);
   if(lines)
   {
   setcolor(RED);
   line(50,40,50,480);
   line(54,40,54,480);
     setcolor(BLUE);
   for(int i=65;i<482;i=i+15)
   {
   line(0,i,640,i);
   }
   }  //setcolor(BLACK);


 struct word *prw;
 prw=start;
 struct alpha *pra;
   char ch,c[2];
  int k,j;
   k=55;
   j=0;
 while(prw!=NULL)
 {
   pra=prw->link;

   while(pra!=NULL)
   {
    ch=pra->a;
    if(ch==13 )
    {
       k+=15;
      j=-7;

    //   br=1;

     }

  else
  {
	 c[0]=ch;
       c[1]='\0';
	  setcolor(color);
    outtextxy(56+j,k,c);

   }
 //   if(!br)
   // {
    if(j==483)
     {
    j=0;
    k+=15;
     }
    else j+=7;
 // }
  pra=pra->next1;
  }
  prw=prw->next;
  }
  }
void  pusd(int a,int b)
  {
    dirtemp=(struct dir *)malloc(sizeof(struct dir *));
    dirtemp->nxt=NULL;
    dirtemp->posx=a;
    dirtemp->lno=b;
    if(dirhead==NULL)
    {
    dirhead=dirend=dirtemp;
    }
    else
    {
    dirend->nxt=dirtemp;
    dirend=dirtemp;
    }
   }

   int popd(int x)
   {
   struct dir *p;
   int ret;
   p=dirhead;
   ret=483;
   while(p!=NULL)
   {
   if(x==p->lno)
   {
   ret=p->posx;
   break;
   }
   p=p->nxt;
   }
   return ret;
  }
  void wr2file(struct word *st1)
  {
  FILE *fp;
  fp=fopen("sampdat.txt","w");
  if(fp==NULL)
  {
 printf(" error occured ");
 }
 struct word *x;
 struct alpha *p,*test;
 char checker[20];
 x=st1;
 while(x!=NULL)
 {
 p=x->link;
 while(p!=NULL)
 {
 putc(p->a,fp);
 p=p->next1;
 }
 spellcheck(x->s);
 x=x->next;
 }
 fclose(fp);

 }
void spellcheck(char checker[20])
{FILE *ff,*ffp;
 int l;//,x1,x2,y1,y2;
 char dic[20],take[20];
 //x1=50,y1=63,x2=50,y2=63;
 ff=fopen("dict.txt","r");
 while(!feof(ff))
 {fscanf(ff,"%s",dic);
  if((strcmp(checker,dic)==0))
   {setcolor(2);
    //l=strlen(checker);
     line(56,64,66,64);
    // x1=x2;
    // x2=x2+l*8;
   }
 }
 fclose(ff);
}