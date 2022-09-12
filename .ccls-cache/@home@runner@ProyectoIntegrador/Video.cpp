#include "Video.h"

Video::Video(){
  ID = 0; 
  name = "0";
  duration = 0;
  gender = "0";
  review = 0;
  type = "Video";
}

Video::Video(int i, string n, float d, string g, int r){
  ID = i; 
  name = n;
  duration = d;
  gender = g;
  review = r;
  type = "Video";
}

string Video::getName(){
  return name;
}

int Video::getReview(){
  return review;
}

string Video::getGender(){
  return gender;
}

string Video::getType(){
  return type;
}

void Video::setReview(int r){
  review = r;
}

ostream& operator <<(ostream& output, const Video &v){
  output << endl << "-----" << v.type << "-----" << endl << "ID " <<v.ID << ", " << v.name << ", " << 
  v.duration << " h, " << v.gender << ", " << v.review << " stars\n";
  return output;
}