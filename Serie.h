// Serie
// Created by Luis Angel Cruz Garcia on 08/06/22.

#ifndef Serie_h
#define Serie_h

#include "Video.h"
#include "Episode.h"

class Serie:public Video{
private:
  vector <Episode> episodes;
public:
  Serie();
  Serie(int,string,float,string,int, vector<Episode>);
  void showVideo();
  int getReview();
};
#endif