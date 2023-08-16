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
            
        }
    }
}

int main(){

}