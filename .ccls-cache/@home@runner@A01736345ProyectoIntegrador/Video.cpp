#include "Video.h"

Video::Video(){
  id = 0; 
  name = "0";
  duration = 0;
  genre = "0";
  review = 0;
  type = "Video";
}

Video::Video(int i, string n, float d, string g, int r){
  id = i; 
  name = n;
  duration = d;
  genre = g;
  review = r;
  type = "Video";
}

string Video::getName(){
  return name;
}

int Video::getReview(){
  return review;
}

string Video::getGenre(){
  return genre;
}

string Video::getType(){
  return type;
}

void Video::setReview(int r){
  review = r;
}


ostream& operator <<(ostream& output, const Video &v){
  output << endl << "-----" << v.type << "-----" << endl << "ID " <<v.id << ", " << v.name << ", " << 
  v.duration << " h, " << v.genre << ", " << v.review << " stars\n";
  return output;
}