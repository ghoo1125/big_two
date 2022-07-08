//-----------------------------------------------------------------
int menu(int *s0) //回傳局數 
{
int i=0,j=0,s=0,k=0,l=0,m=0,n=0,o=0,enter=0,a=0,b=0,c=0;
int d=1;

int e=-80;//int e=30;

int f=10;

int p=235;//int p=160;

int t=-45;

char q;

cleardevice();

settextstyle(8,0,0);
setcolor(6);
setusercharsize(2,1,3,1);
outtextxy(390,10,"大");
outtextxy(390,145,"老");
outtextxy(390,290,"二");
setcolor(15);
settextstyle(8,0,8);
setcolor(14);
outtextxy(70,10,"an");
outtextxy(50,120,"AMAZING");
outtextxy(40,230,"DETECTIVE");
setcolor(15);
settextstyle(8,0,0);
//settextstyle(10,0,4);

settextstyle(8,0,4);
setcolor(15);
outtextxy(50,440,"MADE BY ");
settextstyle(8,0,7);
outtextxy(100,480,"GOD HanChung");
settextstyle(8,0,4);
setcolor(7);
outtextxy(610,500,"& ㄒㄈㄨ");
setcolor(15);

rectangle(500,50,730,150);
rectangle(500,180,730,280);
rectangle(500,300,730,400);
settextstyle(8,0,6);
outtextxy(530,74,"START");
outtextxy(530,205,"TIPS");
outtextxy(530,325,"EXIT");
setfillstyle(3,6);
floodfill(540,100,15);



while(1)
 {

   settextstyle(10,0,4);
   setfillstyle(5,3);
   
   j=0;
   i=getch();
   if(i!=13)
     j=getch();
   
   if(j==72)
   {     
    if(s>0)
    s=s-1;
    else s=2;
   }
   if(j==80)
    s=(s+1)%3;
 
   if(s==0)
   {
    cleardevice(); 
    
    settextstyle(8,0,0);
    setcolor(6);
    setusercharsize(2,1,3,1);
    outtextxy(390,10,"大");
    outtextxy(390,145,"老");
    outtextxy(390,290,"二");
    setcolor(15);
    settextstyle(8,0,8);
    setcolor(14);
    outtextxy(70,10,"an");
    outtextxy(50,120,"AMAZING");
    outtextxy(40,230,"DETECTIVE");
    settextstyle(8,0,0);
    //settextstyle(10,0,4);

    settextstyle(8,0,4);
    setcolor(15);
    outtextxy(50,440,"MADE BY ");
    settextstyle(8,0,7);
    outtextxy(100,480,"GOD HanChung");
    settextstyle(8,0,4);
    setcolor(7);
    outtextxy(610,500,"& ㄒㄈㄨ");
    setcolor(15);

    rectangle(500,50,730,150);
    rectangle(500,180,730,280);
    rectangle(500,300,730,400);
    settextstyle(8,0,6);
    outtextxy(530,74,"START");
    outtextxy(530,205,"TIPS");
    outtextxy(530,325,"EXIT");
    setfillstyle(3,6);
    floodfill(540,100,15);
    
    if(i==13)
    {
     cleardevice();
     while(1)
     {
       
       if(a==0)
       {
        cleardevice();
        rectangle(40,40,530,140);
        settextstyle(8,0,6);
        setcolor(10);
        outtextxy(70,65,"Play One Role");
        setcolor(15);
        settextstyle(8,0,6);
        outtextxy(200,170,"R");
        outtextxy(200,240,"O");
        outtextxy(200,310,"D");
        settextstyle(8,0,1);
        setcolor(11);
        outtextxy(360,170,"xiao");
        outtextxy(360,240,"ruo");
        outtextxy(360,310,"ruo");
        setcolor(15);
        settextstyle(8,0,6);
        outtextxy(500,170,"G");
        outtextxy(500,240,"U");
        outtextxy(500,310,"N");
        settextstyle(8,0,8);
        setcolor(14);
        outtextxy(660,150,"DA");
        outtextxy(660,220,"GI");
        outtextxy(660,290,"GI");
        setcolor(15);
        settextstyle(8,0,3);
        setcolor(13);
        outtextxy(10,450,"featured:");
        
        setcolor(2);  
      fillellipse(50*d+75-e,465-f,5,5);
      fillellipse(50*d+75-e,465-f,4,4);
      fillellipse(50*d+75-e,465-f,3,3);
      fillellipse(50*d+75-e,465-f,2,2);
      fillellipse(50*d+75-e,465-f,1,1);
      line(50*d+74-e,464-f,50*d+76-e,464-f);
      fillellipse(50*d+69-e,472-f,5,5);
      fillellipse(50*d+69-e,472-f,4,4);
      fillellipse(50*d+69-e,472-f,3,3);
      fillellipse(50*d+69-e,472-f,2,2);
      fillellipse(50*d+69-e,472-f,1,1);
      line(50*d+68-e,471-f,50*d+70-e,471-f);
      line(50*d+68-e,472-f,50*d+70-e,472-f);
      fillellipse(50*d+81-e,472-f,5,5);
      fillellipse(50*d+81-e,472-f,4,4);
      fillellipse(50*d+81-e,472-f,3,3);
      fillellipse(50*d+81-e,472-f,2,2);
      fillellipse(50*d+81-e,472-f,1,1);
      line(50*d+80-e,471-f,50*d+82-e,471-f);
      line(50*d+80-e,472-f,50*d+82-e,472-f);
      line(50*d+73-e,465-f,50*d+73-e,480-f);
      line(50*d+74-e,465-f,50*d+74-e,480-f);
      line(50*d+75-e,465-f,50*d+75-e,480-f);
      line(50*d+76-e,465-f,50*d+76-e,480-f);
      line(50*d+69-e,479-f,50*d+81-e,479-f);  
      line(50*d+69-e,480-f,50*d+81-e,480-f); 
      
      line(50*1+84+p,495+t,50*1+84+p,495+t);
      line(50*1+83+p,496+t,50*1+85+p,496+t);
      line(50*1+82+p,497+t,50*1+86+p,497+t);
      line(50*1+81+p,498+t,50*1+87+p,498+t);
      line(50*1+80+p,499+t,50*1+88+p,499+t);
      line(50*1+79+p,500+t,50*1+89+p,500+t);  
      line(50*1+78+p,501+t,50*1+90+p,501+t);
      line(50*1+77+p,502+t,50*1+91+p,502+t);
      line(50*1+77+p,503+t,50*1+91+p,503+t); 
      fillellipse(50*1+79+p,507+t,5,5);
      fillellipse(50*1+79+p,507+t,4,4);
      fillellipse(50*1+79+p,507+t,3,3);
      fillellipse(50*1+79+p,507+t,2,2);
      fillellipse(50*1+79+p,507+t,1,1);
      line(50*1+78+p,506+t,50*1+80+p,506+t);
      line(50*1+78+p,507+t,50*1+80+p,507+t);
      fillellipse(50*1+89+p,507+t,5,5);
      fillellipse(50*1+89+p,507+t,4,4);
      fillellipse(50*1+89+p,507+t,3,3);
      fillellipse(50*1+89+p,507+t,2,2);
      fillellipse(50*1+89+p,507+t,1,1);
      line(50*1+88+p,506+t,50*1+91+p,506+t);
      line(50*1+88+p,507+t,50*1+91+p,507+t);  
      line(50*1+90+p,506+t,50*1+92+p,506+t);
      line(50*1+90+p,507+t,50*1+92+p,507+t);
      line(50*1+83+p,500+t,50*1+83+p,515+t);
      line(50*1+84+p,500+t,50*1+84+p,515+t);
      line(50*1+78+p,514+t,50*1+90+p,514+t);  
      line(50*1+78+p,515+t,50*1+90+p,515+t); 
           setcolor(15);   
      settextstyle(8,0,2);
        setcolor(15);
        outtextxy(445,447," for N rounds");
        outtextxy(445,467,"  point + N");
        //outtextxy(445,467,"  ");
        setcolor(14);
        outtextxy(690,427,"Da");
        outtextxy(690,447,"Gi");
        outtextxy(690,467,"Gi"); 
        settextstyle(8,0,4);
        setcolor(15);
        outtextxy(220,447,"3");
        outtextxy(380,447,"2");
        rectangle(190,495,230,535);
        outtextxy(200,500,"1");
        setcolor(11);
        outtextxy(360,500,"2");
        setcolor(15);
        outtextxy(500,500,"3");
        setcolor(14);
        outtextxy(700,500,"4");
        setcolor(15);
        
        
        b=getch();
        if(b!=13)
         c=getch();
        else if(b==13)
        {
         *s0=1;
         break;
        }
        if(c==77)
         a++;                 
       }
       if(a==1)
       {
        cleardevice();
        rectangle(40,40,530,140);
        settextstyle(8,0,6);
        setcolor(10);
        outtextxy(70,65,"Play One Role");
        setcolor(15);
        settextstyle(8,0,6);
        outtextxy(200,170,"R");
        outtextxy(200,240,"O");
        outtextxy(200,310,"D");
        settextstyle(8,0,1);
        setcolor(11);
        outtextxy(360,170,"xiao");
        outtextxy(360,240,"ruo");
        outtextxy(360,310,"ruo");
        setcolor(15);
        settextstyle(8,0,6);
        outtextxy(500,170,"G");
        outtextxy(500,240,"U");
        outtextxy(500,310,"N");
        settextstyle(8,0,8);
        setcolor(14);
        outtextxy(660,150,"DA");
        outtextxy(660,220,"GI");
        outtextxy(660,290,"GI");
        setcolor(15);
        settextstyle(8,0,3);
        setcolor(13);
        outtextxy(10,450,"featured:");
            setcolor(2);  
      fillellipse(50*d+75-e,465-f,5,5);
      fillellipse(50*d+75-e,465-f,4,4);
      fillellipse(50*d+75-e,465-f,3,3);
      fillellipse(50*d+75-e,465-f,2,2);
      fillellipse(50*d+75-e,465-f,1,1);
      line(50*d+74-e,464-f,50*d+76-e,464-f);
      fillellipse(50*d+69-e,472-f,5,5);
      fillellipse(50*d+69-e,472-f,4,4);
      fillellipse(50*d+69-e,472-f,3,3);
      fillellipse(50*d+69-e,472-f,2,2);
      fillellipse(50*d+69-e,472-f,1,1);
      line(50*d+68-e,471-f,50*d+70-e,471-f);
      line(50*d+68-e,472-f,50*d+70-e,472-f);
      fillellipse(50*d+81-e,472-f,5,5);
      fillellipse(50*d+81-e,472-f,4,4);
      fillellipse(50*d+81-e,472-f,3,3);
      fillellipse(50*d+81-e,472-f,2,2);
      fillellipse(50*d+81-e,472-f,1,1);
      line(50*d+80-e,471-f,50*d+82-e,471-f);
      line(50*d+80-e,472-f,50*d+82-e,472-f);
      line(50*d+73-e,465-f,50*d+73-e,480-f);
      line(50*d+74-e,465-f,50*d+74-e,480-f);
      line(50*d+75-e,465-f,50*d+75-e,480-f);
      line(50*d+76-e,465-f,50*d+76-e,480-f);
      line(50*d+69-e,479-f,50*d+81-e,479-f);  
      line(50*d+69-e,480-f,50*d+81-e,480-f); 
      
      line(50*1+84+p,495+t,50*1+84+p,495+t);
      line(50*1+83+p,496+t,50*1+85+p,496+t);
      line(50*1+82+p,497+t,50*1+86+p,497+t);
      line(50*1+81+p,498+t,50*1+87+p,498+t);
      line(50*1+80+p,499+t,50*1+88+p,499+t);
      line(50*1+79+p,500+t,50*1+89+p,500+t);  
      line(50*1+78+p,501+t,50*1+90+p,501+t);
      line(50*1+77+p,502+t,50*1+91+p,502+t);
      line(50*1+77+p,503+t,50*1+91+p,503+t); 
      fillellipse(50*1+79+p,507+t,5,5);
      fillellipse(50*1+79+p,507+t,4,4);
      fillellipse(50*1+79+p,507+t,3,3);
      fillellipse(50*1+79+p,507+t,2,2);
      fillellipse(50*1+79+p,507+t,1,1);
      line(50*1+78+p,506+t,50*1+80+p,506+t);
      line(50*1+78+p,507+t,50*1+80+p,507+t);
      fillellipse(50*1+89+p,507+t,5,5);
      fillellipse(50*1+89+p,507+t,4,4);
      fillellipse(50*1+89+p,507+t,3,3);
      fillellipse(50*1+89+p,507+t,2,2);
      fillellipse(50*1+89+p,507+t,1,1);
      line(50*1+88+p,506+t,50*1+91+p,506+t);
      line(50*1+88+p,507+t,50*1+91+p,507+t);  
      line(50*1+90+p,506+t,50*1+92+p,506+t);
      line(50*1+90+p,507+t,50*1+92+p,507+t);
      line(50*1+83+p,500+t,50*1+83+p,515+t);
      line(50*1+84+p,500+t,50*1+84+p,515+t);
      line(50*1+78+p,514+t,50*1+90+p,514+t);  
      line(50*1+78+p,515+t,50*1+90+p,515+t); 
     setcolor(15);   
      settextstyle(8,0,2);
        setcolor(15);
        outtextxy(445,447," for N rounds");
        outtextxy(445,467,"  point + N");
        //outtextxy(445,467,"  ");
        setcolor(14);
        outtextxy(690,427,"Da");
        outtextxy(690,447,"Gi");
        outtextxy(690,467,"Gi"); 
        settextstyle(8,0,4);
        setcolor(15);
        outtextxy(220,447,"3");
        outtextxy(380,447,"2");
        rectangle(350,495,390,535);
        outtextxy(200,500,"1");
        setcolor(11);
        outtextxy(360,500,"2");
        setcolor(15);
        outtextxy(500,500,"3");
        setcolor(14);
        outtextxy(700,500,"4");
        setcolor(15);
        
        b=getch();
        if(b!=13)
         c=getch();
        else if(b==13)
         {
          *s0=2;
          break;
        }
        if(c==77)
         a++;            
        else if(c==75)
         a--;       
       }
       if(a==2)
       {
        cleardevice();
        rectangle(40,40,530,140);
        settextstyle(8,0,6);
        setcolor(10);
        outtextxy(70,65,"Play One Role");
        setcolor(15);
        settextstyle(8,0,6);
        outtextxy(200,170,"R");
        outtextxy(200,240,"O");
        outtextxy(200,310,"D");
        settextstyle(8,0,1);
        setcolor(11);
        outtextxy(360,170,"xiao");
        outtextxy(360,240,"ruo");
        outtextxy(360,310,"ruo");
        setcolor(15);
        settextstyle(8,0,6);
        outtextxy(500,170,"G");
        outtextxy(500,240,"U");
        outtextxy(500,310,"N");
        settextstyle(8,0,8);
        setcolor(14);
        outtextxy(660,150,"DA");
        outtextxy(660,220,"GI");
        outtextxy(660,290,"GI");
        setcolor(15);
        settextstyle(8,0,3);
        setcolor(13);
        outtextxy(10,450,"featured:");
            setcolor(2);  
      fillellipse(50*d+75-e,465-f,5,5);
      fillellipse(50*d+75-e,465-f,4,4);
      fillellipse(50*d+75-e,465-f,3,3);
      fillellipse(50*d+75-e,465-f,2,2);
      fillellipse(50*d+75-e,465-f,1,1);
      line(50*d+74-e,464-f,50*d+76-e,464-f);
      fillellipse(50*d+69-e,472-f,5,5);
      fillellipse(50*d+69-e,472-f,4,4);
      fillellipse(50*d+69-e,472-f,3,3);
      fillellipse(50*d+69-e,472-f,2,2);
      fillellipse(50*d+69-e,472-f,1,1);
      line(50*d+68-e,471-f,50*d+70-e,471-f);
      line(50*d+68-e,472-f,50*d+70-e,472-f);
      fillellipse(50*d+81-e,472-f,5,5);
      fillellipse(50*d+81-e,472-f,4,4);
      fillellipse(50*d+81-e,472-f,3,3);
      fillellipse(50*d+81-e,472-f,2,2);
      fillellipse(50*d+81-e,472-f,1,1);
      line(50*d+80-e,471-f,50*d+82-e,471-f);
      line(50*d+80-e,472-f,50*d+82-e,472-f);
      line(50*d+73-e,465-f,50*d+73-e,480-f);
      line(50*d+74-e,465-f,50*d+74-e,480-f);
      line(50*d+75-e,465-f,50*d+75-e,480-f);
      line(50*d+76-e,465-f,50*d+76-e,480-f);
      line(50*d+69-e,479-f,50*d+81-e,479-f);  
      line(50*d+69-e,480-f,50*d+81-e,480-f); 
      
      line(50*1+84+p,495+t,50*1+84+p,495+t);
      line(50*1+83+p,496+t,50*1+85+p,496+t);
      line(50*1+82+p,497+t,50*1+86+p,497+t);
      line(50*1+81+p,498+t,50*1+87+p,498+t);
      line(50*1+80+p,499+t,50*1+88+p,499+t);
      line(50*1+79+p,500+t,50*1+89+p,500+t);  
      line(50*1+78+p,501+t,50*1+90+p,501+t);
      line(50*1+77+p,502+t,50*1+91+p,502+t);
      line(50*1+77+p,503+t,50*1+91+p,503+t); 
      fillellipse(50*1+79+p,507+t,5,5);
      fillellipse(50*1+79+p,507+t,4,4);
      fillellipse(50*1+79+p,507+t,3,3);
      fillellipse(50*1+79+p,507+t,2,2);
      fillellipse(50*1+79+p,507+t,1,1);
      line(50*1+78+p,506+t,50*1+80+p,506+t);
      line(50*1+78+p,507+t,50*1+80+p,507+t);
      fillellipse(50*1+89+p,507+t,5,5);
      fillellipse(50*1+89+p,507+t,4,4);
      fillellipse(50*1+89+p,507+t,3,3);
      fillellipse(50*1+89+p,507+t,2,2);
      fillellipse(50*1+89+p,507+t,1,1);
      line(50*1+88+p,506+t,50*1+91+p,506+t);
      line(50*1+88+p,507+t,50*1+91+p,507+t);  
      line(50*1+90+p,506+t,50*1+92+p,506+t);
      line(50*1+90+p,507+t,50*1+92+p,507+t);
      line(50*1+83+p,500+t,50*1+83+p,515+t);
      line(50*1+84+p,500+t,50*1+84+p,515+t);
      line(50*1+78+p,514+t,50*1+90+p,514+t);  
      line(50*1+78+p,515+t,50*1+90+p,515+t); 
 setcolor(15);   
      settextstyle(8,0,2);
        setcolor(15);
        outtextxy(445,447," for N rounds");
        outtextxy(445,467,"  point + N");
        //outtextxy(445,467,"  ");
        setcolor(14);
        outtextxy(690,427,"Da");
        outtextxy(690,447,"Gi");
        outtextxy(690,467,"Gi"); 
        settextstyle(8,0,4);
        setcolor(15);
        outtextxy(220,447,"3");
        outtextxy(380,447,"2");
        rectangle(490,495,530,535);
        outtextxy(200,500,"1");
        setcolor(11);
        outtextxy(360,500,"2");
        setcolor(15);
        outtextxy(500,500,"3");
        setcolor(14);
        outtextxy(700,500,"4");
        setcolor(15);
        b=getch();
        if(b!=13)
         c=getch();
        else if(b==13)
        {
         *s0=3;
         break;
        }
        if(c==77)
         a++;   
        else if(c==75)
         a--;           
       }
             

       if(a==3)
       {
        cleardevice();
        rectangle(40,40,530,140);
        settextstyle(8,0,6);
        setcolor(10);
        outtextxy(70,65,"Play One Role");
        setcolor(15);
        settextstyle(8,0,6);
        outtextxy(200,170,"R");
        outtextxy(200,240,"O");
        outtextxy(200,310,"D");
        settextstyle(8,0,1);
        setcolor(11);
        outtextxy(360,170,"xiao");
        outtextxy(360,240,"ruo");
        outtextxy(360,310,"ruo");
        setcolor(15);
        settextstyle(8,0,6);
        outtextxy(500,170,"G");
        outtextxy(500,240,"U");
        outtextxy(500,310,"N");
        settextstyle(8,0,8);
        setcolor(14);
        outtextxy(660,150,"DA");
        outtextxy(660,220,"GI");
        outtextxy(660,290,"GI");
        setcolor(15);
        settextstyle(8,0,3);
        setcolor(13);
        outtextxy(10,450,"featured:");
        
            setcolor(2);                   
      fillellipse(50*d+75-e,465-f,5,5);    
      fillellipse(50*d+75-e,465-f,4,4);
      fillellipse(50*d+75-e,465-f,3,3);
      fillellipse(50*d+75-e,465-f,2,2);
      fillellipse(50*d+75-e,465-f,1,1);
      line(50*d+74-e,464-f,50*d+76-e,464-f);
      fillellipse(50*d+69-e,472-f,5,5);    
      fillellipse(50*d+69-e,472-f,4,4);
      fillellipse(50*d+69-e,472-f,3,3);
      fillellipse(50*d+69-e,472-f,2,2);
      fillellipse(50*d+69-e,472-f,1,1);
      line(50*d+68-e,471-f,50*d+70-e,471-f);
      line(50*d+68-e,472-f,50*d+70-e,472-f);
      fillellipse(50*d+81-e,472-f,5,5);
      fillellipse(50*d+81-e,472-f,4,4);
      fillellipse(50*d+81-e,472-f,3,3);
      fillellipse(50*d+81-e,472-f,2,2);
      fillellipse(50*d+81-e,472-f,1,1);
      line(50*d+80-e,471-f,50*d+82-e,471-f);
      line(50*d+80-e,472-f,50*d+82-e,472-f);
      line(50*d+73-e,465-f,50*d+73-e,480-f);
      line(50*d+74-e,465-f,50*d+74-e,480-f);
      line(50*d+75-e,465-f,50*d+75-e,480-f);
      line(50*d+76-e,465-f,50*d+76-e,480-f);
      line(50*d+69-e,479-f,50*d+81-e,479-f);  
      line(50*d+69-e,480-f,50*d+81-e,480-f); 
                                                    
      line(50*1+84+p,495+t,50*1+84+p,495+t);
      line(50*1+83+p,496+t,50*1+85+p,496+t);
      line(50*1+82+p,497+t,50*1+86+p,497+t);
      line(50*1+81+p,498+t,50*1+87+p,498+t);
      line(50*1+80+p,499+t,50*1+88+p,499+t);
      line(50*1+79+p,500+t,50*1+89+p,500+t);  
      line(50*1+78+p,501+t,50*1+90+p,501+t);
      line(50*1+77+p,502+t,50*1+91+p,502+t);
      line(50*1+77+p,503+t,50*1+91+p,503+t); 
      fillellipse(50*1+79+p,507+t,5,5);
      fillellipse(50*1+79+p,507+t,4,4);
      fillellipse(50*1+79+p,507+t,3,3);
      fillellipse(50*1+79+p,507+t,2,2);
      fillellipse(50*1+79+p,507+t,1,1);           
      line(50*1+78+p,506+t,50*1+80+p,506+t);
      line(50*1+78+p,507+t,50*1+80+p,507+t);
      fillellipse(50*1+89+p,507+t,5,5);
      fillellipse(50*1+89+p,507+t,4,4);
      fillellipse(50*1+89+p,507+t,3,3);
      fillellipse(50*1+89+p,507+t,2,2);
      fillellipse(50*1+89+p,507+t,1,1);
      line(50*1+88+p,506+t,50*1+91+p,506+t);
      line(50*1+88+p,507+t,50*1+91+p,507+t);  
      line(50*1+90+p,506+t,50*1+92+p,506+t);
      line(50*1+90+p,507+t,50*1+92+p,507+t);
      line(50*1+83+p,500+t,50*1+83+p,515+t);
      line(50*1+84+p,500+t,50*1+84+p,515+t);
      line(50*1+78+p,514+t,50*1+90+p,514+t);  
      line(50*1+78+p,515+t,50*1+90+p,515+t); 
      setcolor(15);   
      settextstyle(8,0,2);
        setcolor(15);
        outtextxy(445,447," for N rounds");
        outtextxy(445,467,"  point + N");
        //outtextxy(445,467,"  ");
        setcolor(14);
        outtextxy(690,427,"Da");
        outtextxy(690,447,"Gi");
        outtextxy(690,467,"Gi"); 
        settextstyle(8,0,4);
        setcolor(15);
        outtextxy(220,447,"3");
        outtextxy(380,447,"2");
        rectangle(690,495,730,535);
        outtextxy(200,500,"1");
        setcolor(11);
        outtextxy(360,500,"2");
        setcolor(15);
        outtextxy(500,500,"3");
        setcolor(14);
        outtextxy(700,500,"4");
        setcolor(15);
        b=getch();
        if(b!=13)
         c=getch();
        else if(b==13)
       {
          *s0=4;
          break;
        }
        if(c==75)
         a--;            
       }
     }
     
     cleardevice();
       while(1)
       {
        if(o==0)
       {
        cleardevice();
        rectangle(90,260,690,360);
        settextstyle(8,0,6);
        outtextxy(110,290,"battle");
        outtextxy(330,290,"1");
        outtextxy(380,290,"3");
        outtextxy(430,290,"5");
        outtextxy(480,290,"rounds");
        rectangle(320,280,370,340);
        m=getch();
        if(m!=13)
         n=getch();
        else if(m==13)
         return 1;
        if(n==77)
         o++;          
       }
     if(o==1)
     {
      cleardevice();
      
      setbkcolor(0);
      setfillstyle(0,0);
      rectangle(90,260,690,360);
      settextstyle(8,0,6);
      outtextxy(110,290,"battle");
      outtextxy(330,290,"1");
      outtextxy(380,290,"3");
      outtextxy(430,290,"5");
      outtextxy(480,290,"rounds");
      rectangle(370,280,420,340);
      m=getch();
      if(m!=13)
       n=getch();
       else if(m==13)
      return 3; 
       if(n==77)
        o++;  
       else if(n==75)
        o--;      
      
     }
     if(o==2)
     {
      cleardevice();
      rectangle(90,260,690,360);
      settextstyle(8,0,6);
      outtextxy(110,290,"battle");
      outtextxy(330,290,"1");
      outtextxy(380,290,"3");
      outtextxy(430,290,"5");
      outtextxy(480,290,"rounds");
      rectangle(420,280,470,340);
      m=getch();
      if(m!=13)
       n=getch();
      else if(m==13)
      return 5; 
      if(n==75)
        o--;        
     } 
    } //while 
    
    
    
  
    } //if i
   }  //if s
   if(s==1)
   {
    cleardevice();
        settextstyle(8,0,0);
    setcolor(6);
    setusercharsize(2,1,3,1);
    outtextxy(390,10,"大");
    outtextxy(390,145,"老");
    outtextxy(390,290,"二");
    setcolor(15);
    settextstyle(8,0,8);
    setcolor(14);
    outtextxy(70,10,"an");
    outtextxy(50,120,"AMAZING");
    outtextxy(40,230,"DETECTIVE");
    settextstyle(8,0,0);
    //settextstyle(10,0,4);

    settextstyle(8,0,4);
    setcolor(15);
    outtextxy(50,440,"MADE BY ");
    settextstyle(8,0,7);
    outtextxy(100,480,"GOD HanChung");
    settextstyle(8,0,4);
    setcolor(7);
    outtextxy(610,500,"& ㄒㄈㄨ");
    setcolor(15);

    rectangle(500,50,730,150);
    rectangle(500,180,730,280);
    rectangle(500,300,730,400);
    settextstyle(8,0,6);
    outtextxy(530,74,"START");
    outtextxy(530,205,"TIPS");
    outtextxy(530,325,"EXIT");
    setfillstyle(3,6);
    floodfill(540,200,15);
    if(i==13)
    {
     cleardevice();
     settextstyle(8,0,2);
     setcolor(10);
     outtextxy(1,2,"TO CONTROL");
     setcolor(15);
     settextstyle(8,0,1);
     outtextxy(20,27,"[↑]: to choose a card    [↓]: to cancel the choice");
     outtextxy(20,47,"[←]/[→]: move left/right");
     outtextxy(20,67,"[enter]: to confirm or PASS(without choosing any cards)");
     outtextxy(20,87,"[esc]: to quit the game");
     settextstyle(8,0,2);
     setcolor(10);
     outtextxy(1,115,"RULES TO PLAY");
     setcolor(15);
     settextstyle(8,0,1);
     setcolor(14);
     outtextxy(20,140,"Order");
     setcolor(15);
     outtextxy(85,140,"by rank(2>A>K>Q>J>10>9>8>7>6>5>4>3)");
     outtextxy(85,160,"then by suit(spade>heart>dimind>club).");
     setcolor(14);
     outtextxy(20,180,"As Usual"); 
     setcolor(15);
     outtextxy(125,180,"each player must play a higher card or combination"); 
     outtextxy(125,200,"than the one before, with the same number of cards."); 
     outtextxy(125,220,"Except the beat all combinations(Tiki,Straight Flush).");
     setcolor(14);
     outtextxy(20,240,"Combinations of Cards");
     setcolor(15);
     outtextxy(20,260,"[Single]: Any 1 card from the deck,"); 
     outtextxy(127,280,"ordered by the rank with suit being the tie-breaker.");
     outtextxy(20,300,"[Pair]: Any 2 cards of matching rank,");
     outtextxy(107,320,"ordered as with singular cards by the card of the higher suit.");     
     outtextxy(20,340,"[Straight]: Any 5 cards in a sequence (but not all of the same suit).");
     outtextxy(142,360," Rank is determined by the highest valued card."); 
     outtextxy(140,380," 'A2345' is the lowest and the '23456' is the highest.");
     outtextxy(20,400,"[Full House]: A composite of a 3-of-a-kind combination and a pair."); 
     outtextxy(60,420,"          Rank is determined by the value of the triple.");
     outtextxy(20,440,"[Tiki]: Any set of 4 cards of the same rank, plus any 5th card.");
     outtextxy(85,460,"  Rank is determined by the value of the 4-card set.");
     outtextxy(20,480,"[Straight Flush]: Five cards in sequence in the same suit.");
     outtextxy(87,500,"            Ranked the same as straights.");
     settextstyle(8,0,2);
     setcolor(13);
     outtextxy(540,545,"[esc]: back to menu");
     setcolor(15);
     while(i!=27)
      {
       i=getch();
      }
      if(i==27)
      {
       
        cleardevice(); 
            settextstyle(8,0,0);
    setcolor(6);
    setusercharsize(2,1,3,1);
    outtextxy(390,10,"大");
    outtextxy(390,145,"老");
    outtextxy(390,290,"二");
    setcolor(15);
    settextstyle(8,0,8);
    setcolor(14);
    outtextxy(70,10,"an");
    outtextxy(50,120,"AMAZING");
    outtextxy(40,230,"DETECTIVE");
    settextstyle(8,0,0);
    //settextstyle(10,0,4);

    settextstyle(8,0,4);
    setcolor(15);
    outtextxy(50,440,"MADE BY ");
    settextstyle(8,0,7);
    outtextxy(100,480,"GOD HanChung");
    settextstyle(8,0,4);
    setcolor(7);
    outtextxy(610,500,"& ㄒㄈㄨ");
    setcolor(15);

    rectangle(500,50,730,150);
    rectangle(500,180,730,280);
    rectangle(500,300,730,400);
    settextstyle(8,0,6);
    outtextxy(530,74,"START");
    outtextxy(530,205,"TIPS");
    outtextxy(530,325,"EXIT");
    setfillstyle(3,6);
    floodfill(540,100,15); 
    s=0; 
      }
    }
     
   }
   if(s==2)
   {
    cleardevice(); 
        settextstyle(8,0,0);
    setcolor(6);
    setusercharsize(2,1,3,1);
    outtextxy(390,10,"大");
    outtextxy(390,145,"老");
    outtextxy(390,290,"二");
    setcolor(15);
    settextstyle(8,0,8);
    setcolor(14);
    outtextxy(70,10,"an");
    outtextxy(50,120,"AMAZING");
    outtextxy(40,230,"DETECTIVE");
    settextstyle(8,0,0);
    //settextstyle(10,0,4);

    settextstyle(8,0,4);
    setcolor(15);
    outtextxy(50,440,"MADE BY ");
    settextstyle(8,0,7);
    outtextxy(100,480,"GOD HanChung");
    settextstyle(8,0,4);
    setcolor(7);
    outtextxy(610,500,"& ㄒㄈㄨ");
    setcolor(15);

    rectangle(500,50,730,150);
    rectangle(500,180,730,280);
    rectangle(500,300,730,400);
    settextstyle(8,0,6);
    outtextxy(530,74,"START");
    outtextxy(530,205,"TIPS");
    outtextxy(530,325,"EXIT");
    setfillstyle(3,6);
    floodfill(540,350,15);
    
     if(i==13)
     {
       cleardevice(); 
      /* setfillstyle(5,3);
       settextstyle(10,0,1);                   
       rectangle(200,250,690,290);
       outtextxy(310,260,"Are you sure to quit?");
       rectangle(340,295,410,325);
       outtextxy(355,305,"YES");
       rectangle(430,295,500,325);
       outtextxy(445,305,"NO");
       floodfill(380,300,15); */
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
             break;
             
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
                {  cleardevice();
                   settextstyle(8,0,4);
                   setcolor(12);
                   outtextxy(200,250,"Thanks for playing. :-} ");
                   delay(1000);  
                   exit(1);
                }
              
          }
             
        
        }  
        i=0;
        s=0;
        cleardevice();
            settextstyle(8,0,0);
    setcolor(6);
    setusercharsize(2,1,3,1);
    outtextxy(390,10,"大");
    outtextxy(390,145,"老");
    outtextxy(390,290,"二");
    setcolor(15);
    settextstyle(8,0,8);
    setcolor(14);
    outtextxy(70,10,"an");
    outtextxy(50,120,"AMAZING");
    outtextxy(40,230,"DETECTIVE");
    settextstyle(8,0,0);
    //settextstyle(10,0,4);

    settextstyle(8,0,4);
    setcolor(15);
    outtextxy(50,440,"MADE BY ");
    settextstyle(8,0,7);
    outtextxy(100,480,"GOD HanChung");
    settextstyle(8,0,4);
    setcolor(7);
    outtextxy(610,500,"& ㄒㄈㄨ");
    setcolor(15);

    rectangle(500,50,730,150);
    rectangle(500,180,730,280);
    rectangle(500,300,730,400);
    settextstyle(8,0,6);
    outtextxy(530,74,"START");
    outtextxy(530,205,"TIPS");
    outtextxy(530,325,"EXIT");
    setfillstyle(3,6);
    floodfill(540,100,15);
     }
   }     
  } 
}    
