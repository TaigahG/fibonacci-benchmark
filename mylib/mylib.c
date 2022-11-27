int FibIterative(int N){
 int first = 0, second = 1, result, i;
    for (int i = 0; i < N+1; i++)
  {
    if (i <= 1){
        result = i;
    }
    else
    {
      result = first + second;
      first = second;
      second = result;
    }
}
return result;
}


int FibRecursion(int N){
   if (N==0){
        return 0;
    }
    else if (N==1){
        return 1;
    }
    else{
        return FibRecursion(N-1)+FibRecursion(N-2);
    }
    
}
