// Video
// Created by Luis Angel Cruz Garcia on 08/06/22.

#ifndef Video_h
#define Video_h

#include <iostream>
#include <vector>
using namespace std;

class Video{
protected:
  int ID; //Posible string
  string name;
  float duration;
  string gender;
  int review;
  string type;
public:
  Video();
  Video(int,string,float,string,int);
  int getReview(); 
  virtual void showVideo() = 0;
  string getType();
  string getGender();
  string getName();
  void setReview(int);
  friend ostream& operator <<(ostream& output, const Video &v);
};
#endif