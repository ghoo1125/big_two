#include "flush.h"
#include "check.h"
#include "menu.h"
#include "end.h"
#include "compare.h"
#include "printcard.h"
#include "playcard.h"
#include "AI.h"
#include "intro.h"
//--------------------------------------------------------------------------
int main()
{
initwindow(800,600);
card c[4][13],com1[13],com2[13],com3[13],player[13],x[5];
int turn,t,jx=0,pass=0,t0,t1,t2,esc,time1=0,time2=1,w=0;//turn 決定出牌變數  t 判斷梅花三用  jx 檯面牌的個數 
srand(time(NULL));
int s0=0;
int sc[4]={0};
char ct1[3],ct2[3],ct3[3],ct4[3];

char s1[10]="FunckyJon";
char s2[10]="smartKi";
char s3[10]="fatmow"; 
             
char s4[10]="Rod";
char s5[10]="xrr";
char s6[10]="Gun";
char s7[10]="DGG";
              

intro();
delay(1000);

 time1=menu(&s0);
 reset(c);
 mixcard(c);
 dealcard(c,player,com1,com2,com3);
/*for(int i=0;i<13;i++)  
{
 if(player[i].num==15 && player[i].cardsuit ==1)
  swap(player[9],player[i]);
 if(player[i].num==15 && player[i].cardsuit ==2)
  swap(player[10],player[i]);
 if(player[i].num==15 && player[i].cardsuit ==3)
  swap(player[11],player[i]);
 if(player[i].num==15 && player[i].cardsuit ==4)
  swap(player[12],player[i]);
  
 if(com1[i].num==15 && com1[i].cardsuit ==1)
  swap(player[9],com1[i]);
 if(com1[i].num==15 && com1[i].cardsuit ==2)
  swap(player[10],com1[i]);
 if(com1[i].num==15 && com1[i].cardsuit ==3)
  swap(player[11],player[i]);
 if(com1[i].num==15 && com1[i].cardsuit ==4)
  swap(player[12],com1[i]);   
  
 if(com2[i].num==15 && com2[i].cardsuit ==1)
  swap(player[9],com2[i]);
 if(com2[i].num==15 && com2[i].cardsuit ==2)
  swap(player[10],com2[i]);
 if(com2[i].num==15 && com2[i].cardsuit ==3)
  swap(player[11],com2[i]);
 if(com2[i].num==15 && com2[i].cardsuit ==4)
  swap(player[12],com2[i]); 
 
 if(com3[i].num==15 && com3[i].cardsuit ==1)
  swap(player[9],com3[i]);
 if(com3[i].num==15 && com3[i].cardsuit ==2)
  swap(player[10],com3[i]);
 if(com3[i].num==15 && com3[i].cardsuit ==3)
  swap(player[11],com3[i]);
 if(com3[i].num==15 && com3[i].cardsuit ==4)
  swap(player[12],com3[i]);   
}
 for(int i=0;i<13;i++)  
{
 if(player[i].num==14 && player[i].cardsuit ==1)
  swap(player[5],player[i]);
 if(player[i].num==14 && player[i].cardsuit ==2)
  swap(player[6],player[i]);
 if(player[i].num==14 && player[i].cardsuit ==3)
  swap(player[7],player[i]);
 if(player[i].num==14 && player[i].cardsuit ==4)
  swap(player[8],player[i]);
  
 if(com1[i].num==14 && com1[i].cardsuit ==1)
  swap(player[5],com1[i]);
 if(com1[i].num==14 && com1[i].cardsuit ==2)
  swap(player[6],com1[i]);
 if(com1[i].num==14 && com1[i].cardsuit ==3)
  swap(player[7],player[i]);
 if(com1[i].num==14 && com1[i].cardsuit ==4)
  swap(player[8],com1[i]);   
  
 if(com2[i].num==14 && com2[i].cardsuit ==1)
  swap(player[5],com2[i]);
 if(com2[i].num==14 && com2[i].cardsuit ==2)
  swap(player[6],com2[i]);
 if(com2[i].num==14 && com2[i].cardsuit ==3)
  swap(player[7],com2[i]);
 if(com2[i].num==14 && com2[i].cardsuit ==4)
  swap(player[8],com2[i]); 
 
 if(com3[i].num==14 && com3[i].cardsuit ==1)
  swap(player[5],com3[i]);
 if(com3[i].num==14 && com3[i].cardsuit ==2)
  swap(player[6],com3[i]);
 if(com3[i].num==14 && com3[i].cardsuit ==3)
  swap(player[7],com3[i]);
 if(com3[i].num==14 && com3[i].cardsuit ==4)
  swap(player[8],com3[i]);   
}
 for(int i=0;i<13;i++)  
{
 if(player[i].num==3 && player[i].cardsuit ==1)
  swap(player[0],player[i]);
 if(player[i].num==3 && player[i].cardsuit ==2)
  swap(player[1],player[i]);

 if(com1[i].num==3 && com1[i].cardsuit ==1)
  swap(player[0],com1[i]);
 if(com1[i].num==3 && com1[i].cardsuit ==2)
  swap(player[1],com1[i]);
  
  
 if(com2[i].num==3 && com2[i].cardsuit ==1)
  swap(player[0],com2[i]);
 if(com2[i].num==3 && com2[i].cardsuit ==2)
  swap(player[1],com2[i]);


 if(com3[i].num==3 && com3[i].cardsuit ==1)
  swap(player[0],com3[i]);
 if(com3[i].num==3 && com3[i].cardsuit ==2)
  swap(player[1],com3[i]);  
}*/
/*for(int j=0;j<13;j++) //抓同花順測試用 
{
  if(com3[j].num==3 && com3[j].cardsuit==2)
  swap(com3[0],com3[j]);  
  if(com3[j].num==4 && com3[j].cardsuit==2)
  swap(com3[1],com3[j]);
  if(com3[j].num==5 && com3[j].cardsuit==2)
  swap(com3[2],com3[j]);
  if(com3[j].num==6 && com3[j].cardsuit==2)
  swap(com3[3],com3[j]);   
  if(com3[j].num==7 && com3[j].cardsuit==2)
  swap(com3[4],com3[j]);      
        
  if(player[j].num==3 && player[j].cardsuit==2)
  swap(com3[0],player[j]);  
  if(player[j].num==4 && player[j].cardsuit==2)
  swap(com3[1],player[j]);
  if(player[j].num==5 && player[j].cardsuit==2)
  swap(com3[2],player[j]);
  if(player[j].num==6 && player[j].cardsuit==2)
  swap(com3[3],player[j]);   
  if(player[j].num==7 && player[j].cardsuit==2)
  swap(com3[4],player[j]);  
  
  if(com2[j].num==3 && com2[j].cardsuit==2)
  swap(com3[0],com2[j]);  
  if(com2[j].num==4 && com2[j].cardsuit==2)
  swap(com3[1],com2[j]);
  if(com2[j].num==5 && com2[j].cardsuit==2)
  swap(com3[2],com2[j]);
  if(com2[j].num==6 && com2[j].cardsuit==2)
  swap(com3[3],com2[j]);   
  if(com2[j].num==7 && com2[j].cardsuit==2)
  swap(com3[4],com2[j]);
  
  if(com1[j].num==3 && com1[j].cardsuit==2)
  swap(com3[0],com1[j]);  
  if(com1[j].num==4 && com1[j].cardsuit==2)
  swap(com3[1],com1[j]);
  if(com1[j].num==5 && com1[j].cardsuit==2)
  swap(com3[2],com1[j]);
  if(com1[j].num==6 && com1[j].cardsuit==2)
  swap(com3[3],com1[j]);   
  if(com1[j].num==7 && com1[j].cardsuit==2)
  swap(com3[4],com1[j]);        
} */
 if(s0==1)
 {
  for(int i=0;i<13;i++)
  {
   if(com1[i].num==3 && com1[i].cardsuit==1)
    swap(player[0],com1[i]);
   if(com2[i].num==3 && com2[i].cardsuit==1)
    swap(player[0],com2[i]);
   if(com3[i].num==3 && com3[i].cardsuit==1)
    swap(player[0],com3[i]);
  }
 }
  if(s0==2)
 {
  for(int i=0;i<13;i++)
  {
   if(com1[i].num==15 && com1[i].cardsuit==4)
    swap(player[0],com1[i]);
   if(com2[i].num==15 && com2[i].cardsuit==4)
    swap(player[0],com2[i]);
   if(com3[i].num==15 && com3[i].cardsuit==4)
    swap(player[0],com3[i]);
  }
 } 
 if(s0==3)
 {
  sc[0]+=time1;
 }
 sort(player); //發好牌 並把玩家的排整理過 
 sort(com1);
 sort(com2);
 sort(com3);
 turn=find(player,com1,com2,com3);
 t=turn;
 t0=13;t1=13;t2=13;
 esc=0;   



for(int i=0;i<13;i++)
  {
   if(com1[i].num==3 && com1[i].cardsuit==1)
   {
    t=0;
    break;
   }
   if(com2[i].num==3 && com2[i].cardsuit==1)
   {
    t=1;
    break;
   }
   if(com3[i].num==3 && com3[i].cardsuit==1)
   {
    t=2;
    break;
   }   
  }
  
cleardevice();
settextstyle(8,0,8);
outtextxy(200,250,"Round 1");
delay(1000);
cleardevice();
while(1)
{      

if(turn%4==0)
   {
      t0=0;       
      printf("\n\n");
      printf("\n\"%d\"\"%d\"\n",t,turn);        
            printf("com1   ");
      for(int j=0;j<13;j++)
      {
        if(com1[j].sw==52)
        {            
            if(com1[j].num==13)
               printf("%cK ",convert(com1[j].cardsuit));
            else if(com1[j].num==12)
               printf("%cQ ",convert(com1[j].cardsuit));
            else if(com1[j].num==11)
               printf("%cJ ",convert(com1[j].cardsuit));
            else if(com1[j].num==14)
               printf("%cA ",convert(com1[j].cardsuit));
            else 
               printf("%c%2d ",convert(com1[j].cardsuit),com1[j].num%13);
        }
      } 
      AI(com1,player,com2,com3,x,t,turn,&jx,pass); 
       for(int j=0;j<13;j++)
        if(com1[j].sw==52)
            t0++;    
      printcard(x,jx,turn,pass,t0,t1,t2,player,s0); 
       Sleep(700); 
   }  
  if(turn%4==1)
   { 
               
      t1=0;
      printf("\n\n");
      printf("\n\"%d\"\"%d\"\n",t,turn);        
              printf("com2   ");
      for(int j=0;j<13;j++)
      {
        if(com2[j].sw==52)
        {             
            if(com2[j].num==13)
               printf("%cK ",convert(com2[j].cardsuit));
            else if(com2[j].num==12)
               printf("%cQ ",convert(com2[j].cardsuit));
            else if(com2[j].num==11)
               printf("%cJ ",convert(com2[j].cardsuit));
            else if(com2[j].num==14)
               printf("%cA ",convert(com2[j].cardsuit));
            else 
               printf("%c%2d ",convert(com2[j].cardsuit),com2[j].num%13);
        }
      } 
      AI(com2,player,com1,com3,x,t,turn,&jx,pass);  
      for(int j=0;j<13;j++)
        if(com2[j].sw==52)
            t1++;   
       printcard(x,jx,turn,pass,t0,t1,t2,player,s0);   
        Sleep(700);           
   } 
  if(turn%4==2)
   {  
      t2=0;         
      printf("\n\n");
      printf("\n\"%d\"\"%d\"\n",t,turn);
            printf("com3   ");
      for(int j=0;j<13;j++)
      {
        if(com3[j].sw==52)
        {           
            if(com3[j].num==13)
               printf("%cK ",convert(com3[j].cardsuit));
            else if(com3[j].num==12)
               printf("%cQ ",convert(com3[j].cardsuit));
            else if(com3[j].num==11)
               printf("%cJ ",convert(com3[j].cardsuit));
            else if(com3[j].num==14)
               printf("%cA ",convert(com3[j].cardsuit));
            else 
               printf("%c%2d ",convert(com3[j].cardsuit),com3[j].num%13);
        }
      } 
      
      AI(com3,player,com2,com1,x,t,turn,&jx,pass); 
      for(int j=0;j<13;j++)
        if(com3[j].sw==52)
            t2++;            
      printcard(x,jx,turn,pass,t0,t1,t2,player,s0);     
      Sleep(700);       
   }
 
  if(turn%4==3)
   {  
      printf("\n\n");
      printf("\n\"%d\"\"%d\"\n",t,turn);
      printf("PLAYER   ");
      for(int j=0;j<13;j++)
      {
        if(player[j].sw==52)
        {
            if(player[j].num==13)
               printf("%cK ",convert(player[j].cardsuit));
            else if(player[j].num==12)
               printf("%cQ ",convert(player[j].cardsuit));
            else if(player[j].num==11)
               printf("%cJ ",convert(player[j].cardsuit));
            else if(player[j].num==14)
               printf("%cA ",convert(player[j].cardsuit));
            else 
               printf("%c%2d ",convert(player[j].cardsuit),player[j].num%13);
        }
      }
      
      esc=playcard(player,com1,com2,com3,x,t,turn,&jx,pass,t0,t1,t2,s0);
      if(!esc)
      {
       printcard(x,jx,turn,pass,t0,t1,t2,player,s0);
       Sleep(700);
      } 
   }
  turn++;
  
if(end(player,com1,com2,com3) && time1!=time2 && esc==0) //判斷結束
  {
   sc[0]+=13;
   sc[1]+=13;
   sc[2]+=13;
   sc[3]+=13;
   for(int i=0;i<13;i++)
   {
     if(player[i].sw==52) 
       sc[0]--;
     if(com1[i].sw==52) 
       sc[1]--;
     if(com2[i].sw==52) 
       sc[2]--;
     if(com3[i].sw==52)
       sc[3]--;
   }
   delay(1000);
   cleardevice();
   
   sprintf(ct1,"%d",sc[0]);
   sprintf(ct2,"%d",sc[1]);
   sprintf(ct3,"%d",sc[2]);
   sprintf(ct4,"%d",sc[3]);
   
   
   settextstyle(8,0,4); 
   setcolor(11);
   outtextxy(450,50,"POINTS");
   setcolor(15);
   if(s0==1) 
     outtextxy(300,150,s4);
   else if(s0==2)
     outtextxy(300,150,s5);
   else if(s0==3)
     outtextxy(300,150,s6);
   else if(s0==4)
     outtextxy(300,150,s7);
 
 outtextxy(300,250,s1);
 outtextxy(300,350,s2);
 outtextxy(300,450,s3);
   
   setcolor(11);
   outtextxy(500,150,ct1);
   outtextxy(500,250,ct2);
   outtextxy(500,350,ct3);
   outtextxy(500,450,ct4);
   setcolor(15);
   delay(3000);
   cleardevice();
   turn=0;
   reset(c);
   mixcard(c);
   dealcard(c,player,com1,com2,com3);
 /*for(int j=0;j<13;j++) //抓同花順測試用 
{
  if(com3[j].num==3 && com3[j].cardsuit==2)
  swap(com3[0],com3[j]);  
  if(com3[j].num==4 && com3[j].cardsuit==2)
  swap(com3[1],com3[j]);
  if(com3[j].num==5 && com3[j].cardsuit==2)
  swap(com3[2],com3[j]);
  if(com3[j].num==6 && com3[j].cardsuit==2)
  swap(com3[3],com3[j]);   
  if(com3[j].num==7 && com3[j].cardsuit==2)
  swap(com3[4],com3[j]);      
        
  if(player[j].num==3 && player[j].cardsuit==2)
  swap(com3[0],player[j]);  
  if(player[j].num==4 && player[j].cardsuit==2)
  swap(com3[1],player[j]);
  if(player[j].num==5 && player[j].cardsuit==2)
  swap(com3[2],player[j]);
  if(player[j].num==6 && player[j].cardsuit==2)
  swap(com3[3],player[j]);   
  if(player[j].num==7 && player[j].cardsuit==2)
  swap(com3[4],player[j]);  
  
  if(com2[j].num==3 && com2[j].cardsuit==2)
  swap(com3[0],com2[j]);  
  if(com2[j].num==4 && com2[j].cardsuit==2)
  swap(com3[1],com2[j]);
  if(com2[j].num==5 && com2[j].cardsuit==2)
  swap(com3[2],com2[j]);
  if(com2[j].num==6 && com2[j].cardsuit==2)
  swap(com3[3],com2[j]);   
  if(com2[j].num==7 && com2[j].cardsuit==2)
  swap(com3[4],com2[j]);
  
  if(com1[j].num==3 && com1[j].cardsuit==2)
  swap(com3[0],com1[j]);  
  if(com1[j].num==4 && com1[j].cardsuit==2)
  swap(com3[1],com1[j]);
  if(com1[j].num==5 && com1[j].cardsuit==2)
  swap(com3[2],com1[j]);
  if(com1[j].num==6 && com1[j].cardsuit==2)
  swap(com3[3],com1[j]);   
  if(com1[j].num==7 && com1[j].cardsuit==2)
  swap(com3[4],com1[j]);        
} */ 
   if(s0==1)
 {
  for(int i=0;i<13;i++)
  {
   if(com1[i].num==3 && com1[i].cardsuit==1)
    swap(player[0],com1[i]);
   if(com2[i].num==3 && com2[i].cardsuit==1)
    swap(player[0],com2[i]);
   if(com3[i].num==3 && com3[i].cardsuit==1)
    swap(player[0],com3[i]);
  }
 }
  if(s0==2)
 {
  for(int i=0;i<13;i++)
  {
   if(com1[i].num==15 && com1[i].cardsuit==4)
    swap(player[0],com1[i]);
   if(com2[i].num==15 && com2[i].cardsuit==4)
    swap(player[0],com2[i]);
   if(com3[i].num==15 && com3[i].cardsuit==4)
    swap(player[0],com3[i]);
  }
 }

   sort(player); //發好牌 並把玩家的排整理過 
   sort(com1);
   sort(com2);
   sort(com3);
   turn=find(player,com1,com2,com3); 
   t=turn;  
   t0=13;t1=13;t2=13;
   jx=0;
   for(int i=0;i<5;i++)
   x[i].num=0;
   time2++;
   cleardevice();
   settextstyle(8,0,8);
   if(time2==2)
    outtextxy(200,250,"Round 2 ");
   if(time2==3)
    outtextxy(200,250,"Round 3 ");
   if(time2==4)
    outtextxy(200,250,"Round 4 ");
   if(time2==5)
    outtextxy(200,250,"Round 5 ");
   delay(1000); 
    cleardevice();
   
 
  }  
  else if( end(player,com1,com2,com3) && time1==time2 && esc==0)
  {
   sc[0]+=13;
   sc[1]+=13;
   sc[2]+=13;
   sc[3]+=13;
   for(int i=0;i<13;i++)
   {
     if(player[i].sw==52) 
       sc[0]--;
     if(com1[i].sw==52) 
       sc[1]--;
     if(com2[i].sw==52) 
       sc[2]--;
     if(com3[i].sw==52)
       sc[3]--;
   }
   
   delay(1000);
   cleardevice();
   
   sprintf(ct1,"%d",sc[0]);
   sprintf(ct2,"%d",sc[1]);
   sprintf(ct3,"%d",sc[2]);
   sprintf(ct4,"%d",sc[3]);
   settextstyle(8,0,4);
   setcolor(10); 
   outtextxy(220,100,"RANK");
   setcolor(11);
   outtextxy(470,100,"POINTS"); 
   setcolor(10);
    if(sc[0]==sc[1])
   {
    if(sc[0]>sc[2] && sc[2]>sc[3])
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"1");
     outtextxy(250,350,"3");
     outtextxy(250,450,"4");
    }
    if(sc[0]>sc[3] && sc[3]>sc[2])
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"1");
     outtextxy(250,350,"4");
     outtextxy(250,450,"3");
    }
    if(sc[3]>sc[0] && sc[0]>sc[2])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"2");
     outtextxy(250,350,"4");
     outtextxy(250,450,"1");
    }
     if(sc[2]>sc[0] && sc[0]>sc[3])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"2");
     outtextxy(250,350,"1");
     outtextxy(250,450,"4");
    }
    if(sc[3]>sc[2] && sc[2]>sc[0])
    {
     outtextxy(250,150,"3");
     outtextxy(250,250,"3");
     outtextxy(250,350,"2");
     outtextxy(250,450,"1");
    }
    if(sc[2]>sc[3] && sc[3]>sc[0])
    {
     outtextxy(250,150,"3");
     outtextxy(250,250,"3");
     outtextxy(250,350,"1");
     outtextxy(250,450,"2");
    } 
   }
   
   if(sc[0]==sc[2])
   {
    if(sc[0]>sc[1] && sc[1]>sc[3])
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"3");
     outtextxy(250,350,"1");
     outtextxy(250,450,"4");
    }
    if(sc[0]>sc[3] && sc[3]>sc[1])
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"4");
     outtextxy(250,350,"1");
     outtextxy(250,450,"3");
    }
    if(sc[3]>sc[0] && sc[0]>sc[1])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"4");
     outtextxy(250,350,"2");
     outtextxy(250,450,"1");
    }
     if(sc[1]>sc[0] && sc[0]>sc[3])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"1");
     outtextxy(250,350,"2");
     outtextxy(250,450,"4");
    }
    if(sc[3]>sc[1] && sc[1]>sc[0])
    {
     outtextxy(250,150,"3");
     outtextxy(250,250,"2");
     outtextxy(250,350,"3");
     outtextxy(250,450,"1");
    }
    if(sc[1]>sc[3] && sc[3]>sc[0])
    {
     outtextxy(250,150,"3");
     outtextxy(250,250,"1");
     outtextxy(250,350,"3");
     outtextxy(250,450,"2");
    } 
   }
   
   if(sc[0]==sc[3])
   {
    if(sc[0]>sc[1] && sc[1]>sc[2])
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"3");
     outtextxy(250,350,"4");
     outtextxy(250,450,"1");
    }
    if(sc[0]>sc[2] && sc[2]>sc[1])
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"4");
     outtextxy(250,350,"3");
     outtextxy(250,450,"1");
    }
    if(sc[2]>sc[0] && sc[0]>sc[1])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"4");
     outtextxy(250,350,"1");
     outtextxy(250,450,"2");
    }
     if(sc[1]>sc[0] && sc[0]>sc[2])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"1");
     outtextxy(250,350,"4");
     outtextxy(250,450,"2");
    }
    if(sc[2]>sc[1] && sc[1]>sc[0])
    {
     outtextxy(250,150,"3");
     outtextxy(250,250,"2");
     outtextxy(250,350,"1");
     outtextxy(250,450,"3");
    }
    if(sc[1]>sc[2] && sc[2]>sc[0])
    {
     outtextxy(250,150,"3");
     outtextxy(250,250,"1");
     outtextxy(250,350,"2");
     outtextxy(250,450,"3");
    } 
   }
   
    if(sc[1]==sc[2])
   {
    if(sc[0]>sc[1] && sc[1]>sc[3])
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"2");
     outtextxy(250,350,"2");
     outtextxy(250,450,"4");
    }
    if(sc[0]>sc[3] && sc[3]>sc[1])
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"3");
     outtextxy(250,350,"3");
     outtextxy(250,450,"2");
    }
    if(sc[3]>sc[0] && sc[0]>sc[1])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"3");
     outtextxy(250,350,"3");
     outtextxy(250,450,"1");
    }
     if(sc[1]>sc[0] && sc[0]>sc[3])
    {
     outtextxy(250,150,"3");
     outtextxy(250,250,"1");
     outtextxy(250,350,"1");
     outtextxy(250,450,"4");
    }
    if(sc[3]>sc[1] && sc[1]>sc[0])
    {
     outtextxy(250,150,"4");
     outtextxy(250,250,"1");
     outtextxy(250,350,"1");
     outtextxy(250,450,"3");
    }
    if(sc[1]>sc[3] && sc[3]>sc[0])
    {
     outtextxy(250,150,"3");
     outtextxy(250,250,"1");
     outtextxy(250,350,"1");
     outtextxy(250,450,"2");
    } 
   }
   
   
   if(sc[1]==sc[3])
   {
    if(sc[0]>sc[2] && sc[2]>sc[3])
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"3");
     outtextxy(250,350,"2");
     outtextxy(250,450,"3");
    }
    if(sc[0]>sc[3] && sc[3]>sc[2])
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"2");
     outtextxy(250,350,"3");
     outtextxy(250,450,"2");
    }
    if(sc[3]>sc[0] && sc[0]>sc[2])
    {
     outtextxy(250,150,"3");
     outtextxy(250,250,"1");
     outtextxy(250,350,"4");
     outtextxy(250,450,"1");
    }
     if(sc[2]>sc[0] && sc[0]>sc[3])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"3");
     outtextxy(250,350,"1");
     outtextxy(250,450,"3");
    }
    if(sc[3]>sc[2] && sc[2]>sc[0])
    {
     outtextxy(250,150,"4");
     outtextxy(250,250,"1");
     outtextxy(250,350,"3");
     outtextxy(250,450,"1");
    }
    if(sc[2]>sc[3] && sc[3]>sc[0])
    {
     outtextxy(250,150,"3");
     outtextxy(250,250,"2");
     outtextxy(250,350,"1");
     outtextxy(250,450,"2");
    } 
   }
   
   if(sc[2]==sc[3])
   {
    if(sc[0]>sc[1] && sc[1]>sc[3])
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"2");
     outtextxy(250,350,"3");
     outtextxy(250,450,"3");
    }
    if(sc[0]>sc[3] && sc[3]>sc[1])
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"4");
     outtextxy(250,350,"2");
     outtextxy(250,450,"2");
    }
    if(sc[3]>sc[0] && sc[0]>sc[1])
    {
     outtextxy(250,150,"3");
     outtextxy(250,250,"4");
     outtextxy(250,350,"1");
     outtextxy(250,450,"1");
    }
     if(sc[1]>sc[0] && sc[0]>sc[3])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"1");
     outtextxy(250,350,"3");
     outtextxy(250,450,"3");
    }
    if(sc[3]>sc[1] && sc[1]>sc[0])
    {
     outtextxy(250,150,"4");
     outtextxy(250,250,"3");
     outtextxy(250,350,"1");
     outtextxy(250,450,"1");
    }
    if(sc[1]>sc[3] && sc[3]>sc[0])
    {
     outtextxy(250,150,"3");
     outtextxy(250,250,"1");
     outtextxy(250,350,"2");
     outtextxy(250,450,"2");
    } 
   }
   
