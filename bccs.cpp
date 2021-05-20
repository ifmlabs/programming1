/*

SIMPLE PROGRAM TO CHECK EITHER IF STUDENT PASSED THE
SUBJECT OR NOT
WRITTEN BY mohamed at THE INSTITUE OF FINANCE MANAGEMENT

*/
#include                <iostream>
#include                <fstream>
#include                <stdlib.h>
#include                <cmath>

#define PASSMARKS 60
#define FAILMARK 59
#define NOOFSUBJECTS 5

                        using std::cin;
                        using std::cout;
                        using std::clog;
                        using std::endl;

std::string SaveData_(){
FILE *fp;
fp = fopen("marks.dat", "w");
if(fp == NULL) {
    puts("Error opening file");
}else {



}
}           

int main(){
std::string SUBJECTS[NOOFSUBJECTS] = {"BIO", "PHY", "GEO", "MATH", "SCIENCE"};

int MarksBuffer[NOOFSUBJECTS];
for(int x = 0; x < NOOFSUBJECTS; ++x){
        cout<<"Enter Marks For " <<SUBJECTS[x]<<endl;
        cin>>MarksBuffer[x];    
}
for(int y = 0; y < NOOFSUBJECTS; ++y){
    if(MarksBuffer[y] <= FAILMARK){
        cout<<"Failed " << SUBJECTS[y]<<endl;
    }else if(MarksBuffer[y] >= PASSMARKS){
        cout<<"Passed " << SUBJECTS[y]<<endl;
        
    }
    y++;
    if(MarksBuffer[y] <= FAILMARK){
        cout<<"Failed " << SUBJECTS[y]<<endl;
    }else if(MarksBuffer[y] >= PASSMARKS){
        cout<<"Passed " << SUBJECTS[y]<<endl;;
        
    }
    y++;
    if(MarksBuffer[y] <= FAILMARK){
        cout<<"Failed " << SUBJECTS[y]<<endl;
    }else if(MarksBuffer[y] >= PASSMARKS){
        cout<<"Passed " << SUBJECTS[y]<<endl;;
        
    }
    y++;
    if(MarksBuffer[y] <= FAILMARK){
        cout<<"Failed " << SUBJECTS[y]<<endl;
    }else if(MarksBuffer[y] >= PASSMARKS){
        cout<<"Passed " << SUBJECTS[y]<<endl;
        
    }
    y++;
    if(MarksBuffer[y] <= FAILMARK){
        cout<<"Failed " << SUBJECTS[y]<<endl;
    }else if(MarksBuffer[y] >= PASSMARKS){
        cout<<"Passed " << SUBJECTS[y]<<endl;
        break;
    }
    
}
          
}
