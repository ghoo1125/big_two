
//-----------------------------------------------------------梅花三出牌 
void AI1(card *com,card x[5],int *jx)
{
int str0[5]={0},str1[5]={0},str2[5]={0},str3[5]={0},str4[5]={0},str5[5]={0};     
for(int i=0;i<5;i++)
{
 str0[i]=0;
 str1[i]=0;
 str2[i]=0;
 str3[i]=0;
 str4[i]=0;
 str5[i]=0;
}    
// ＊還沒打的：　順子３～７　不能有三對以上的pairs  　出３PAIR或３單張 
//               有順子４～８　且２張３以上 出３PAIR
//               順子２～６　３～６不能有兩對以上的PAIR　出３PARI或單張 
//               順子３～７　有２的情況 如果後面有３張+７是唯一的pair 則打２～６配葫蘆７對  
//               順子３～７　有２的情況　如果後面有順子７～１１則打２～６
//               順子３～７　如果３～６有兩對以上的PAIR 且有順子７～１１　出３PAIR或３單張   
//-----------------------------------判斷 
   for(int i=1;i<13;i++)  //str0 :34567 
  {
     str0[0]=0;       
   if(com[i].num==4 && str0[1] == 0)
     str0[1]=i;
   if(com[i].num==5 && str0[2] == 0)
     str0[2]=i;
   if(com[i].num==6 && str0[3] == 0)
     str0[3]=i;
   if(com[i].num==7 && str0[4] == 0)
     str0[4]=i;
  }
  
    if(com[11].num==15 && com[12].num==15)  //str1 :23456  (兩張2以上才出)
    for(int i=1;i<13;i++)  
    {
       str1[0]=0;       
     if(com[i].num==4 && str1[1] == 0)
       str1[1]=i;
     if(com[i].num==5 && str1[2] == 0)
       str1[2]=i;
     if(com[i].num==6 && str1[3] == 0)
       str1[3]=i;
     if(com[i].num==15 && str1[4] == 0)
       str1[4]=i;
    }

   
  if(com[3].num==3) //str2 :鐵支 
    {
      str2[0]=0;
      str2[1]=1;
      str2[2]=2;
      str2[3]=3;
      for(int i=4;i<12;i++)
        if(com[i].num!=com[i+1].num)         
        {    
          str2[4]=i;
          break;
        }      
      if(str2[4]==0)
        str2[4]=4;  
    }
    
   for(int i=1;i<13;i++)  //str3 :同花順 
  {
     str3[0]=0;       
   if(com[i].num==4 && com[i].cardsuit==1 && str3[1] == 0)
     str3[1]=i;
   if(com[i].num==5 && com[i].cardsuit==1 && str3[2] == 0)
     str3[2]=i;
   if(com[i].num==6 && com[i].cardsuit==1 && str3[3] == 0)
     str3[3]=i;
   if(com[i].num==7 && com[i].cardsuit==1 && str3[4] == 0)
     str3[4]=i;
  }  
  
  if(com[2].num==3)  //str4 :葫蘆 (3葫) 
  {
    str4[0]=0;               
    str4[1]=1;
    str4[2]=2;   
    for(int i=3;i<12;i++)
      if(com[i].num == com[i+1].num && str4[3]==0  && com[i].num<11)
      {
        str4[3]=i; 
        str4[4]=i+1;      
      }                              
  }
  
  for(int i=1;i<13;i++) //str5 :葫蘆 (3對) 2.A葫不出 
   if(com[i].num == com[i+1].num && com[i+1].num == com[i+2].num && com[1].num==3 && com[i].num<14) 
   {
     str5[0]=0;            
     str5[1]=1;
     str5[2]=i;
     str5[3]=i+1;            
     str5[4]=i+2;            
   } 
   
//-------------------------------------------出牌  
//同花順>鐵支>順子(3~7)>葫蘆(3葫)>葫蘆(3對)>順子(2~6)>pair>單張  
  if(str3[0]==0&&str3[1]!=0&&str3[2]!=0&&str3[3]!=0&&str3[4]!=0) //同花順 
  {
    for(int i=0;i<5;i++)
    {
     com[str3[i]].sw--;
     x[i]=com[str3[i]];
     *jx=5;
    }                                                                                                                       
  }
  else if(str2[0]==0&&str2[1]!=0&&str2[2]!=0&&str2[3]!=0&&str2[4]!=0) //鐵支 
  {
   for(int i=0;i<5;i++)
   {
     com[str2[i]].sw--;
     x[i]=com[str2[i]];
     *jx=5;
   }                
  }
  else if(str0[0]==0&&str0[1]!=0&&str0[2]!=0&&str0[3]!=0&&str0[4]!=0) //順子(3~7) 
   { 
    for(int i=0;i<5;i++)
    {
     com[str0[i]].sw--;
     x[i]=com[str0[i]];
     *jx=5;
    }
   }
  else if(str4[0]==0&&str4[1]!=0&&str4[2]!=0&&str4[3]!=1&&str4[4]!=0)  //葫蘆(3葫) 
  {
   for(int i=0;i<5;i++)
    {
     com[str4[i]].sw--;
     x[i]=com[str4[i]];
     *jx=5;
    } 
  }
  else if(str5[0]==0&&str5[1]!=0&&str5[2]!=0&&str5[3]!=1&&str5[4]!=0)  //葫蘆(3對) 
  {
   for(int i=0;i<5;i++)
    {
     com[str5[i]].sw--;
     x[i]=com[str5[i]];
     *jx=5;
    } 
  } 
  else if(str1[0]==0&&str1[1]!=0&&str1[2]!=0&&str1[3]!=0&&str1[4]!=0) //順子(2~6) 
   { 
    for(int i=0;i<5;i++)
    {
     com[str1[i]].sw--;
     x[i]=com[str1[i]];
     *jx=5;
    }
   }
  else if(com[1].num==3)  //pair
  {
   com[0].sw--;
   com[1].sw--;
   x[0]=com[0];
   x[1]=com[1];
   *jx=2;    
  } 
  else 
  {
    com[0].sw--;
    x[0]=com[0];
    *jx=1;
  }        
    
}
//-----------------------------------------------------------
