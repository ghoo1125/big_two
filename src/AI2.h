
//-----------------------------------------------------------全pass 
void AI2(card *com,card x[5],int *jx,int &t1,int &t2,int &t3)
{
//-----------------------------------------------------------  判斷
int str4[5]={0},str1[2]={0},str2[5]={0},str3[5]={0},t=0;
for(int i=0;i<5;i++)
{
 str4[i]=0;
 str1[i]=0;
 str2[i]=0;
 str3[i]=0;
}    
for(int i=0;i<13;i++)
  if(com[i].sw==52)      
    t++;
    
int r=-1;
r=rand()%2;

for(int i=0;i<13;i++)  //str4 :同花順   (A~5 2~6 不考慮)
 {
   if(com[i].sw==52)
   for(int j=i+1;j<13;j++)
    {
        str4[0]=i; 
      if((com[i].num)+1==com[j].num && com[i].cardsuit==com[j].cardsuit && com[j].sw==52)
        str4[1]=j;
      if((com[i].num)+2==com[j].num && com[i].cardsuit==com[j].cardsuit && com[j].sw==52)
        str4[2]=j;
      if((com[i].num)+3==com[j].num && com[i].cardsuit==com[j].cardsuit && com[j].sw==52)
        str4[3]=j;
      if((com[i].num)+4==com[j].num && com[i].cardsuit==com[j].cardsuit && com[j].sw==52 && com[j].num!=15)     
        str4[4]=j;
        
      if(str4[4]!=0 && str4[1]!=0 && str4[2]!=0 && str4[3]!=0)
       break;  
    }  
     
    if(str4[4]!=0 && str4[1]!=0 && str4[2]!=0 && str4[3]!=0)
       break;
      str4[1]=0;
      str4[2]=0;
      str4[3]=0;
      str4[4]=0;         
 }  
 /*
   if(com[i].sw==52 && com[i].num==14) //A2345
   for(int j=1;j<13;j++)
    {    
        str0[3]=i;     
      if(com[i].num+1==com[j].num && com[i].cardsuit==com[j].cardsuit && com[j].sw==52)
        str0[4]=j;
      if(com[i].num-13==com[j].num && com[i].cardsuit==com[j].cardsuit && com[j].sw==52)
        str0[0]=j;
      if(com[i].num-14==com[j].num && com[i].cardsuit==com[j].cardsuit && com[j].sw==52)
        str0[1]=j;
      if(com[i].num-15==com[j].num && com[i].cardsuit==com[j].cardsuit && com[j].sw==52 && com[j].num!=15)      
        str0[2]=j;
    }   
    if(com[i].sw==52 && com[i].num==15) //23456
    for(int j=1;j<13;j++)
    {
      str0[4]=i;     
      if(com[i].num-12==com[j].num && com[i].cardsuit==com[j].cardsuit && com[j].sw==52)
        str0[1]=j;
      if(com[i].num-11==com[j].num && com[i].cardsuit==com[j].cardsuit && com[j].sw==52)
        str0[2]=j;
      if(com[i].num-10==com[j].num && com[i].cardsuit==com[j].cardsuit && com[j].sw==52)
        str0[3]=j;
      if(com[i].num-9==com[j].num && com[i].cardsuit==com[j].cardsuit && com[j].sw==52 && com[j].num!=15)     
        str0[4]=j;
    }   
 }*/
for(int i=0;i<13;i++) //str3 葫蘆 
{
 str3[1]=0;
 str3[2]=0;
 str3[3]=0;
 str3[4]=0;
 if(com[i].num == com[i+1].num && com[i+1].num == com[i+2].num && com[i].sw==52 && com[i+1].sw==52 && com[i+2].sw==52 && com[i].num<14)
 {
    str3[0]=i;
    str3[1]=i+1;
    str3[2]=i+2;
    for(int j=0;j<13;j++)
      if(com[j].num == com[j+1].num && com[j].sw==52 && com[j+1].sw==52 && com[j].num!=com[i].num && com[j].num<13)      
         {
           str3[3]=j;
           str3[4]=j+1;
           if(str3[4]!=0)  
            break;       
         }   
    if(str3[4]!=0)
    break;          
 }               
}

for(int i=0;i<12;i++)  //str1 :pair  K PAIR 以上不出 除非剩兩張 
{
  if(com[i].num==com[i+1].num && com[i].sw==52 && com[i+1].sw==52 && (com[i].num<13||t==2||t1==1||t2==1||t3==1))
  {       
    str1[0]=i;
    str1[1]=i+1;
    break; 
  }    
} 

for(int i=0;i<13;i++)  //str2 :順子  (目前沒考慮A~5 2~6) 
{
   str2[1]=0;
   str2[2]=0;
   str2[3]=0;
   str2[4]=0;       
   if(com[i].sw==52)
   for(int j=1;j<13;j++)
    { 
        str2[0]=i; 
      if((com[i].num+1)==com[j].num && com[j].sw==52)
        str2[1]=j;
      if((com[i].num+2)==com[j].num && com[j].sw==52)
        str2[2]=j;
      if((com[i].num+3)==com[j].num && com[j].sw==52)
        str2[3]=j;
      if((com[i].num+4)==com[j].num && com[j].sw==52 && com[j].num!=15)     
        str2[4]=j;
    }       
    if(str2[1]!=0 && str2[2]!=0 && str2[3]!=0 && str2[4]!=0)
      break;  
} 

 
//-----------------------------------------------------------  出牌  

    if(str3[4]!=0)
    {
     for(int i=0;i<5;i++)
      { 
       com[str3[i]].sw--;
       x[i]=com[str3[i]];
       *jx=5;
      }    
    }
    else if(str2[1]!=0 && str2[2]!=0 && str2[3]!=0 && str2[4]!=0)
    {
     for(int i=0;i<5;i++)
      {
       com[str2[i]].sw--;
       x[i]=com[str2[i]];
       *jx=5;
      }                                                                                                                              
    }
    else if(str1[1]!=0 && (r==1 || t1==1 || t2==1 || t3==1 || t<=8)) 
    {
      x[0]=com[str1[0]];
      x[1]=com[str1[1]];
      *jx=2;
      com[str1[0]].sw--;
      com[str1[1]].sw--;           
    }   
    else 
    {
     if(t1==1 || t2==1 || t3==1)//有人剩一張時
      {
       int z=0;
       for(int i=0;i<13;i++)
        {
          if(com[i].sw==52)  
             z=i; 
        } 
        if(z!=0)
        {
          com[z].sw--;
          x[0]=com[z];
          *jx=1;     
        }
       }
     else
     {
      for(int i=0;i<13;i++)
       if(com[i].num==com[i+1].num && com[i].sw==52 && com[i+1].sw==52 && i!=12)
        i++;
       else if(com[i].sw==52)
         {      
           com[i].sw--;
           x[0]=com[i];
           *jx=1;
           break;
         }
      }   
      
    }        
    
}
//-----------------------------------------------------------
