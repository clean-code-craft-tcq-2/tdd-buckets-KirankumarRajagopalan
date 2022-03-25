#include "CurrentRangeUpdate.h"

  int checkRange(int LowLimit, int HighLimit, int samplesno, int* Samples)
  {
          int i=0,count=0;
   while(i<samplesno)
   {
          if(checkRangelimit(LowLimit,HighLimit,i,Samples))
          {
                  count++;
          }
          else
          {
                  /*nothing*/
          }
          ++i;
   }
   return count;
  }
  int checkRangelimit(int LowLimit, int HighLimit, int index, int* Samples)
  {
         return((LowLimit<=Samples[index])&& (HighLimit>=Samples[index]));
          
  }
