function stray(array){
  for(var i = 0; i < array.length; i++){
    if(array[i] === array[i+1])
    {
        if(array[i] === array[i+2])
        {}
        else{return array[i+2];}
    } 
    else if(array[i] !== array[i+2])
    {return array[i]}
  }
}
