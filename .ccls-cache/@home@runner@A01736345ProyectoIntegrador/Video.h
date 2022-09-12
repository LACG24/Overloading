// Video
// Created by Luis Angel Cruz Garcia on 08/06/22.

#ifndef Video_h
#define Video_h

#include <iostream>
#include <vector>
using namespace std;

class Video{
protected:
  int id; 
  string name;
  float duration;
  string genre;
  int review;
  string type;
public:
  Video();
  Video(int,string,float,string,int);
  virtual void showVideo() = 0;
  virtual int getReview(); 
  string getType();
  string getGenre();
  string getName();
  void setReview(int);
  friend ostream& operator <<(ostream& output, const Video &v);
};
#endif