//------------------------------------------------------------------
if(sc[0]==sc[1] && sc[2]==sc[3] && sc[0]>sc[2])
{
     outtextxy(250,150,"1");
     outtextxy(250,250,"1");
     outtextxy(250,350,"2");
     outtextxy(250,450,"2");
} 
if(sc[0]==sc[1] && sc[2]==sc[3] && sc[0]<sc[2])
{
     outtextxy(250,150,"2");
     outtextxy(250,250,"2");
     outtextxy(250,350,"1");
     outtextxy(250,450,"1");
} 
if(sc[0]==sc[2] && sc[1]==sc[3] && sc[0]>sc[1])
{
     outtextxy(250,150,"1");
     outtextxy(250,250,"2");
     outtextxy(250,350,"1");
     outtextxy(250,450,"2");
} 
if(sc[0]==sc[2] && sc[1]==sc[3] && sc[0]<sc[1])
{
     outtextxy(250,150,"2");
     outtextxy(250,250,"1");
     outtextxy(250,350,"2");
     outtextxy(250,450,"1");
} 

if(sc[0]==sc[3] && sc[1]==sc[2] && sc[0]>sc[1])
{
     outtextxy(250,150,"1");
     outtextxy(250,250,"2");
     outtextxy(250,350,"2");
     outtextxy(250,450,"1");
} 

