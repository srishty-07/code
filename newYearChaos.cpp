function minimumBribes(queue) {
  bool chaotic = false;
  int bribes = 0;
  for (int i = 0; i < queue.length; i++) {
    if (queue[i] - (i+1) > 2) { chaotic = true; }
      for (int j = queue[i] - 2; j < i; j++) {
      if (queue[j] > queue[i]) { bribes++; }
      }
    }
  if(chaotic === true){
  cout<<"Too chaotic";
  } else {
  cout<<bribes;
  }
}
