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
  cout << "\n°°°°°Movie°°°°°\n" << "ID " << ID << ", " << name << ", " << 
  duration << " h, " << gender << ", " << review << " stars\n\n";
}
  
string Movie::getGender(){
  return gender;
}
