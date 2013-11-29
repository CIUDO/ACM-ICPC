#include <iostream>
#include <string.h>

    using namespace std;

    int main(){
         string linea;
         bool flags = true;
        while(true){
            getline(cin,linea);
            if(linea=="*") break;
            char A[linea.length()];
            for(int i = 0; i < linea.length();i++){
                A[i]=linea[i];
                A[i]=tolower(A[i]);
            }
            for(int i = 0; i < strlen(A);i++)
               if(A[i]==' '){
                    if(A[i+1]!=A[0])
                        flags = false;
               }
            if(!flags) cout<<"N"<<endl;
            else cout<<"Y"<<endl;
            flags = true;
        }
    }
