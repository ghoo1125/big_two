#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <graphics.h>
#include <windows.h>
#include <string.h>
#define PRESS(key) if (GetAsyncKeyState(key)& 0x8000)
using namespace std;

struct card 
{
 int cardsuit;
 int num;        
 int sw;
};

//---------------------------------------------------------------------------------------
void sort(card *change)  //排大小 (給玩家看) 
{
 for(int i=0;i<13-1;i++)
  for(int j=0;j<13-i-1;j++)
  { 
    if(change[j].num>change[j+1].num)
     swap(change[j],change[j+1]);    
    if(change[j].num==change[j+1].num && change[j].cardsuit>change[j+1].cardsuit) 
     swap(change[j],change[j+1]);
  }
}
//---------------------------------------------------------------------------------------
void reset(card c[4][13])  //重設牌 
{
int i,j;   
for(j=1;j<5;j++)     
  for(i=3;i<16;i++)//儲存時存3~15方便比大小 print時要%13  牌A大小為14 牌2大小為15 
    {
      c[j-1][i-3].num=i;
      c[j-1][i-3].cardsuit=j;
    }
}
//---------------------------------------------------------------------------------------
void mixcard(card c[4][13]) //洗牌 
{

int k,l;     
for(int i=0;i<4;i++)
  for(int j=0;j<13;j++)
   {
    k=rand()%4;
    l=rand()%13;
    swap(c[i][j],c[k][l]);      
   }   
}
//---------------------------------------------------------------------------------------
void dealcard(card c[4][13],card *p,card *c1,card *c2,card *c3) // 發牌 
{
for(int i=0;i<13;i++)
 {
  c1[i].cardsuit=c[0][i].cardsuit; 
  c1[i].num=c[0][i].num;
  c1[i].sw=52;
 }     
for(int i=0;i<13;i++)
 {
  c2[i].cardsuit=c[1][i].cardsuit; 
  c2[i].num=c[1][i].num;
  c2[i].sw=52;
 }  
for(int i=0;i<13;i++)
 {
  c3[i].cardsuit=c[2][i].cardsuit; 
  c3[i].num=c[2][i].num;
  c3[i].sw=52; 
 }  
for(int i=0;i<13;i++)
 {
  p[i].cardsuit=c[3][i].cardsuit; 
  p[i].num=c[3][i].num;
  p[i].sw=52; 
 }     
}
//---------------------------------------------------------------------------------------
int find(card *p,card *c1,card *c2,card *c3)  //找梅花三
{

  for(int i=0;i<13;i++)
   {
     if(p[i].num==3 && p[i].cardsuit==1)   
     return 3;
     if(c1[i].num==3 && c1[i].cardsuit==1)   
     return 0;
     if(c2[i].num==3 && c2[i].cardsuit==1)   
     return 1;
     if(c3[i].num==3 && c3[i].cardsuit==1)   
     return 2;
   }  
}


//---------------------------------------------------------------------------------------
int convert(int x) //換花色 
{
  if(x==1)
    return 5;    
  else if(x==2) 
    return 4;
  else if(x==3)
    return 3;
  else if(x==4)
    return 6;
  else return 0;//空白鍵的ascii code 
}
//---------------------------------------------------------------------------------------
