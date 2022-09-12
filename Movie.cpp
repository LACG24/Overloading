#include "Movie.h"

Movie::Movie():Video(){
  type = "Movie";
}

Movie::Movie(int i, string n, float d, string g, int r):Video(i,n,d,g,r){
  type = "Movie";
}

int Movie::getReview(){
  return review;
}

void Movie::showVideo(){
  cout << "\n°°°°°Movie°°°°°\n" << "ID " << id << ", " << name << ", " << 
  duration << " h, " << genre << ", " << review << " stars\n\n";
}
  