if(sc[0]==sc[3] && sc[1]==sc[2] && sc[0]<sc[1])
{
     outtextxy(250,150,"2");
     outtextxy(250,250,"1");
     outtextxy(250,350,"1");
     outtextxy(250,450,"2");
} 
//------------------------------------------------------------------
if(sc[0]==sc[1] && sc[1]==sc[2])
   {
    if(sc[0]>sc[3] )
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"1");
     outtextxy(250,350,"1");
     outtextxy(250,450,"2");
    }
    if(sc[3]>sc[0])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"2");
     outtextxy(250,350,"2");
     outtextxy(250,450,"1");
    }
   }
   
if(sc[0]==sc[1] && sc[1]==sc[3])
   {
    if(sc[0]>sc[2] )
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"1");
     outtextxy(250,350,"2");
     outtextxy(250,450,"1");
    }
    if(sc[2]>sc[0])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"2");
     outtextxy(250,350,"1");
     outtextxy(250,450,"2");
    }
   }
 
if(sc[0]==sc[2] && sc[2]==sc[3])
   {
    if(sc[0]>sc[1] )
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"2");
     outtextxy(250,350,"1");
     outtextxy(250,450,"1");
    }
    if(sc[1]>sc[0])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"1");
     outtextxy(250,350,"2");
     outtextxy(250,450,"2");
    }
   }   
  
