int sequence[][7] = { 
  {1, 0, 0, 0, 1, 1, 1}, 
  {1, 1, 1, 0, 1, 1, 1}, 
  {1, 0, 0, 1, 1, 1, 1}, 
  {0, 1, 1, 0, 1, 1, 1}, 
  {1, 0, 0, 1, 1, 1, 0}, 
  {0, 0, 0, 1, 1, 1, 0}, 
  {1, 1, 0, 0, 1, 1, 1}, 
 }; 
  void printNumber(int number) { 
    for (int i = 0; i < 7; i++) { 
      digitalWrite(1 + i,sequence[number][i]); 
 
    } 
  } 
 
 