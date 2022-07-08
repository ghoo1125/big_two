#include "AI1.h"
#include "AI2.h"
#include "AI3.h"

//---------------------------------------------------------------------------------------
void AI(card *com,card *p,card *comx,card *comy,card x[5],int t,int turn,int *jx,int &pass)
{
int type=0,c=0;
pass=0;
int check1=0,check2=0,check3=0;
for(int i=0;i<13;i++)
{
  if(p[i].num==15 && p[i].cardsuit==4 && p[i].sw==52)
   check1=1; //�P�_�®�G�O�_�X�L      
  if(p[i].num==15 && p[i].cardsuit==3 && p[i].sw==52)
   check2=1; //�P�_�R�ߤG�O�_�X�L 
  if(p[i].num==15 && p[i].cardsuit==2 && p[i].sw==52)
   check3=1; //�P�_�٧ΤG�O�_�X�L      
  if(comx[i].num==15 && comx[i].cardsuit==4 && comx[i].sw==52)
   check1=1; //�P�_�®�G�O�_�X�L      
  if(comx[i].num==15 && comx[i].cardsuit==3 && comx[i].sw==52)
   check2=1; //�P�_�R�ߤG�O�_�X�L 
  if(comx[i].num==15 && comx[i].cardsuit==2 && comx[i].sw==52)
   check3=1; //�P�_�٧ΤG�O�_�X�L      
  if(comy[i].num==15 && comy[i].cardsuit==4 && comy[i].sw==52)
   check1=1; //�P�_�®�G�O�_�X�L      
  if(comy[i].num==15 && comy[i].cardsuit==3 && comy[i].sw==52)
   check2=1; //�P�_�R�ߤG�O�_�X�L 
  if(comy[i].num==15 && comy[i].cardsuit==2 && comy[i].sw==52)
   check3=1; //�P�_�٧ΤG�O�_�X�L      
           
}
//�i���W�X�P����1~6 pass�P�_�O�_pass c�P�_��L�H�O�_��pass 
//-----------------------------------------------------------������L���̤�W�Ѿl���P
int t1=0,t2=0,t3=0;
for(int i=0;i<13;i++)
{
 if(p[i].sw==52) 
  t1++;
 if(comx[i].sw==52) 
  t2++;
 if(comy[i].sw==52) 
  t3++;
}
//-----------------------------------------------------------�˹��i���W���P��  
 if(*jx==5)
 {
     if(x[0].cardsuit==x[1].cardsuit && x[1].cardsuit==x[2].cardsuit && x[2].cardsuit==x[3].cardsuit && x[3].cardsuit==x[4].cardsuit)
      type=6;
     else if(x[1].num==x[2].num && x[2].num==x[3].num)
      type=5;
     else if(x[0].num==x[1].num)
      type=3;   
     else       
      type=4; 
 }
 if(*jx==2)
  type=2;
 if(*jx==1)
  type=1;
//-----------------------------------------------------------           
 for(int i=0;i<13;i++)  //�P�_�O�_�� pass 
 {
   if(com[i].sw==51)
   c=1;
 }    
//----------------------------------------------------------------------�X�P
if(t==turn)   //����T 
{
  AI1(com,x,jx);
  pass=0; 
}
else if(c==1) //��pass 
{
  AI2(com,x,jx,t1,t2,t3);
  pass=0;       
}
else         // �n���P 
  AI3(com,x,jx,pass,type,t1,t2,t3,check1,check2,check3);                          
//----------------------------------------------------------------------

printf("  \n(");  
if(pass==0)
{
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
     
for(int j=0;j<13;j++)
    {              
      if(p[j].sw<52)  //�p�G�Spass �n�X�Τw�X���n�� 
        p[j].sw--;
      if(comx[j].sw<52)
        comx[j].sw--;
      if(comy[j].sw<52)
        comy[j].sw--;      
    }                  
}
else
 printf(" Pass!! ");
printf(")\n");   
 
}
//---------------------------------------------------------------------------------------
