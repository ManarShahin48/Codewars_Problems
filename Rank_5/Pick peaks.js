function pickPeaks(arr) 
{
  var output = {pos: [], peaks: []};
  if(arr.length === 0)
      return output;
  var topPeak = arr[0];
  var topPos = 0;
    for(var i=1; i<arr.length; i++)
    {
       
         if(arr[i] > arr[i-1]) 
         { 
            topPeak = arr[i];
            topPos = i;
         }  
         else if(arr[i] < arr[i-1]) 
         {
            if(topPos > 0) 
            {
              output.pos.push(topPos);
              output.peaks.push(topPeak);
              topPos = 0;
            } 
             
        }  
    }
  
  return output;
}
