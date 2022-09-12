#include "Episode.h"

Episode::Episode(){
  title = "NA";
  season = 0;
}

Episode::Episode(string t, int s){
  title = t;
  season = s;
}

string Episode::getTitle(){
  return title;
}

int Episode::getSeason(){
  return season;
}