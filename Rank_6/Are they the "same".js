function comp(array1, array2){
if(array1!=null &&array2!= null)
{
     array1.sort(function(a, b){
    return a - b;})
      array2.sort(function(a, b){
    return a - b;})
      for(var i=0;i<array1.length;i++)
      {
            if(array2[i]!=array1[i]*array1[i])
            return false;
      }
      return true ;
}
  return false;
}
