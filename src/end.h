
//---------------------------------------------------------------------------------------
int end(card *p,card *c1,card *c2,card *c3)  //判斷結束  贏傳1 輸傳-1 沒有則傳0 
{
 int t1=0,t2=0,t3=0,t4=0;
 for(int i=0;i<13;i++)
 {
  if(p[i].sw!=52)
   t1++;
  if(c1[i].sw!=52)
   t2++;
  if(c2[i].sw!=52)
   t3++;
  if(c3[i].sw!=52)
   t4++;
 } 

  if(t1==13)
  {
     cleardevice();
     setcolor(14);
     settextstyle(8,0,4);
     outtextxy(100,280,"Congradulations!!  YOU WIN");
     return 1;
  }   
  else if(t2==13||t3==13||t4==13)
  {  
     cleardevice();
     setcolor(6);
     settextstyle(8,0,4);
     outtextxy(180,280,"Great Game!! YOU LOSE");
     setcolor(15);
     return -1;
  } 
  else return 0;     
}
//---------------------------------------------------------------------------------------
