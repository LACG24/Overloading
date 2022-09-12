// Proyecto Integrador
// Luis Angel Cruz Garcia A01736345 
// 15/06/2022
#include <iostream>
#include <vector>
#include "Video.h"
#include "Serie.h"
#include "Movie.h"
using namespace std;

int main() {
  int option, reviewOption;
  char secondOption;
  string nameOption;
  vector <Video*> videos;
  cout << "********Menu********\n1. Load data file \n" << 
  "2. Show videos in general with a certain rating or of a certain genre\n" <<
  "3. Show episodes of a certain series with a certain rating\n" <<
  "4. Show movies with a certain rating\n" <<
  "5. Rate a video\n" << 
  "0. Exit\n"; 
  do{
  cout << "Option: "; 
  cin >> option;
  switch(option){
    case (0):{
    break;}
    case (1):{
      Video* m1 = new Movie(101, "The Batman", 2.3, "Action", 5);
      Video* m2 = new Movie(102, "Knives Out", 2.2, "Mystery", 5);
      Video* m3 = new Movie(103, "Dr Strange", 2.1, "Action", 3);
      Video* m4 = new Movie(104, "Sonic", 2.1, "Action", 1);
      Video* m5 = new Movie(105, "CODA", 1.8, "Drama", 4);
      Video* m6 = new Movie(106, "Deep Water", 2, "Drama", 3);
      Video* m7 = new Movie(107, "My Son", 1.5, "Mystery", 2);
      Video* m8 = new Movie(108, "Reminiscence", 2.5, "Mystery", 4);

      Episode e1("Pilot", 1);
      Episode e2("Honor Thy Father", 1);
      Episode e3("Lone Gunmen", 2);
      Episode e4("An Innocent Man", 2);
      Video* s1 = new Serie(201, "Arrow", 0.45, "Action", 1, {e1,e2,e3,e4});
      Episode e5("The Vanishing of Will Byers", 1);
      Episode e6("The Weirdo on Maple Street", 1);
      Episode e7("Holly, Jolly", 2);
      Episode e8("The Body", 2);
      Video* s2 = new Serie(202, "Stranger Things", 0.40, "Mystery", 2, {e5,e6,e7,e8});
      Episode e9("Ambush", 1);
      Episode e10("Rising Malevolence", 1);
      Episode e11("Shadow of Malevolence", 2);
      Episode e12("Destroy Malevolence", 2);
      Video* s3 = new Serie(203, "Clone Wars", 0.3 , "Action", 5, {e9,e10,e11,e12});
      Episode e13("Ace Degenerate", 1);
      Episode e14("Strike First", 1);
      Episode e15("Esqueleto", 2);
      Episode e16("Cobra Kai Never Dies", 2);
      Video* s4 = new Serie(204, "Cobra Kai", 0.48, "Drama", 3, {e13,e14,e15,e16});
      Episode e17("Sugarwood", 1);
      Episode e18("Blue Cat", 1);
      Episode e19("My Dripping Sleep", 2);
      Episode e20("Tonight We Improvise", 2);
      Video* s5 = new Serie(205, "Ozark", 0.38, "Mystery", 1, {e17,e18,e19,e20});
      Episode e21("What a Night for a Knight", 1);
      Episode e22("That's Snow Ghost", 1);
      Episode e23("Hassle in the Castle", 2);
      Episode e24("Entire season featured", 2);
      Video* s6 = new Serie(206, "Scooby-Doo", 0.25, "Mystery", 4, {e21,e22,e23,e24});
      Episode e25("Make Your Mark", 1);
      Episode e26("Use It", 1);
      Episode e27("Make the Unsafe Choice", 2);
      Episode e28("Commit... to YOU", 2);
      Video* s7 = new Serie(207, "Barry", 0.47, "Mystery", 2, {e25,e26,e27,e28});
      Episode e29("Welcome to the Playground", 1);
      Episode e30("Some Mysteries Are Better Left Unsolved", 1);
      Episode e31("The Base Violence Necessary for Change", 1);
      Episode e32("Happy Progress Day!", 1);
      Video* s8 = new Serie(208, "Arcane", 0.42, "Action", 5, {e29,e30,e31,e32});
      videos.insert(videos.end(), {m1,m2,m3,m4,m5,m6,m7,m8,s1,s2,s3,s4,s5,s6,s7,s8});
      cout << "Uploaded videos" << endl << endl;
    break;}
    case 2:{ 
      if (videos.size() == 0){
        cout << "Videos not uploaded" << endl << endl;
      }
      else{ 
        cout << "Choose by gender or review (g/r): ";
        cin >> secondOption;
        while(secondOption != 'g' && secondOption != 'r'){
          cout << "Incorrect option\nChoose by gender or review (g/r): ";
          cin >> secondOption;
        }
        if (secondOption == 'g'){
          cout << "Gender to see: Drama, Action, Mystery (D, A, M): ";
          cin >> secondOption;
          while(secondOption != 'D' && secondOption != 'A' && secondOption != 'M'){
            cout << "Incorrect option\nGender to see: Drama, Action, Mystery (D, A, M): ";
            cin >> secondOption;
          }
          for (Video* video: videos){
            if (secondOption == 'D' && video->getGender() == "Drama"){
              cout << *video;
            }
            else if (secondOption == 'A' && video->getGender() == "Action"){
              cout << *video;
            }
            else if (secondOption == 'M' && video->getGender() == "Mystery"){
              cout << *video;
            }
            else {
              continue;
            }
          }
        }
        else{
          cout << "Review of video to watch(1,2,3,4,5): ";
          cin >> reviewOption;
          while(reviewOption < 1 || reviewOption > 5){
            cout << "Incorrect option\nReview of video to watch(1,2,3,4,5): ";
            cin >> reviewOption;
          }
          for (Video* video: videos){
            if (reviewOption == 1 && video->getReview() == 1){
              cout << *video;
            }
            else if (reviewOption == 2 && video->getReview() == 2){
              cout << *video;
            }
            else if (reviewOption == 3 && video->getReview() == 3){
              cout << *video;
            }
            else if (reviewOption == 4 && video->getReview() == 4){
              cout << *video;;
            }
            else if (reviewOption == 5 && video->getReview() == 5){
              cout << *video;
            }
            else{
              continue;
            }
          }
        }
      }
    break;}
    case 3:{
      if (videos.size() == 0){
        cout << "Videos not uploaded" << endl;
      }
      else{ 
        cout << "Review of series to watch (1,2,3,4,5): ";
        cin >> reviewOption;
        while(reviewOption < 1 || reviewOption > 5){
          cout << "Incorrect option\nReview of series to watch (1,2,3,4,5): ";
          cin >> reviewOption;
        }
        for (Video* video: videos){
          if (reviewOption == 1 && video->getReview() == 1 && video->getType() == "Serie"){
            video -> showVideo();
          }
          else if (reviewOption == 2 && video->getReview() == 2 && video->getType() == "Serie"){
            video -> showVideo();
          }
          else if (reviewOption == 3 && video->getReview() == 3 && video->getType() == "Serie"){
            video -> showVideo();
          }
          else if (reviewOption == 4 && video->getReview() == 4 && video->getType() == "Serie"){
            video -> showVideo();
          }
          else if (reviewOption == 5 && video->getReview() == 5 && video->getType() == "Serie"){
            video -> showVideo();
          }
          else{
            continue;
          }
        }    
      }
    break;}
    case 4:{ 
      if (videos.size() == 0){
        cout << "Videos not uploaded" << endl;
      }
      else{ 
        cout << "Review of movies to watch(1,2,3,4,5): ";
        cin >> reviewOption;
        while(reviewOption < 1 || reviewOption > 5){
          cout << "Incorrect option\nReview of movies to watch(1,2,3,4,5): ";
          cin >> reviewOption;
        }
        for (Video* video: videos){
          if (reviewOption == 1 && video->getReview() == 1 && video->getType() == "Movie"){
            video -> showVideo();
          }
          else if (reviewOption == 2 && video->getReview() == 2 && video->getType() == "Movie"){
            video -> showVideo();
          }
          else if (reviewOption == 3 && video->getReview() == 3 && video->getType() == "Movie"){
            video -> showVideo();
          }
          else if (reviewOption == 4 && video->getReview() == 4 && video->getType() == "Movie"){
            video -> showVideo();
          }
          else if (reviewOption == 5 && video->getReview() == 5 && video->getType() == "Movie"){
            video -> showVideo();
          }
          else{
            continue;
          }
        }    
      }

    break;}
    case 5:{
      if (videos.size() == 0){
        cout << "Videos not uploaded" << endl;
      }
      else{
        int counter = 1;
        cout << "Name of the videos: " << endl;
        for (Video* video: videos){
          cout << video->getName() << endl;
        }
        cout << "Choose a title: ";
        cin >> nameOption;
        for (Video* video: videos){
          if (nameOption == video->getName()){
            cout << "New review (1,2,3,4,5): ";
            cin >> reviewOption; 
            while(reviewOption < 1 || reviewOption > 5){
              cout << "Incorrect option\nNew review (1,2,3,4,5): ";
              cin >> reviewOption;
            }
            video -> setReview(reviewOption);
            cout << "Changed review" << endl << endl;
            break;
          }
          else if(counter == videos.size()){
            cout << "Title not found" << endl << endl;
            break;
          }
          else{
            counter ++;
            continue;
          }
        }
      }
    break;}
    default:{
      cout << "Incorrect Option\n\n";

    }
  } 
  }while(option != 0);
  cout << "\nClosing service...";
} 