if(sc[1]==sc[2] && sc[2]==sc[3])
   {
    if(sc[0]>sc[1] )
    {
     outtextxy(250,150,"1");
     outtextxy(250,250,"2");
     outtextxy(250,350,"2");
     outtextxy(250,450,"2");
    }
    if(sc[1]>sc[0])
    {
     outtextxy(250,150,"2");
     outtextxy(250,250,"1");
     outtextxy(250,350,"1");
     outtextxy(250,450,"1");
    }
   }      

if(sc[1]==sc[2] && sc[2]==sc[3] && sc[0]==sc[1])      
{
 outtextxy(250,150,"1");
 outtextxy(250,250,"1");
 outtextxy(250,350,"1");
 outtextxy(250,450,"1");               
                
}
   
//------------------------------------------------------------------  
  
  
   if(sc[0]>sc[1] && sc[1]>sc[2] && sc[2]>sc[3])
   {
    outtextxy(250,150,"1");
    outtextxy(250,250,"2");
    outtextxy(250,350,"3");
    outtextxy(250,450,"4");
   }
   if(sc[0]>sc[1] && sc[1]>sc[3] && sc[3]>sc[2])
   {
    outtextxy(250,150,"1");
    outtextxy(250,250,"2");
    outtextxy(250,350,"4");
    outtextxy(250,450,"3");
   }
   if(sc[0]>sc[2] && sc[2]>sc[1] && sc[1]>sc[3])
   {
    outtextxy(250,150,"1");
    outtextxy(250,250,"3");
    outtextxy(250,350,"2");
    outtextxy(250,450,"4");
   }
   if(sc[0]>sc[2] && sc[2]>sc[3] && sc[3]>sc[1])
   {
    outtextxy(250,150,"1");
    outtextxy(250,250,"4");
    outtextxy(250,350,"2");
    outtextxy(250,450,"3");
   }
   if(sc[0]>sc[3] && sc[3]>sc[2] && sc[2]>sc[1])
   {
    outtextxy(250,150,"1");
    outtextxy(250,250,"4");
    outtextxy(250,350,"3");
    outtextxy(250,450,"2");
   }
   if(sc[0]>sc[3] && sc[3]>sc[1] && sc[1]>sc[2])
   {
    outtextxy(250,150,"1");
    outtextxy(250,250,"3");
    outtextxy(250,350,"4");
    outtextxy(250,450,"2");
   }
   if(sc[1]>sc[0] && sc[0]>sc[3] && sc[3]>sc[2])
   {
    outtextxy(250,150,"2");
    outtextxy(250,250,"1");
    outtextxy(250,350,"4");
    outtextxy(250,450,"3");
   }
   if(sc[1]>sc[0] && sc[0]>sc[2] && sc[2]>sc[3])
   {
    outtextxy(250,150,"2");
    outtextxy(250,250,"1");
    outtextxy(250,350,"3");
    outtextxy(250,450,"4");
   }
   if(sc[1]>sc[2] && sc[2]>sc[0] && sc[0]>sc[3])
   {
    outtextxy(250,150,"3");
    outtextxy(250,250,"1");
    outtextxy(250,350,"2");
    outtextxy(250,450,"4");
   }
   if(sc[1]>sc[2] && sc[2]>sc[3] && sc[3]>sc[0])
   {
    outtextxy(250,150,"4");
    outtextxy(250,250,"1");
    outtextxy(250,350,"2");
    outtextxy(250,450,"3");
   }
   if(sc[1]>sc[3] && sc[3]>sc[2] && sc[2]>sc[0])
   {
    outtextxy(250,150,"4");
    outtextxy(250,250,"1");
    outtextxy(250,350,"3");
    outtextxy(250,450,"2");
   }
   if(sc[1]>sc[3] && sc[3]>sc[0] && sc[0]>sc[2])
   {
    outtextxy(250,150,"3");
    outtextxy(250,250,"1");
    outtextxy(250,350,"4");
    outtextxy(250,450,"2");
   }
   if(sc[2]>sc[0] && sc[0]>sc[1] && sc[1]>sc[3])
   {
    outtextxy(250,150,"2");
    outtextxy(250,250,"3");
    outtextxy(250,350,"1");
    outtextxy(250,450,"4");
   }
   if(sc[2]>sc[0] && sc[0]>sc[3] && sc[3]>sc[1])
   {
    outtextxy(250,150,"2");
    outtextxy(250,250,"4");
    outtextxy(250,350,"1");
    outtextxy(250,450,"3");
   }
   if(sc[2]>sc[1] && sc[1]>sc[0] && sc[0]>sc[3])
   {
    outtextxy(250,150,"3");
    outtextxy(250,250,"2");
    outtextxy(250,350,"1");
    outtextxy(250,450,"4");
   }
   if(sc[2]>sc[1] && sc[1]>sc[3] && sc[3]>sc[0])
   {
    outtextxy(250,150,"4");
    outtextxy(250,250,"2");
    outtextxy(250,350,"1");
    outtextxy(250,450,"3");
   }
   if(sc[2]>sc[3] && sc[3]>sc[1] && sc[1]>sc[0])
   {
    outtextxy(250,150,"4");
    outtextxy(250,250,"3");
    outtextxy(250,350,"1");
    outtextxy(250,450,"2");
   }
   if(sc[2]>sc[3] && sc[3]>sc[0] && sc[0]>sc[1])
   {
    outtextxy(250,150,"3");
    outtextxy(250,250,"4");
    outtextxy(250,350,"1");
    outtextxy(250,450,"2");
   }
   if(sc[3]>sc[0] && sc[0]>sc[1] && sc[1]>sc[2])
   {
    outtextxy(250,150,"2");
    outtextxy(250,250,"3");
    outtextxy(250,350,"4");
    outtextxy(250,450,"1");
   }
   if(sc[3]>sc[0] && sc[0]>sc[2] && sc[2]>sc[1])
   {
    outtextxy(250,150,"2");
    outtextxy(250,250,"4");
    outtextxy(250,350,"3");
    outtextxy(250,450,"1");
   }
   if(sc[3]>sc[1] && sc[1]>sc[2] && sc[2]>sc[0])
   {
    outtextxy(250,150,"4");
    outtextxy(250,250,"2");
    outtextxy(250,350,"3");
    outtextxy(250,450,"1");
   }
   if(sc[3]>sc[1] && sc[1]>sc[0] && sc[0]>sc[2])
   {
    outtextxy(250,150,"3");
    outtextxy(250,250,"2");
    outtextxy(250,350,"4");
    outtextxy(250,450,"1");
   }
   if(sc[3]>sc[2] && sc[2]>sc[0] && sc[0]>sc[1])
   {
    outtextxy(250,150,"3");
    outtextxy(250,250,"4");
    outtextxy(250,350,"2");
    outtextxy(250,450,"1");
   }
   if(sc[3]>sc[2] && sc[2]>sc[1] && sc[1]>sc[0])
   {
    outtextxy(250,150,"4");
    outtextxy(250,250,"3");
    outtextxy(250,350,"2");
    outtextxy(250,450,"1");
   }
   setcolor(15);
   
   
   if(s0==1) 
     outtextxy(300,150,s4);
   else if(s0==2)
     outtextxy(300,150,s5);
   else if(s0==3)
     outtextxy(300,150,s6);
   else if(s0==4)
     outtextxy(300,150,s7);
 
   outtextxy(300,250,s1);
   outtextxy(300,350,s2);
   outtextxy(300,450,s3);
   setcolor(11);
   outtextxy(500,150,ct1);
   outtextxy(500,250,ct2);
   outtextxy(500,350,ct3);
   outtextxy(500,450,ct4);
   
   settextstyle(8,0,3);
   setcolor(13);
     outtextxy(520,520,"[esc] to quit");
   setcolor(15);  
   w=0; 
   while(w!=27)
      {
       w=getch();
      }
   cleardevice();
   settextstyle(8,0,4);
   setcolor(12);
   outtextxy(200,250,"Thanks for playing. U :-}");
   setcolor(15);
   sc[0]=0;sc[1]=0;sc[2]=0;sc[3]=0;
   delay(1500);
   cleardevice();
   s0=0;
   time1=menu(&s0);
   time2=1;
      turn=0;
   reset(c);
   mixcard(c);
   dealcard(c,player,com1,com2,com3);
 
   if(s0==1)
 {
  for(int i=0;i<13;i++)
  {
   if(com1[i].num==3 && com1[i].cardsuit==1)
    swap(player[0],com1[i]);
   if(com2[i].num==3 && com2[i].cardsuit==1)
    swap(player[0],com2[i]);
   if(com3[i].num==3 && com3[i].cardsuit==1)
    swap(player[0],com3[i]);
  }
 }
  if(s0==2)
 {
  for(int i=0;i<13;i++)
  {
   if(com1[i].num==15 && com1[i].cardsuit==4)
    swap(player[0],com1[i]);
   if(com2[i].num==15 && com2[i].cardsuit==4)
    swap(player[0],com2[i]);
   if(com3[i].num==15 && com3[i].cardsuit==4)
    swap(player[0],com3[i]);
  }
 }
 if(s0==3)
 {
  sc[0]+=time1;
 }
   sort(player); //發好牌 並把玩家的排整理過 
   sort(com1);
   sort(com2);
   sort(com3);
   turn=find(player,com1,com2,com3); 
   t=turn;  
   t0=13;t1=13;t2=13;
   jx=0;
   for(int i=0;i<5;i++)
   x[i].num=0;
   esc=0;
   
   cleardevice();
  }
