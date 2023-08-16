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
            case 'u' :
                switch(dir){
                    case 'E':
                        f = 'E';
                        dir = 'U';
                    break;
                    case 'W':
                        f = 'W';
                        dir = 'U';
                    break;
                    case 'N':
                        f = 'N';
                        dir = 'U';
                    break;
                    case 'S':
                        f = 'S';
                        dir = 'U';
                    break;
                    case 'U':
                        switch(f){
                            case 'E':
                                dir = 'W';
                                f = 'U';
                            break;
                            case 'W':
                                dir = 'E';
                                f = 'U';
                            break;
                            case 'N':
                                dir = 'S';
                                f = 'U';
                            break;
                            case 'S':
                                dir = 'N';
                                f = 'U';
                            break;
                        }
                    break;
                    case 'D':
                        switch(f){
                            case 'E':
                                dir = 'W';
                                f = 'D';
                            break;
                            case 'W':
                                dir = 'E';
                                f = 'D';
                            break;
                            case 'N':
                                dir = 'S';
                                f = 'D';
                            break;
                            case 'S':
                                dir = 'N';
                                f = 'D';
                            break;
                        }
                    break;
                }
            break;
            case 'd' :
                switch(dir){
                    case 'E':
                        f = 'W';
                        dir = 'D';
                    break;
                    case 'W':
                        f = 'E';
                        dir = 'D';
                    break;
                    case 'N':
                        f = 'S';
                        dir = 'D';
                    break;
                    case 'S':
                        f = 'N';
                        dir = 'D';
                    break;
                    case 'U':
                        switch(f){
                            case 'E':
                                dir = 'E';
                                f = 'D';
                            break;
                            case 'W':
                                dir = 'W';
                                f = 'D';
                            break;
                            case 'N':
                                dir = 'N';
                                f = 'D';
                            break;
                            case 'S':
                                dir = 'S';
                                f = 'D';
                            break;
                        }
                    break;
                    case 'D':
                        switch(f){
                            case 'E':
                                dir = 'E';
                                f = 'U';
                            break;
                            case 'W':
                                dir = 'W';
                                f = 'U';
                            break;
                            case 'N':
                                dir = 'N';
                                f = 'U';
                            break;
                            case 'S':
                                dir = 'S';
                                f = 'U';
                            break;
                        }
                    break;
                }
            break;
        }
    }
    vector<string> res(4);
    res[0] = to_string(x);
    res[1] = to_string(y);
    res[2] = to_string(z);
    res[3] = dir;
    return res;
}

int main(){

}