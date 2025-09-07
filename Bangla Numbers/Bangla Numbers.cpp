# include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
   string s;
    int t=1;
    while(in >> s){
        if(t<10) out << t <<".  ";
        else if(t<100) out <<t <<". ";
        else out <<t <<".";
        int len = s.length();
        int i=len/7,j=0;
       string r;
       int remain=len%7;
       if(remain==6){
           out << s[0] <<" lakh  " <<s[1] <<s[2] <<"  hajar "<<s[3] <<" shata " <<s[4]<<s[5];
        }
        else if(remain==5){
           out << s[0] <<s[1]<< "  hajar "<<s[2] <<" shata " <<s[3] <<s[4];
        }
        else if(remain==4){
            out << s[0] << "  hajar "<<s[1]<<" shata " <<s[2] <<s[3];
        }
        else if(remain==3){
            out << s[0]<<" shata "<<s[1] <<s[2];
        }
        else if(remain==2){
            out<<s[0]<<s[1];
        }
        else if(remain==1){
            out <<s[0];
        }
        while(j<i){
            if(remain==0&&j==0){
                out <<s[j*7] <<s[j*7+1] <<" lakh  " <<s[j*7+2] <<s[j*7+3]<<"  hajar " <<s[j*7+4]<<" shata " <<s[j*7+5]<<s[j*7+6];
            }
            else out << " kuti "<<s[j*7] <<s[j*7+1] <<" lakh  " <<s[j*7+2] <<s[j*7+3]<<"  hajar " <<s[j*7+4]<<" shata " <<s[j*7+5]<<s[j*7+6];
            j++;
        }
        out <<endl;
        t++;
    }
    in.close();
    out.close();
}
//2212 kuti lakh hajar shata
