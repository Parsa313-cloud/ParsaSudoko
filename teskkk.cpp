#include<iostream>
#include<time.h>
#include "clui.h"
#include<cstring>
using namespace std;
struct name
{
    char esm[100];
};
bool size(char avali[] , char dovomi[])
{
    int tedad_1 = 0 , tedad_2 = 0 ;
    for(int i =  0 ; avali[i] != '\0' ; i++)
    {
         tedad_1++;
    }
    for(int i =  0 ; dovomi[i] != '\0' ; i++)
    {
         tedad_2++;
    }
    if(tedad_1 == tedad_2){
        return 1;
    }
    else{
        return 0;
    }
}
bool compare(char avali[] , char dovomi[])
{
    bool tool = size(avali , dovomi);
    if(tool == 0 ){
        return 0;
    }
    int tedad = 0;
    for(int i =  0 ; avali[i] != '\0' ; i++)
    {
         tedad++;
    }
    for(int i = 0 ; i < tedad ; i++)
    {
        if(avali[i] != dovomi[i]){
            return 0;
        }

    }
    return 1;
}
void sfhe_1(name nam[20],int &karbar ){
  int max = 100;
  cout<<"choose a name for your self"<<endl; 
    cin.getline(nam[karbar].esm , max);
    karbar++;
    clear_screen();
}
void sfhe_2(name nam[20], int &karbar, int &adad){
   change_color_rgb(61, 252, 3);
    cursor_to_pos(get_window_rows()/2  - 5, get_window_cols()/2); 
    cout<<"in the name of god"<<endl;
    cursor_to_pos(get_window_rows()/2 - 4 , get_window_cols()/2);
    change_color_rgb(3, 252, 244);
    cout<<"-------------------";
    change_color_rgb(252, 3, 11);
      cursor_to_pos(get_window_rows()/2 + 3 , get_window_cols()/2);
    cout<<" welcom to sudoku"<<endl<<endl;
    int andaze = strlen(nam[karbar].esm);
    cout<<"                          you logged in ";
    change_color_rgb(24, 3, 252);
    for(int i = 0 ; i < andaze ; i++)
    {
        cout<<nam[karbar].esm[i];
    }
    cout<<endl<<endl;
    change_color_rgb(252, 3, 3);
    cout<<"                          1: ";
    change_color_rgb(45, 3, 252);
    cout<<"Start a new game"<<endl;
    change_color_rgb(252, 3, 3);
    cout<<"                          2: ";
    change_color_rgb(45, 3, 252);
    cout<<"Play a saved game"<<endl;
    change_color_rgb(252, 3, 3);
    cout<<"                          3: ";
    change_color_rgb(45, 3, 252); 
    cout<<"Leader Bord"<<endl;
    change_color_rgb(252, 3, 3);
    cout<<"                          4: ";
    change_color_rgb(45, 3, 252);
    cout<<"Exit the game"<<endl<<endl;
    change_color_rgb(252, 3, 3);
    cout<<"                          Press a number from 1 to 4 : ";
    cin>>adad;
    clear_screen();
}
int main()
{
    name nam[20];
    int karbar = 0 , adad = 0 , emtiaz = 0 , manfi = 0 ;
    sfhe_1(nam,karbar);
    sfhe_2(nam,karbar,adad);
   if(adad == 1){
    int timer = 100;
    cursor_to_pos(13 , 57);
change_color_rgb(252, 3, 3);
cout<<"sudoku";
change_color_rgb(219, 252, 3);
for(int i = 0 ; i < 50 ; i++){
  for(int p = 0 ; p < 30 ; p++){
    cursor_to_pos(p , i);
    cout<<'|';
  }
}
change_color_rgb(219, 252, 3);
for(int i = 70 ; i < 124 ; i++){
  for(int p = 0 ; p < 30 ; p++){
    cursor_to_pos(p , i);
    cout<<'|';
  }
  
}

  cursor_to_pos(11 , 54);
  change_color_rgb(76, 39, 242);
  cout<<"emtiaz :"<<emtiaz;
  
reset_color();
    int gdv[9][9] = {0 , 0 , 0    , 6 , 0 , 4 , 7 , 0 , 0,
                     7 , 0 , 6    , 0 , 0 ,0    , 0 , 0 , 9,
                     0 , 0 , 0    , 0 , 0 , 5   , 0 , 8 , 0,

                     0 , 7 , 1    , 0 , 2 , 0   , 0 , 9 , 3,
                     8 , 0 , 0    , 0 , 0 , 0   , 0 , 0 , 0,
                     4 , 3 , 0    , 0 , 1 , 0   , 0 , 7 , 2,
                     
                     0 , 5 , 0    , 2 , 0 , 0   , 0 , 0 , 0,
                     3 , 0 , 0    , 0 , 0 , 0   , 2 , 0 , 8,
                     0 , 0 , 2    , 3 , 0 , 1   , 0 , 0 , 0};
    
bool bb = 0;
for(int x_1 = 15 ; x_1 < 28 ; x_1++)
{
  if((17 < (x_1)) && (x_1 < 20)){
    x_1++;
    continue;
  }
  if((22 < (x_1)) && (x_1 < 25)){
    x_1++;
    continue;
  }
for(int i = 54 ; i < 67 ; i++)
{
  cursor_to_pos(x_1 , i);
  if((56 < i) && (i < 59))
  {
    cursor_to_pos(x_1 , i);
    cout<<' ';
    bb = 1;

  }
  if((61 < i) && (i < 64)){
    cout<<' ';
    bb = 1 ;
  }
  if(bb == 0){
  cursor_to_pos(x_1 , i);
  cout<<'0';}
  bb = 0;

}
    change_color_rgb(242, 52, 39);
    cursor_to_pos(15 , 59);
    cout<<'6';
    cursor_to_pos(15 , 61);
    cout<<'4';
    cursor_to_pos(15 , 64);
    cout<<'7';
    cursor_to_pos(16 , 64);
    cout<<'7';
    cursor_to_pos(16 , 56);
    cout<<'6';
    cursor_to_pos(16 , 64);
    cout<<'9';
    cursor_to_pos(17 , 61);
    cout<<'5';
    cursor_to_pos(17 , 65);
    cout<<'8';
    cursor_to_pos(20 , 55);
    cout<<'7';
    cursor_to_pos(20 , 60);
    cout<<'2';
    cursor_to_pos(20 , 65);
    cout<<'9';
    cursor_to_pos(20 , 66);
    cout<<'3';
    cursor_to_pos(21 , 54);
    cout<<'8';
    cursor_to_pos(21 , 66);
    cout<<'5';
    cursor_to_pos(22 , 54);
    cout<<'4';
    cursor_to_pos(22 , 55);
    cout<<'3';
    cursor_to_pos(22 , 60);
    cout<<'1';
    cursor_to_pos(22 , 65);
    cout<<'7';
    cursor_to_pos(25 , 55);
    cout<<'5';
    cursor_to_pos(25 , 59);
    cout<<'2';
    cursor_to_pos(26 , 54);
    cout<<'3';
    cursor_to_pos(26 , 64);
    cout<<'2';
    cursor_to_pos(26 , 66);
    cout<<'8';
    cursor_to_pos(27 , 56);
    cout<<'2';
    cursor_to_pos(27 , 59);
    cout<<'3';
    cursor_to_pos(27 , 61);
    cout<<'1' ;  
    reset_color();
   
}
    int x = 55 , y = 17 ;
    cursor_to_pos(y , x);
    while( 0 < timer ){
      if(is_keyboard_hit()){
        getch();
    char ch;
    ch = getch();
    if(ch == 'o'){
      cursor_to_pos(y , x);
       cout<<" ";
        cursor_to_pos(y , x);
        int x_1 , y_1;
        x_1 = x - 54;
        y_1 = y - 15;
        if((2 < x_1) && (x_1 < 8)){
           x_1 = x_1 - 2;
          }
          if((9 < x_1) && (x_1 < 13)){
            x_1 = x_1 - 4;
          }
          if((2 < y_1) && (y_1 < 8)){
           y_1 = y_1 - 2;
          }
          if((9 < y_1) && (y_1 < 13)){
            y_1 = y_1 - 4;
          }
        int cha;
        cin>>cha;
        int tedad = 0 ;
      for(int i = 0 ; i < 9 ; i++)
      {
        if(gdv[i][x_1] == cha){
            tedad++;
        }
      }
      for(int i = 0 ; i < 9 ; i++)
      {
        if(gdv[y_1][i] == cha){
            tedad++;
        }
      }
      for(int i = (x_1 / 3)*3 ; i < ((x_1 / 3 )*3 + 3) ; i++ ){
        for(int m  = (y_1 / 3)*3 ; m < ((y_1 /3)*3 + 3) ; m++){
            if(gdv[m][i] == cha){
                tedad++;
            }
        }
      }
      if(0 < tedad){
        cursor_to_pos(0 , 54);
            cout<<"wrooong";
            emtiaz--;
            manfi++;
            if(manfi == 5){
              clear_screen();
              cursor_to_pos(15 , 50);
              cout<<"you lost !!!!!";
              
            }
            
            cursor_to_pos(11 , 62);
            cout<<emtiaz;
            cursor_to_pos(y , x);
            tedad = 0 ;
            delay(1000);
            for(int y = 54 ; y < 61 ; y++){
            cursor_to_pos(0 , y);
            cout<<" ";
            }
            cursor_to_pos(y , x);
            cout<<'0';
      }
        else{
          cursor_to_pos(y , x); 
           gdv[y_1][x_1] = cha;
           tedad = 0;
           emtiaz++;
           
            cursor_to_pos(11 , 62);
            cout<<emtiaz;
            cursor_to_pos(y , x);
        }
    
      }
        cursor_to_pos(y , x);
      
    
     if(ch == 27)
     {
      clear_screen();
      cursor_to_pos(15 , 50);
      cout<<"you paused the game";
      char ta ;
      cin>>ta;
      
     }
     if(ch == 72){
        if((y == 25) || (y == 20)){
            y = y -3;
           cursor_to_pos(y , x);
        }
        else{
        if(15 < y){
        cursor_to_pos(--y , x);
          }
        }
     }
     if(ch == 80){
        if((y == 17) || ( y == 22)){
            y = y + 3;
           cursor_to_pos(y , x); 
        }else{
        if(y < 27){
        cursor_to_pos(++y , x);
          }
        } 
     }
     if(ch == 75){
        if((x == 59) || (x == 64)){
            x = x - 3;
            cursor_to_pos(y , x);
        }else{
        if(54 < x){
            cursor_to_pos(y , --x);
          }
        }
     }
     if(ch == 77){
        if((x == 56) || (x == 61)){
            x = x + 3;
            cursor_to_pos(y , x);
        }else{
        if(x < 66){
        cursor_to_pos(y , ++x);
          }
        }
     }
     
      }
      delay(1000);
        timer--;
        cursor_to_pos(5, 49);
        cout << "Time remaining: " << timer / 60
         << "m " << timer % 60 << 's' << flush;
         cursor_to_pos(y , x);    
    }


    

}
getch();
return 0;
}