//-----------------------------------------------------------要壓牌 
void AI3(card *com,card x[5],int *jx,int &pass,int type,int &t1,int &t2,int &t3,int &check1,int &check2,int &check3)
{
int t; //手上剩餘張數 
int str0[5]={0},str1[5]={0},str2[5]={0},str3[5]={0},str4[5]={0}; 
for(int i=0;i<5;i++)
{
 str0[i]=0;
 str1[i]=0;
 str2[i]=0;
 str3[i]=0;
 str4[i]=0;
}    
for(int i=0;i<13;i++)
  if(com[i].sw==52)      
    t++;
//----------------------------------判斷
for(int i=0;i<13;i++)  //str1 :順子  (目前沒考慮A~5 2~6) 
{           
   if(com[i].sw==52 && com[i].num>=x[0].num && com[i].num<11)
   for(int j=1;j<13;j++)
    { 
        str1[0]=i; 
      if((com[i].num+1)==com[j].num && com[j].sw==52)
        str1[1]=j;
      if((com[i].num+2)==com[j].num && com[j].sw==52)
        str1[2]=j;
      if((com[i].num+3)==com[j].num && com[j].sw==52)
        str1[3]=j;
      if((com[i].num+4)==com[j].num && com[j].sw==52  && (com[j].num>x[4].num||(com[j].num==x[4].num && com[j].cardsuit>x[4].cardsuit) || x[3].num==14))     
        str1[4]=j;
      if(str1[1]!=0 && str1[2]!=0 && str1[3]!=0 && str1[4]!=0)
      break;  
    }       
    if(str1[1]!=0 && str1[2]!=0 && str1[3]!=0 && str1[4]!=0)
      break;
   str1[1]=0;
   str1[2]=0;
   str1[3]=0;
   str1[4]=0;     
}

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


int s=0;
for(int i=0;i<9;i++) //str2 :鐵支 
{
  if(com[i].num==com[i+1].num && com[i+1].num==com[i+2].num && com[i+2].num==com[i+3].num
     && com[i].sw==52 && com[i+1].sw==52 && com[i+2].sw==52 && com[i+3].sw==52 && com[i].num<14)
  {
    str2[0]=i;
    str2[1]=i+1;
    str2[2]=i+2;
    str2[3]=i+3;
    for(int j=0;j<13;j++) //存最小 
     if(com[j].sw==52 && com[j].num!=com[i].num)
     {
      str2[4]=j;
      break;
     }
    //略過pair的還沒打 
   /*if(str2[4]!=0)
    break;
   else 
   {
    str2[4]=s;
    break;
   } */
  }      
} 

for(int i=0;i<11;i++) //str3 :葫蘆 
{
  if(com[i].num==com[i+1].num && com[i+2].num==com[i+1].num && com[i].sw==52 && com[i+1].sw==52 && com[i+2].sw==52 && com[i].num<14 && com[i].num>x[2].num)
  {
   str3[0]=i;
   str3[1]=i+1;
   str3[2]=i+2;
   for(int j=0;j<12;j++)
   {
    if(com[j].num!=com[i].num && com[j].num==com[j+1].num && com[j].sw==52 && com[j+1].sw==52 && com[j].num<14)      
      {
       str3[3]=j;
       str3[4]=j+1;
       break;
      }     
   }
    break;
  }                       
}

//----------------------------------出牌    
  if(type==6)  //同花順 
 {        
   pass=1;
 }  
//--------------------------------------------------------------------------------   
 else if(type==5) //鐵支 
 {
   if(str4[1]!=0)
   {
    for(int i=0;i<5;i++)
     {
      com[str4[i]].sw--;
      x[i]=com[str4[i]];
      *jx=5;
      pass=0;
     }          
   }
   else if(com[str2[2]].num>x[2].num && str2[1]!=0 && str2[2]!=0 && str2[3]!=0 && str2[0]!=0)
    for(int i=0;i<5;i++)
     {
      com[str2[i]].sw--;
      x[i]=com[str2[i]];
      *jx=5;
      pass=0;
     } 
   else 
    pass=1;
 }  
//--------------------------------------------------------------------------------     
 else if(type==4) //順子
 { 
    if(str4[1]!=0 && str4[2]!=0 && str4[3]!=0 && str4[4]!=0 && (t2<5 || t3<5 || t1<5 || x[4].num>13))
   {
    for(int i=0;i<5;i++)
     {
      com[str4[i]].sw--;
      x[i]=com[str4[i]];
      *jx=5;
      pass=0;
     }          
   }      
   else if(str2[1]!=0 && str2[2]!=0 && str2[3]!=0 && str2[0]!=0 &&(t2<7 || t3<7 || t1<7 || x[4].num>12))
   {
     for(int i=0;i<5;i++)
     {
      com[str2[i]].sw--;
      x[i]=com[str2[i]];
      *jx=5;
      pass=0;
     } 
   }      
   else if(str1[1]!=0 && str1[2]!=0 && str1[3]!=0 && str1[4]!=0)   
    for(int i=0;i<5;i++)
     {
      com[str1[i]].sw--;
      x[i]=com[str1[i]];
      *jx=5;
      pass=0;
     } 
   else 
    pass=1;  
 }
//--------------------------------------------------------------------------------     
 else if(type==3) //葫蘆 
 {
    if(str4[1]!=0 && str4[2]!=0 && str4[3]!=0 && str4[4]!=0 && x[2].num>13)
   {
    for(int i=0;i<5;i++)
     {
      com[str4[i]].sw--;
      x[i]=com[str4[i]];
      *jx=5;
      pass=0;
     }          
   }   
   else if(str2[1]!=0 && str2[2]!=0 && str2[3]!=0 && str2[0]!=0 )//&&(t2<7 || t3<7 || t1<7 || x[4].num>12)
   {
     for(int i=0;i<5;i++)
     {
      com[str2[i]].sw--;
      x[i]=com[str2[i]];
      *jx=5;
      pass=0;
     } 
   }      
   else if(str3[1]!=0 && str3[2]!=0 && str3[4]!=0)   
    for(int i=0;i<5;i++)
     {
      com[str3[i]].sw--;
      x[i]=com[str3[i]];
      *jx=5;
      pass=0;
     } 
   else 
    pass=1;
 }      
//--------------------------------------------------------------------------------     
 else if(type==2) //pair 
  {  
   if(str4[1]!=0 && str4[2]!=0 && str4[3]!=0 && str4[4]!=0 && (t2<6||t3<6||t1<6 || x[0].num==2))
   {
    for(int i=0;i<5;i++)
     {
      com[str4[i]].sw--;
      x[i]=com[str4[i]];
      *jx=5;
      pass=0;
     }          
   }  
   else if(str2[1]!=0 && str2[2]!=0 && str2[3]!=0 && str2[0]!=0 &&(t2<6||t3<6||t1<6))
   { 
    for(int i=0;i<5;i++)
     {
      com[str2[i]].sw--;
      x[i]=com[str2[i]];
      *jx=5;
      pass=0;
     } 
   }
   else
   {
   for(int i=0;i<13;i++)
   {     
     if(com[i].num==x[1].num && com[i].num==com[i+1].num && com[i+1].cardsuit>x[1].cardsuit && com[i].sw == 52 && com[i+1].sw == 52 && (com[i].num!=15 || t<=3 || t1<=3 || t2<=3 || t3<=3)) //黑桃pair最大      
      {  
         if(i!=str4[0] && i!=str4[1] && i!=str4[2] && i!=str4[3] && i!=str4[4] && (i+1)!=str4[0] && (i+1)!=str4[1] && (i+1)!=str4[2] && (i+1)!=str4[3] && (i+1)!=str4[4] && i!=12)
         { 
          com[i].sw--;
          com[i+1].sw--;
          x[0]=com[i];
          x[1]=com[i+1];    
          *jx=2;
          pass=0;       
          break;
         } 
         else
         i++;                           
      }   
     else if(com[i].num>x[0].num && com[i].num==com[i+1].num && com[i].sw == 52 && com[i+1].sw == 52 && (com[i].num!=15||t1<3||t2<3||t3<3))
      {
         if((x[0].num>11 || t1<4 || t2<4 || t3<4 || t==2) && (com[i].num==14 || t<5)) //Q PAIR以上才會用A PAIR壓 
        {
          com[i].sw--;
          com[i+1].sw--;
          x[0]=com[i];
          x[1]=com[i+1];    
          *jx=2;
          pass=0;       
          break;                     
        }
        else if(x[0].num<=11 && com[i].num<14)
        {  
          com[i].sw--;
          com[i+1].sw--;
          x[0]=com[i];
          x[1]=com[i+1];    
          *jx=2;
          pass=0;
          break;   
        }
      }   
     pass=1;
   } 
   }    
  }   
//--------------------------------------------------------------------------------  
else if(type==1)  //單張 
 {
int k=-1;// 存可壓且最小 
 for(int i=0;i<13;i++)
   if((com[i].num>x[0].num || (com[i].num==x[0].num && com[i].cardsuit>x[0].cardsuit))&&com[i].sw==52)
   {
     k=i;
     break;
   }  
   
  if(str4[1]!=0 && str4[2]!=0 && str4[3]!=0 && str4[4]!=0 &&(t2<4||t3<4||t1<4|| t<9 ||(x[0].num==15&&x[0].cardsuit==4)))
   {
    for(int i=0;i<5;i++)
     {
      com[str4[i]].sw--;
      x[i]=com[str4[i]];
      *jx=5;
      pass=0;
     }          
   }  
  else if(str2[1]!=0 && str2[2]!=0 && str2[3]!=0 && str2[0]!=0 &&(t2<6||t3<6||t1<6||(x[0].num==15&&x[0].cardsuit==4)))
   { 
    for(int i=0;i<5;i++)
     {
      com[str2[i]].sw--;
      x[i]=com[str2[i]];
      *jx=5;
      pass=0;
     } 
   }
 else
 {     
  for(int i=0;i<13;i++)
    if((com[i].num>x[0].num || (com[i].num==x[0].num && com[i].cardsuit>x[0].cardsuit))&&com[i].sw==52)
    {              
                       
      if(com[i].num==15 && com[i].cardsuit==4 && com[i].sw==52) //黑桃2 
      {
        if(t>=9 && t1>=5 && t2>=5 && t3>=5 )
           {
            pass=1;
            break;
           }          
         else 
           {
             com[i].sw--;
             x[0]=com[i];
             *jx=1;
             pass=0;
             break;
           }    
      }           
      else if(com[i].num==15 && com[i].cardsuit==3 && com[i].sw==52) //愛心2
      {
        if(check1==0 || t1<=5 || t2<=5 || t3<=5)   
          {
             com[i].sw--;
             x[0]=com[i];
             *jx=1;
             pass=0;
             break;
           } 
        else
           {
             pass=1;
             break;
           } 
       }      
      else if(com[i].num==15 && com[i].cardsuit==2 && com[i].sw==52)//菱形二 
      {
        if((check1==0 && check2==0) || t1<=7 || t2<=7|| t3<=7)
          {
             com[i].sw--;
             x[0]=com[i];
             *jx=1;
             pass=0;
             break;
           } 
        else
           {
             pass=1;
             break;
           } 
        
      } 
       else if(com[i].num==15 && com[i].cardsuit==1 && com[i].sw==52)//梅花二 
      {
        if((check1==0 && check2==0 && check3==0) || t1<=9 || t2<=9|| t3<=9)
          {
             com[i].sw--;
             x[0]=com[i];
             *jx=1;
             pass=0;
             break;
           } 
        else
           {
             pass=1;
             break;
           } 
        
      } 
      else if(t1==1 || t2==1 || t3==1)//有人剩一張時
      {
       int z=0;
       for(int i=0;i<13;i++)
        {
          if(com[i].num>x[0].num && com[i].sw==52)  
             z=i; 
        } 
        if(z!=0)
        {
          com[z].sw--;
          x[0]=com[z];
          *jx=1;
          pass=0;
          break;       
        }
        else
        {
         pass=1;
         break; 
        }
      } 
      else if( ( (com[i].num != com[i+1].num || com[i+1].sw !=52) && (com[i].num != com[i-1].num || i==0 || com[i-1].sw !=52))|| (com[i].num==14 && com[i].sw==52 && t<=8 ))//有一樣的 往後找 
      { 
        
        com[i].sw--;
        x[0]=com[i];
        *jx=1;
        pass=0;
        break;
        
      }
      else if((i==12 && k!=-1)&& (t1<=8 || t2<=8 || t3<=8) )
      {  
        com[k].sw--;
        x[0]=com[k];
        *jx=1;
        pass=0;
        break;   
      }  
      else
        pass=1;
    }
    else if(i==12)
       pass=1; 
 }      
 }     
//--------------------------------------------------------------------------------  
}
