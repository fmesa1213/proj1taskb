/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1 Task B
I wrote a program that initializes the map and stream in a list of directions as to determine whether or not it correctly traverses the maze..
*/

#include <iostream>
#include <directions.txt>
using namespace std;
int main()

{
int maze[6][6] = 
{
1,0,1,1,1,1,
1,0,0,0,1,1,
1,0,1,0,0,1,
1,0,1,0,1,1,
1,0,0,0,0,0,
1,1,1,1,1,1
};

int i=-1,j=0,x=0;             

char f[100];                   

cin.getline(f,100); 
	
open("directions.txt");

while(f[x] != '\0')           
{

if (f[x] =='D')  
{
  i++;
}
if (f[x] == 'U')                 
{
          i--;
}
if(f[x] == 'R')                 
{
	j++;
}
if(f[x] == 'L')                 
{
	j--;
}
x++;
}

if (i == 3 && j == 4)         
cout<<"You got out of the maze.";
else
cout<<"You are stuck in the maze.";

return 0;

}
