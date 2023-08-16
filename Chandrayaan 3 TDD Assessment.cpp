#include<bits/stdc++.h>
using namespace std;

vector <string> execute(int x, int y, int z, char dir, vector<char> vec){
    int n = vec.size();
    char f = 'D';
    for(int i=0; i<n; i++){
        switch(vec[i]){
            case 'f' :
                switch(dir){
                    case 'E':
                        x += 1;
                    break;
                    case 'W':
                        x -= 1;
                    break;
                    case 'N':
                        y += 1;
                    break;
                    case 'S':
                        y -= 1;
                    break;
                    case 'U':
                        z += 1;
                    break;
                    case 'D':
                        z -= 1;
                    break;
                }
            break;
            case 'b' :
                switch(dir){
                    case 'E':
                        x -= 1;
                    break;
                    case 'W':
                        x += 1;
                    break;
                    case 'N':
                        y -= 1;
                    break;
                    case 'S':
                        y += 1;
                    break;
                    case 'U':
                        z -= 1;
                    break;
                    case 'D':
                        z += 1;
                    break;
                }
            break;
            case 'l' :
                switch(dir){
                    case 'E':
                        dir = f == 'U' ? 'S' : 'N';
                    break;
                    case 'W':
                        dir = f == 'U' ? 'N' : 'S';
                    break;
                    case 'N':
                        dir = f == 'U' ? 'E' : 'W';
                    break;
                    case 'S':
                        dir = f == 'U' ? 'W' : 'E';
                    break;
                    case 'U':
                        switch(f){
                            case 'E':
                                dir = 'N';
                            break;
                            case 'W':
                                dir = 'S';
                            break;
                            case 'N':
                                dir = 'W';
                            break;
                            case 'S':
                                dir = 'E';
                            break;
                        }
                    break;
                    case 'D':
                        switch(f){
                            case 'E':
                                dir = 'S';
                            break;
                            case 'W':
                                dir = 'N';
                            break;
                            case 'N':
                                dir = 'E';
                            break;
                            case 'S':
                                dir = 'W';
                            break;
                        }
                    break;
                }
            break;
            case 'r' :
                switch(dir){
                    case 'E':
                        dir = f == 'U' ? 'N' : 'S';
                    break;
                    case 'W':
                        dir = f == 'U' ? 'S' : 'N';
                    break;
                    case 'N':
                        dir = f == 'U' ? 'W' : 'E';
                    break;
                    case 'S':
                        dir = f == 'U' ? 'E' : 'W';
                    break;
                    case 'U':
                        switch(f){
                            case 'E':
                                dir = 'S';
                            break;
                            case 'W':
                                dir = 'N';
                            break;
                            case 'N':
                                dir = 'E';
                            break;
                            case 'S':
                                dir = 'W';
                            break;
                        }
                    break;
                    case 'D':
                        switch(f){
                            case 'E':
                                dir = 'N';
                            break;
                            case 'W':
                                dir = 'S';
                            break;
                            case 'N':
                                dir = 'W';
                            break;
                            case 'S':
                                dir = 'E';
                            break;
                        }
                    break;
                }
            break;
        }
    }
}

int main(){

}