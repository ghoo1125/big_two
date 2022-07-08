
//---------------------------------------------------------------------------------------
int playcard(card *p,card *c1,card *c2,card *c3,card x[5],int t,int turn,int *jx,int &pass,int &t0,int &t1,int &t2,int s0) //出牌和顯示出的牌 (玩家)
{
int yaxis[13]={0},xaxis=0,k=0,check=0,tmp,c=0;//xaxis為控制你在第幾張牌 yaxis為看你是否選擇這張牌  tmp 紀錄起始點 

  //k判斷是否超過5張 check是否為全部沒出牌 --> PASS 
char s1[10]="FunckyJon";
char s2[10]="smartKi";
char s3[10]="fatmow"; 
                          
             
char s4[10]="Rod";
char s5[10]="xrr";
char s6[10]="Gun";
char s7[10]="DGG";
                    
char input;
int sc1=0,sc2=0,sc3=0,sc4=0; 
     for(int i=12;i>=0;i--)
      if(p[i].sw==52)
        tmp=i;
      xaxis=tmp;
  setbkcolor(0);
  setfillstyle(0,0);
  bar(610,200,730,280);
  

  for(int i=0;i<t0;i++)
   rectangle(10,60+30*i,60,90+30*i);
  for(int i=0;i<t1;i++)
   rectangle(540-i*30,10,570-i*30,60);
  for(int i=0;i<t2;i++)
   rectangle(740,420-30*i,790,450-30*i);
   
 settextstyle(8,0,2);
 setcolor(13);
 outtextxy(500,430,"[esc] to quit"); 
 setcolor(15);
 if(s0==1) 
 outtextxy(2,570,s4);
 else if(s0==2)
 outtextxy(2,570,s5);
 else if(s0==3)
 outtextxy(2,570,s6);
 else if(s0==4)
 outtextxy(2,570,s7);
 
 outtextxy(10,30,s1);
 outtextxy(580,10,s2);
 outtextxy(710,460,s3);
 settextstyle(8,0,4);
for(int i=0;i<13;i++)  //玩家的牌  
  if(p[i].sw==52)
  {
    rectangle(i*50+65,480,i*50+115,560);              
    if(p[i].cardsuit==1)
    {
      setcolor(2);                    
      fillellipse(50*i+85,500,5,5);
      fillellipse(50*i+85,500,4,4);
      fillellipse(50*i+85,500,3,3);
      fillellipse(50*i+85,500,2,2);
      fillellipse(50*i+85,500,1,1);
      line(50*i+84,499,50*i+86,499);
      fillellipse(50*i+79,507,5,5);
      fillellipse(50*i+79,507,4,4);
      fillellipse(50*i+79,507,3,3);
      fillellipse(50*i+79,507,2,2);
      fillellipse(50*i+79,507,1,1);
      line(50*i+78,506,50*i+80,506);
      line(50*i+78,507,50*i+80,507);
      fillellipse(50*i+91,507,5,5);
      fillellipse(50*i+91,507,4,4);
      fillellipse(50*i+91,507,3,3);
      fillellipse(50*i+91,507,2,2);
      fillellipse(50*i+91,507,1,1);
      line(50*i+90,506,50*i+92,506);
      line(50*i+90,507,50*i+92,507);
      line(50*i+83,500,50*i+83,515);
      line(50*i+84,500,50*i+84,515);
      line(50*i+85,500,50*i+85,515);
      line(50*i+86,500,50*i+86,515);
      line(50*i+79,514,50*i+91,514);  
      line(50*i+79,515,50*i+91,515);    
      setcolor(15);  
    }
    if(p[i].cardsuit==2)
    {
      setcolor(4);                    
      moveto(50*i+88,495);
      lineto(50*i+98,505);
      lineto(50*i+88,515);
      lineto(50*i+78,505);
      lineto(50*i+88,495);    
      line(50*i+78,505,50*i+78,505);
      line(50*i+79,504,50*i+79,506); 
      line(50*i+80,503,50*i+80,507); 
      line(50*i+81,502,50*i+81,508);       
      line(50*i+82,501,50*i+82,509);
      line(50*i+83,500,50*i+83,510);
      line(50*i+84,499,50*i+84,511);
      line(50*i+85,498,50*i+85,512); 
      line(50*i+86,497,50*i+86,513);
      line(50*i+87,496,50*i+87,514);
      line(50*i+88,495,50*i+88,515);  
      line(50*i+98,505,50*i+98,505);
      line(50*i+97,504,50*i+97,506); 
      line(50*i+96,503,50*i+96,507); 
      line(50*i+95,502,50*i+95,508);       
      line(50*i+94,501,50*i+94,509);
      line(50*i+93,500,50*i+93,510);
      line(50*i+92,499,50*i+92,511);
      line(50*i+91,498,50*i+91,512); 
      line(50*i+90,497,50*i+90,513);
      line(50*i+89,496,50*i+89,514);    
      setcolor(15);  
    }
    if(p[i].cardsuit==3)
    {         
      setcolor(4);          
      fillellipse(50*i+80,501,5,5);
      fillellipse(50*i+80,501,4,4);
      fillellipse(50*i+80,501,3,3);
      fillellipse(50*i+80,501,2,2);
      fillellipse(50*i+80,501,1,1);
      fillellipse(50*i+90,501,5,5);
      fillellipse(50*i+90,501,4,4);
      fillellipse(50*i+90,501,3,3);
      fillellipse(50*i+90,501,2,2);
      fillellipse(50*i+90,501,1,1);
      line(50*i+78,499,50*i+92,499);
      line(50*i+78,500,50*i+92,500); 
      line(50*i+75,501,50*i+95,501);
      line(50*i+75,502,50*i+95,502);
      line(50*i+75,503,50*i+95,503);
      line(50*i+76,504,50*i+94,504);
      line(50*i+77,505,50*i+93,505);
      line(50*i+78,506,50*i+92,506);
      line(50*i+79,507,50*i+91,507);
      line(50*i+80,508,50*i+90,508);
      line(50*i+81,509,50*i+89,509);
      line(50*i+82,510,50*i+88,510);
      line(50*i+83,511,50*i+87,511);
      line(50*i+84,512,50*i+86,512);
      line(50*i+85,513,50*i+85,513);   
      setcolor(15);            
    }
    if(p[i].cardsuit==4)
    {
      setcolor(2);                    
      line(50*i+84,495,50*i+84,495);
      line(50*i+83,496,50*i+85,496);
      line(50*i+82,497,50*i+86,497);
      line(50*i+81,498,50*i+87,498);
      line(50*i+80,499,50*i+88,499);
      line(50*i+79,500,50*i+89,500);  
      line(50*i+78,501,50*i+90,501);
      line(50*i+77,502,50*i+91,502);
      line(50*i+77,503,50*i+91,503); 
      fillellipse(50*i+79,507,5,5);
      fillellipse(50*i+79,507,4,4);
      fillellipse(50*i+79,507,3,3);
      fillellipse(50*i+79,507,2,2);
      fillellipse(50*i+79,507,1,1);
      line(50*i+78,506,50*i+80,506);
      line(50*i+78,507,50*i+80,507);
      fillellipse(50*i+89,507,5,5);
      fillellipse(50*i+89,507,4,4);
      fillellipse(50*i+89,507,3,3);
      fillellipse(50*i+89,507,2,2);
      fillellipse(50*i+89,507,1,1);
      line(50*i+88,506,50*i+91,506);
      line(50*i+88,507,50*i+91,507);  
      line(50*i+90,506,50*i+92,506);
      line(50*i+90,507,50*i+92,507);
      line(50*i+83,500,50*i+83,515);
      line(50*i+84,500,50*i+84,515);
      line(50*i+78,514,50*i+90,514);  
      line(50*i+78,515,50*i+90,515);
      setcolor(15);                 
    }  
             
    decode(p[i]);
    outtextxy(i*50+70,520,s);                      
  }    
  
   circle(tmp*50+90,580,3);
   
 
     for(int i=0;i<13;i++)
     {
       if(p[i].sw==52)
         rectangle(i*50+65,480,i*50+115,560);   
     }
      
    while(1)
            {
             k=0;
             for(int i=0;i<13;i++)
              if(yaxis[i]==1)
               k++;  //判斷是否超過5張 
            
             if(kbhit())  //上選牌  下取消選牌  左右移動所欲選取的牌  按enter確認所選取的牌 
                {   

                    for(int i=0;i<13;i++)
                    {
                     if(p[i].sw==52)
                     rectangle(i*50+65,480,i*50+115,560);
                    }  
                     input=getch();    //按enter出牌 
                     if(input==27)
                     
                      return 1;
                     
                     if(input==13)
                     {
                       check=0;           
                      for(int j=0;j<13;j++)
                       if(yaxis[j]==0)
                        check++;  

                       c=0;            
                      for(int i=0;i<13;i++)
                      {
                        if(p[i].sw==51)
                         c=1;
                      }  
                      
                      if(t==turn && check2(p,yaxis))  //梅花3       
                        break;  
                      else if(c)
                      {
                        if(check3(p,yaxis))  //全pass
                        break;
                      }    
                      else if(t!=turn && (!c) && check==13) //pass 
                        break;  
                      else if(compare(check1(p,x,yaxis,*jx),p,x,yaxis,*jx))  //要壓牌       
                        break;
                     }
                     
                         
                     PRESS(VK_DOWN) yaxis[xaxis]=0;
                     PRESS(VK_RIGHT)
                        {
                          for(int i=xaxis+1;i<xaxis+13;i++)//已經出過的要跳過 
                              if(p[i%13].sw==52)
                              {
                                xaxis=i%13;
                                break;
                              }                 
                        } 
                     PRESS(VK_LEFT)
                        {
                         for(int i=xaxis-1;i>(xaxis-13);i--)
                          if(i<0) //已經出過的要跳過
                          { 
                           if(p[13+i].sw==52)  
                             {
                               xaxis=13+i;
                               break;                   
                             }
                           }        
                           else if(i>=0)
                           if(p[i].sw==52)
                             {
                               xaxis=i;
                               break;                   
                             }                 
                        }  
                        if(k<5) //超過5張不能再選 
                     PRESS(VK_UP) yaxis[xaxis]=1;

                           Sleep(100);
                           setbkcolor(0);
                           setfillstyle(0,0);
                           bar(85,575,695,585);
                           bar(85,455,695,465);
                         circle(xaxis*50+90,580,3);  
                         for(int i=0;i<13;i++)
                          if(yaxis[i]==1)
                           circle(i*50+90,460,3);  
                        }          
                   }  
             
 printf("\n");
if(check!=13) //判斷是否為pass 
{
  pass=0;
  for(int j=0;j<13;j++)
    {              
      if((yaxis[j]==1)||(p[j].sw<52))  //要出或已出都要減 
        p[j].sw--;
      if(c1[j].sw<52)
        c1[j].sw--;
      if(c2[j].sw<52)
        c2[j].sw--;
      if(c3[j].sw<52)
        c3[j].sw--;        
    }       

(*jx)=0;
for(int j=0;j<13;j++)
  if(yaxis[j]==1)
  {
     x[(*jx)]=p[j];
     (*jx)++;                    
  }
  
printf("  (");  
for(int i=0;i<(*jx);i++)
    if(x[i].num==13)
      printf("%cK ",convert(x[i].cardsuit));
    else if(x[i].num==12)
      printf("%cQ ",convert(x[i].cardsuit));
    else if(x[i].num==11)
      printf("%cJ ",convert(x[i].cardsuit));
    else if(x[i].num==14)
      printf("%cA ",convert(x[i].cardsuit));
    else 
      printf("%c%2d ",convert(x[i].cardsuit),x[i].num%13);
}
else
{
 pass=1;
 printf(" Pass!! ");
}
printf(")\n");   


for(int j=0;j<13;j++)
 yaxis[j]=0;
 
 
return 0; 
}
//---------------------------------------------------------------------------------------
