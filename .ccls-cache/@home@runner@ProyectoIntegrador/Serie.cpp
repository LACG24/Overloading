#include "Serie.h"
#include "Episode.h"
#include <unistd.h>

Serie::Serie():Video(){
  type = "Serie";
  Episode e1("First", 1);
  episodes.push_back(e1);
}

Serie::Serie(int i, string n, float d, string g, int r, vector<Episode> e):Video(i,n,d,g,r){
  type = "Serie";
  episodes = e;
}


string Serie::getGender(){
  return gender;
}

void Serie::showVideo(){
  cout << "\n-----Serie " << name << "-----\nEpisodes:\n";
  for (int i = 0; i < episodes.size(); i++){
     cout << "* " <<  episodes[i].getTitle() <<
    ", " << "season: " << to_string(episodes[i].getSeason()) << endl;
  }

}

