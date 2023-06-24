string reverseWord(string str){
    
  int n = str.length();
  if(n==0)
  return "";
  
  
  int s = 0 , e = n-1;
  while(s<e){
      swap(str[s] , str[e]);
      s++;
      e--;
  }
  
  return str;
}
