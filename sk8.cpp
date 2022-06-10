#include <iostream>
#include <string.h>
using namespace std;

class matrik {
	public :
        void input();
        void proses();
        void output();

	private :
        int a;
string jurusan[5];
        int nilai1[5][5];
       float max_num, min_num, jumlah,rata;
};  
void matrik::input(){
  cout<<"MASUKKAN 3 JURUSAN : "<<endl;
  cout<<endl;
  for(int j=0;j<3;j++){
    cout<<"Masukkan jurusan ke-"<<j+1<<" : ";
    cin>>jurusan[j];
  }
  cout<<endl;

  cout<<"Masukkan banyak angkatan lulusan : ";
  cin>>a;
  for(int i=0;i<a;i++){
    cout<<"Angkatan ke-"<<i+1<<endl;
    for(int j=0;j<3;j++){
      
      cout<<jurusan[j]<<" : ";
      cin>>nilai1[i][j];
    }
  }
}

void matrik::proses(){
  jumlah=0;
    for (int i=0;i<a;i++){
      for(int j=0;j<3;j++){
        jumlah=jumlah+nilai1[i][j];
      }
    }
  
  max_num = nilai1[0][0];
  // proses mencari nilai terbesar
  for (int i=0;i<a;i++){
      for(int j=0;j<3;j++){
    if(nilai1[i][j] > max_num){
      max_num = nilai1[i][j];
    }
  }
    }
  
  min_num = nilai1[0][0];
  // proses mencari nilai terkecil
  for (int i=0;i<a;i++){
      for(int j=0;j<3;j++){
    if(nilai1[i][j] < min_num){
      min_num = nilai1[i][j];
    }
  }
    }
  rata=jumlah/(a*3);
  
}

void matrik::output(){
  cout<<"Tampil Data Lulus"<<endl<<endl;
  cout<<"\t\tTA\tTE\tTU"<<endl;
  for(int i=0;i<a;i++){
    cout<<"Th ke-"<<i+1<<"\t";
    for(int j=0;j<3;j++){
      cout<<nilai1[i][j]<<"\t";
    }
    cout<<endl;
  }
  cout<<endl;
  cout<<"Jumlah yang lulus : "<<jumlah<<endl;
  cout<<"Lulus terbesar    : "<<max_num<<endl;
  cout<<"Lulus terkecil    : "<<min_num<<endl;
  cout<<"Rata rata         : "<<rata<<endl;
  
}

int main() {
  matrik mt;
  mt.input();
  mt.proses();
  mt.output();
}
