#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

struct CPosition2D{
char x;
char y;
};

struct CPosition3D{
char x;
char y;
char z;
};

struct CAsteroid{
CPosition3D position;
char color;
char size;
};

struct CCannon{
CPosition2D position;
char color;
};

struct CGame{
char lives;
int score;
int previous_time;
CCannon cannon;
char numberOfAsteroids;
CAsteroid asteroids[MAX_NUMBER_ASTEROIDS];

};


#endif /* MAIN_H_INCLUDED */
