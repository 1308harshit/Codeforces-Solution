#include <iostream>
#include <vector>
using namespace std;

int main(){

        int r,c;
        int cnt = 0;
        cin >> r >> c;

        vector<vector<int>> vec(r, vector<int>(c, 0));

        for(int i = 1; i<=r ;i++){

            // if odd fill all with #
            if(i%2 != 0){

                for(int j = 1; j<= c; j++){
                    cout << "#";
                }
                cout << endl;

            }else{
                cnt++;
                if(cnt%2!=0){
                    // fill (i,m)
                    for(int j = 1; j<= c; j++){
                        if(j == c){
                            cout << "#";
                        }else{
                            cout << ".";
                        }
                    }
                    cout << endl;
                    
                }else{
                    // fill (i,1)
                    for(int j = 1; j<= c; j++){
                        if(j == 1){
                            cout << "#";
                        }else{
                            cout << ".";
                        }
                    }
                    cout << endl;
                    
                }
            }
        }
}