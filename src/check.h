
//---------------------------------------------------------------------------------------
int check1(card p[13],card x[5],int yaxis[13],int jx)  //�T�{�P���@�P  y:���a x:�i���W  ���@�P�^�� 0  
{                                   
    card y[5];
    int jy=0;
    
   for(int i=0;i<13;i++)
    if(yaxis[i]==1)
    {
        y[jy]=p[i];        
        jy++;
    }         
   
    if( jx!=jy && jy!=5 )  //  �K��M�P�ᶶ?
      return 0;    
    
    if(jy==5 && (y[0].num+1==y[1].num && y[1].num+1==y[2].num && y[2].num+1==y[3].num && y[3].num+1==y[4].num&&y[4].num!=15)||(y[3].num==14&&y[4].num==15&&y[0].num==3&&y[1].num==4&&y[2].num==5)||(y[4].num==15&&y[0].num==3&&y[1].num==4&&y[2].num==5&&y[3].num==6) )   
      if(y[0].cardsuit==y[1].cardsuit && y[1].cardsuit==y[2].cardsuit && y[2].cardsuit==y[3].cardsuit && y[3].cardsuit==y[4].cardsuit)
      { 
        if(jx==5 && (x[0].num+1==x[1].num && x[1].num+1==x[2].num && x[2].num+1==x[3].num && x[3].num+1==x[4].num&&x[4].num!=15)||(x[3].num==14&&x[4].num==15&&x[0].num==3&&x[1].num==4&&x[2].num==5)||(x[4].num==15&&x[0].num==3&&x[1].num==4&&x[2].num==5&&x[3].num==6) )    
          {
          if(x[0].cardsuit==x[1].cardsuit && x[1].cardsuit==x[2].cardsuit && x[2].cardsuit==x[3].cardsuit && x[3].cardsuit==x[4].cardsuit)
             return 6;  //x y ���O�P�ᶶ 
          else return 66;   
          }
        else return 66;   //  y �P�ᶶ 
      }

    if((jy==5) && (y[1].num==y[2].num) && (y[2].num==y[3].num) && (y[0].num==y[1].num || y[4].num==y[1].num) )  
     {
       if(jx==5 && x[1].num==x[2].num && x[2].num==x[3].num && (x[0].num==x[1].num || x[4].num==x[1].num) )
         return 5;     // x y ���O�K�� 
       else 
         return 55;     //  y �K�� 
     }
    
    if( jx==1 && jy==1)   //1:��i 
      return 1;  
      
    if( jx==2 && jy==2 && y[0].num==y[1].num )  // 2:�@��
       return 2;
      
    if( jx==5 && jy==5)
      {
       if((x[0].num+1==x[1].num&&x[1].num+1==x[2].num&&x[2].num+1==x[3].num&&x[3].num+1==x[4].num&&x[4].num!=15)||(x[3].num==14&&x[4].num==15&&x[0].num==3&&x[1].num==4&&x[2].num==5)||(x[4].num==15&&x[0].num==3&&x[1].num==4&&x[2].num==5&&x[3].num==6)  )
         {
          if(x[0].cardsuit==x[1].cardsuit && x[1].cardsuit==x[2].cardsuit && x[2].cardsuit==x[3].cardsuit && x[3].cardsuit==x[4].cardsuit)    
            return 0; //x �P�ᶶ    
          if((y[0].num+1==y[1].num&&y[1].num+1==y[2].num&&y[2].num+1==y[3].num&&y[3].num+1==y[4].num&&y[4].num!=15)||(y[3].num==14&&y[4].num==15&&y[0].num==3&&y[1].num==4&&y[2].num==5)||(y[4].num==15&&y[0].num==3&&y[1].num==4&&y[2].num==5&&y[3].num==6) )  
            return 4; //4:���l               
         }
        if(x[1].num==x[2].num && x[2].num==x[3].num && (x[0].num==x[1].num || x[4].num==x[1].num) )
            return 0; //x �K�� 
            
        if(x[0].num==x[1].num && x[3].num==x[4].num && (x[2].num==x[1].num || x[2].num==x[3].num) )  //3:��Ī
           if(y[0].num==y[1].num && y[3].num==y[4].num && (y[2].num==y[1].num || y[2].num==y[3].num) )
             return 3;                                
      } 
    return 0;
}
//---------------------------------------------------------------------------------------
int check2(card *p,int *y) // �T�{����T�X�P 
{
   card x[5];
   int jx=0;
     
    
  for(int i=0;i<13;i++)
    {
         if(y[i])
         {
           x[jx]=p[i];
           jx++;        
         }
    }
    
   if((x[0].cardsuit!=1||x[0].num!=3)&&(x[1].cardsuit!=1||x[1].num!=3)&&(x[2].cardsuit!=1||x[2].num!=3)&&(x[3].cardsuit!=1||x[3].num!=3)&&(x[4].cardsuit!=1||x[4].num!=3)) 
     return 0;
     
   else if(jx==5)
     {
       if((x[0].num+1==x[1].num && x[1].num+1==x[2].num && x[2].num+1==x[3].num && x[3].num+1==x[4].num && x[4].num!=15)||(x[3].num==14&&x[4].num==15&&x[0].num==3&&x[1].num==4&&x[2].num==5)||(x[4].num==15&&x[0].num==3&&x[1].num==4&&x[2].num==5&&x[3].num==6))
           return 1;
       else if(x[0].num==x[1].num && x[3].num==x[4].num && (x[2].num==x[1].num || x[2].num==x[3].num))
           return 1;    
       else if(x[1].num==x[2].num && x[2].num==x[3].num && (x[0].num==x[1].num || x[4].num==x[1].num)) 
           return 1;
       else 
           return 0;         
     }   
   else if(jx==1)
     return 1; 
   else if( jx==2 && x[0].num==x[1].num )  
       return 1;  
   else 
       return 0; 
    
}
//---------------------------------------------------------------------------------------
int check3(card *p,int *y) // ��L��pass 
{
   card x[5];
   int jx=0;
     
    
  for(int i=0;i<13;i++)
    {
         if(y[i])
         {
           x[jx]=p[i];
           jx++;        
         }
    }
     
   if(jx==5)
     {
       if((x[0].num+1==x[1].num && x[1].num+1==x[2].num && x[2].num+1==x[3].num && x[3].num+1==x[4].num && x[4].num!=15)||(x[3].num==14&&x[4].num==15&&x[0].num==3&&x[1].num==4&&x[2].num==5)||(x[4].num==15&&x[0].num==3&&x[1].num==4&&x[2].num==5&&x[3].num==6))
           return 1;
       else if(x[0].num==x[1].num && x[3].num==x[4].num && (x[2].num==x[1].num || x[2].num==x[3].num) )
           return 1;    
       else if(x[1].num==x[2].num && x[2].num==x[3].num && (x[0].num==x[1].num || x[4].num==x[1].num)) 
           return 1;         
       else 
           return 0;
     }   
   else if(jx==1)
     return 1; 
   else if( jx==2 && x[0].num==x[1].num )  
       return 1;  
   else 
       return 0; 
    
}
//---------------------------------------------------------------------------------------
