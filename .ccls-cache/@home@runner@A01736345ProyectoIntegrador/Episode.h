// Episode
// Created by Luis Angel Cruz Garcia on 08/06/22.

#ifndef Episode_h
#define Episode_h

#include <iostream>
#include <vector>
using namespace std;

class Episode{
private:
  string title;
  int season;
public:
  Episode();
  Episode(string, int);
  string getTitle();
  int getSeason();
};
#endif