else if(esc==1)
{
int k=0,l=0,enter=0;
       cleardevice(); 
     /*  setfillstyle(3,6);
       settextstyle(8,0,4);                   
       rectangle(200,220,700,280);
       outtextxy(220,240,"Are you sure to quit?");
       rectangle(300,300,400,350);
       outtextxy(320,310,"YES");
       rectangle(500,300,600,350);
       outtextxy(525,310,"NO");
       floodfill(380,300,15);   */
        while(1)
        {
          setfillstyle(3,6);
          if(k==0)
          {
            cleardevice(); 
            setfillstyle(3,6);
            settextstyle(8,0,4);                   
            rectangle(200,220,650,280);
            outtextxy(220,240,"Are you sure to quit?");
            rectangle(300,300,400,350);
            outtextxy(320,310,"YES");
            rectangle(500,300,600,350);
            outtextxy(525,310,"NO");
            floodfill(550,330,15); 
         
             enter=getch();
             if(enter!=13)
              l=getch();
             if(l==75)
              k++;
            
            if(enter==13)
            {
             enter=0;
             settextstyle(8,0,4);
             turn--;
             cleardevice();
             esc=0;
             printcard(x,jx,turn,pass,t0,t1,t2,player,s0); 
             break;
            } 
          }
          if(k==1)
          {
            cleardevice(); 
            setfillstyle(3,6);
            settextstyle(8,0,4);                   
            rectangle(200,220,650,280);
            outtextxy(220,240,"Are you sure to quit?");
            rectangle(300,300,400,350);
            outtextxy(320,310,"YES");
            rectangle(500,300,600,350);
            outtextxy(525,310,"NO");
            floodfill(350,330,15);  

             enter=getch();
             
              if(enter!=13)
                 l=getch();
               if(l==77)
                k--;
              if(enter==13)
              {
               cleardevice();
               settextstyle(8,0,4);
               setcolor(12);
               outtextxy(200,250,"Thanks for playing. :-} ");
               setcolor(15);
               sc[0]=0;sc[2]=0;sc[3]=0;sc[1]=0;
               delay(1000);
               cleardevice();
               enter=0;
               s0=0;
               time1=menu(&s0);
                  turn=0;
   reset(c);
   mixcard(c);
   dealcard(c,player,com1,com2,com3);
 
   if(s0==1)
 {
  for(int i=0;i<13;i++)
  {
   if(com1[i].num==3 && com1[i].cardsuit==1)
    swap(player[0],com1[i]);
   if(com2[i].num==3 && com2[i].cardsuit==1)
    swap(player[0],com2[i]);
   if(com3[i].num==3 && com3[i].cardsuit==1)
    swap(player[0],com3[i]);
  }
 }
  if(s0==2)
 {
  for(int i=0;i<13;i++)
  {
   if(com1[i].num==15 && com1[i].cardsuit==4)
    swap(player[0],com1[i]);
   if(com2[i].num==15 && com2[i].cardsuit==4)
    swap(player[0],com2[i]);
   if(com3[i].num==15 && com3[i].cardsuit==4)
    swap(player[0],com3[i]);
  }
 }
 if(s0==3)
 {
  sc[0]+=time1;
 }
   sort(player); //發好牌 並把玩家的排整理過 
   sort(com1);
   sort(com2);
   sort(com3);
   turn=find(player,com1,com2,com3); 
   t=turn;  
   t0=13;t1=13;t2=13;
   jx=0;
   for(int i=0;i<5;i++)
   x[i].num=0;
   esc=0;
               
               time2=1;
               cleardevice();
               settextstyle(8,0,8);
               outtextxy(200,250,"Round 1");
               delay(1000);
               cleardevice();
               break;
              }
             } 
          }
   }
 }
return 0;    
}
//--------------------------------------------------------------------------
