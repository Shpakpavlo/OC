#include "stdio.h"
#include "unistd.h"
int main() {
    int p1 = fork();
    if (p1 == 0) { 
        int p2 = fork();
        if (p2 ==0){
            }
        else{
            sleep(30);
        }

    }
    else {
        int p3 = fork();
        if (p3==0){
            int p4 = fork();
            if(p4==0){
                int p6 = fork();
                if(p6==0){
                    sleep(30);
                }
            }
        }
        else{
            int p5= fork();
            if (p5==0){}
            else{
            }
        }
        sleep(30);
        
        return 0;
    }
}