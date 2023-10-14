#include <iostream>
using namespace std;
int main (){
    
    int a,b,c,d,e,total, nilai;

   cout <<"Masukan nilai uts: ";
   cin >>a;
   cout <<"Masukan nilai uas: ";
   cin >>b;
   cout <<"Masukan nilai quis: ";
   cin >>c;
   cout <<"Masukan nilai tugas: ";
   cin >>d;
   cout <<"Masukan nilai projek: ";
   cin >>e;

   total = a+b+c+d+e;
   nilai = total/5;           //rumusnya   
   cout <<"nilai rata rata = "<<nilai<<endl;
  
   if (nilai >=0 && nilai <=30){
    cout <<"Grade Anda : 'E'"<<endl;
   }else if (nilai >=31 && nilai <= 40){
    cout <<"Grade Anda : 'D'"<<endl;
   }else if (nilai >=41 && nilai <= 50){
    cout <<"Ggrade Anda : 'C'"<<endl;
   }else if (nilai >= 51 && nilai <=60){
    cout <<"Grade Anda : 'B'"<<endl;
   }else if (nilai >=61 && nilai <=70){
    cout <<"Grade Anda : 'B+'"<<endl;
   }else if (nilai >=71 && nilai <=80){
    cout <<"Grade Anda : 'A'"<<endl;
   }else if (nilai>=91 && nilai <=100){
    cout <<"Grade Anda : 'A+'"<<endl;
    cout <<"Pertahankan!!"<<endl;
   }
   else{
    cout <<"Invalid!"<<endl;
   }
    return 0;
}