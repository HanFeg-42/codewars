const stringToNumber = function(str){
  let res = 0;
  let i = 0;
  let x = 1;
  while (i < str.length) {
    if (str[i] == '-')
      x = -1;
    else
      res = res * 10 + (str[i] - '0');
    i++;
  }
  return x * res;
}
