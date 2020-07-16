function printerError(s) {
  var len = 0;
  var coun = 0;
   for(var i = 0;i < s.length;i++)
     {
       len = s.length;
       if(s[i] > "m")
         coun++;
     }
  return coun+"/"+len;
}
