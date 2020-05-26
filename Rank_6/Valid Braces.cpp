using namespace std;
bool valid_braces(std::string braces) 
{
  stack<char> sta; 
    char x;
    for (int i=0; i<braces.length(); i++) 
    { 
        if (braces[i] == '(' || braces[i] == '[' || braces[i] == '{') 
        { 
            sta.push(braces[i]); 
            continue; 
        } 
        if (sta.empty()) 
           return false; 
  
        switch (braces[i]) 
        { 
          case ')':
            x = sta.top(); 
            sta.pop(); 
            if (x == '{' || x == '[') 
                return false; 
            break;
          case '}':
            x = sta.top(); 
            sta.pop(); 
            if (x == '(' || x == '[') 
                return false; 
            break; 
          case ']':
            x = sta.top(); 
            sta.pop(); 
            if (x == '(' || x == '{') 
                return false; 
            break; 
        } 
    } 
   return (sta.empty()); 
}
