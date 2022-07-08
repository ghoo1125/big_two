

//---------------------------------------------------------------------------------------
int compare(int c,card p[13],card x[5],int yaxis[13],int jx)   // 比大小  c是 match的回傳值 
{
    if(c==0)
      return 0;
      
   card y[5];
    int jy=0;
    
   for(int i=0;i<13;i++)
   {
    if(yaxis[i]==1)
    {
        y[jy]=p[i];
        jy++; 
    }               
   }
    
   
    if( c==1 && x[0].num<y[0].num )  // 單張  先比大小 
      return 1;
    else if(c==1 && x[0].num==y[0].num && x[0].cardsuit<y[0].cardsuit)  // 再比花色 
      return 1;
      
    if( (c==2) && x[0].num<y[0].num )  // 一對  先比大小 
      return 1;
    else if(  (c==2) && (x[0].num==y[0].num) && (x[1].cardsuit<y[1].cardsuit)  )   // 再比花色 
      return 1;
      
    if(c==3 && x[2].num<y[2].num )   //葫蘆  比大小 
      return 1;
      
    if(c==5 && x[2].num<y[2].num )   // 鐵支  比大小     
      return 1;
    
    if(c==55 || c==66 )   // 鐵支或同花順直接壓 
      return 1;
    
    if( (c==4 || c==6) && y[0].num!=11 && y[0].num!=12 && y[0].num!=13)  // 順子 
      {
        if( x[3].num !=14 && y[3].num!=14 && (x[4].num < y[4].num))  //非 A2345 狀況 
          return 1;        
        else if(x[3].num !=14 && y[3].num!=14 && x[4].num==y[4].num && (y[4].cardsuit>x[4].cardsuit) )
          return 1;
          
        if( x[3].num==14 && y[3].num!=14)
          return 1;
        else if( x[3].num==14 && y[3].num==14 && (y[2].cardsuit>x[2].cardsuit))        
          return 1;      
      }
    
    return 0;
                
    
}
//-----------------------------------------------------------------------------
 
