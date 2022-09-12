// Movie
// Created by Luis Angel Cruz Garcia on 08/06/22.

#ifndef Movie_h
#define Movie_h

#include "Video.h"

class Movie:public Video{
public:
  Movie();
  Movie(int,string,float,string,int);
  int getReview();
  void showVideo();
};
#endif