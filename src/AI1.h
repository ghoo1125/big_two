
//-----------------------------------------------------------����T�X�P 
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
// ���٨S�����G�@���l���㢶�@���঳�T��H�W��pairs  �@�X��PAIR�΢���i 
//               �����l���㢷�@�B���i���H�W �X��PAIR
//               ���l���㢵�@���㢵���঳���H�W��PAIR�@�X��PARI�γ�i 
//               ���l���㢶�@���������p �p�G�᭱�����i+���O�ߤ@��pair �h�����㢵�t��Ī����  
//               ���l���㢶�@���������p�@�p�G�᭱�����l���㢰���h�����㢵
//               ���l���㢶�@�p�G���㢵�����H�W��PAIR �B�����l���㢰���@�X��PAIR�΢���i   
//-----------------------------------�P�_ 
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
  
    if(com[11].num==15 && com[12].num==15)  //str1 :23456  (��i2�H�W�~�X)
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

   
  if(com[3].num==3) //str2 :�K�� 
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
    
   for(int i=1;i<13;i++)  //str3 :�P�ᶶ 
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
  
  if(com[2].num==3)  //str4 :��Ī (3��) 
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
  
  for(int i=1;i<13;i++) //str5 :��Ī (3��) 2.A�����X 
   if(com[i].num == com[i+1].num && com[i+1].num == com[i+2].num && com[1].num==3 && com[i].num<14) 
   {
     str5[0]=0;            
     str5[1]=1;
     str5[2]=i;
     str5[3]=i+1;            
     str5[4]=i+2;            
   } 
   
//-------------------------------------------�X�P  
//�P�ᶶ>�K��>���l(3~7)>��Ī(3��)>��Ī(3��)>���l(2~6)>pair>��i  
  if(str3[0]==0&&str3[1]!=0&&str3[2]!=0&&str3[3]!=0&&str3[4]!=0) //�P�ᶶ 
  {
    for(int i=0;i<5;i++)
    {
     com[str3[i]].sw--;
     x[i]=com[str3[i]];
     *jx=5;
    }                                                                                                                       
  }
  else if(str2[0]==0&&str2[1]!=0&&str2[2]!=0&&str2[3]!=0&&str2[4]!=0) //�K�� 
  {
   for(int i=0;i<5;i++)
   {
     com[str2[i]].sw--;
     x[i]=com[str2[i]];
     *jx=5;
   }                
  }
  else if(str0[0]==0&&str0[1]!=0&&str0[2]!=0&&str0[3]!=0&&str0[4]!=0) //���l(3~7) 
   { 
    for(int i=0;i<5;i++)
    {
     com[str0[i]].sw--;
     x[i]=com[str0[i]];
     *jx=5;
    }
   }
  else if(str4[0]==0&&str4[1]!=0&&str4[2]!=0&&str4[3]!=1&&str4[4]!=0)  //��Ī(3��) 
  {
   for(int i=0;i<5;i++)
    {
     com[str4[i]].sw--;
     x[i]=com[str4[i]];
     *jx=5;
    } 
  }
  else if(str5[0]==0&&str5[1]!=0&&str5[2]!=0&&str5[3]!=1&&str5[4]!=0)  //��Ī(3��) 
  {
   for(int i=0;i<5;i++)
    {
     com[str5[i]].sw--;
     x[i]=com[str5[i]];
     *jx=5;
    } 
  } 
  else if(str1[0]==0&&str1[1]!=0&&str1[2]!=0&&str1[3]!=0&&str1[4]!=0) //���l(2~6) 
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
