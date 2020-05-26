bool solution(std::string const &str, std::string const &ending) {
    if(ending == "")
      return true;
    else{
      int k =0 ;
      for(int i = ending.length()-1; i >= 0; i--){
        if(ending[i] != str[str.length()-1-k])
          return false;
        k++;
      }  
    }
    return true;
    
}
