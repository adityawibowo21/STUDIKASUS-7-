#include <iostream>
using namespace std;

class Sorting{

  private:
      string nama[50], prodi[20], kata[10];
      int temp;
      int nim[10], no_telp[12],cari,pilih;
      int n;
      char lanjut;
  
  public:
      void input();
      void input_data();
      void cek_data();
      void proses_urut();
      void proses_cari();
};

void Sorting::input(){
    x:
    cout<<"\n==========================================\n";
    cout<<"|                  Menu                   |\n";
    cout<<"===========================================\n";
    cout<<"| 1. Input data                           |"<<endl;
    cout<<"| 2. Cek data                             |"<<endl;
    cout<<"| 3. Urutkan data                         |"<<endl;
    cout<<"| 4. Cari data                            |"<<endl;
    cout<<"| 5. Selesai                              |"<<endl;
    cout<<"===========================================\n";
    cout<<"Silahkan di pilih : ";   
    cin>>pilih;
    switch (pilih){
    case 1 :  //menampilkan isi menu 1. Cek data
      input_data();
      cout<<"Lanjutkan [Y/T] : "; cin>>lanjut;
      if(lanjut=='Y'){
        goto x;
      }else{
        goto y;
      }
      break;
      
    case 2 :  //menampilkan isi menu 2. Urutkan data
      cek_data();
       cout<<"Lanjutkan [Y/T] : "; cin>>lanjut;
      if(lanjut=='Y'){
        goto x;
      }else{
        goto y;
      }
      break;
      
    case 3 :  //menampilkan isi menu 3. Cari data
      proses_urut();
       cout<<"Lanjutkan [Y/T] : "; cin>>lanjut;
      if(lanjut=='Y'){
        goto x;
      }else{
        goto y;
      }
      break;

    case 4 :  //menampilkan isi menu 5. selesai
      proses_cari();
      cout<<"Lanjutkan [Y/T] : "; cin>>lanjut;
      if(lanjut=='Y'){
        goto x;
      }else{
        goto y;
      }
      break;
     y: 
    case 5 :
      system ("clear");
      cout<<"anda telah out, thank u!";
      cout<<endl;
      break;
  }
}

void Sorting::input_data(){
    cout << "Masukan banyak mahasiswa : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout<<"\n===========================================\n";
        cout <<"| Data Mahasiswa ke-" <<i<< endl;
        cout<<"===========================================\n";
        cout <<"| Masukkan NIM    : ";cin >> nim[i];
        cout <<"| Masukkan NAMA   : ";cin >> nama[i];
        cout <<"| Masukkan PRODI  : ";cin >> prodi[i];
        cout <<"| Masukkan No.Telp: ";cin >> no_telp[i];
        cout<<"===========================================\n";
    }
}

void Sorting::cek_data(){
  for (int i = 0; i < n; i++){
        cout<<"\n===========================================\n";
        cout <<"| Data Mahasiswa ke-" <<i<< endl;
        cout<<"===========================================\n";
        cout <<"| NIM    : "<<nim[i]<<endl;
        cout <<"| NAMA   : "<<nama[i]<<endl;
        cout <<"| PRODI  : "<<prodi[i]<<endl;
        cout <<"| No.Telp: "<<no_telp[i]<<endl;
        cout<<"===========================================\n";
    }
}

void Sorting::proses_urut(){
  cout<<"\nData Urut Turun: ";
  for(int i=1; i<n; i++){
    for (int j=0; j<n-i; j++){
      if (nim[j]<nim[j+1]){
        temp=nim[j];
        nim[j]=nim[j+1];
        nim[j+1]=temp;
      }
    }
  }
  for (int i=0; i<n; i++){
    cout<<nim[i]<<", ";
  }
  cout<<endl;
  }

void Sorting::proses_cari(){
    cout<<"\n\nMasukkan NIM yang ingin di cari : "; 
    cin>>cari;
    cout<<"\n=============================================================================\n";
    cout<<"||      NIM      ||         Nama      ||        PRODI       ||    No.Telp   ||\n";
    cout<<"=============================================================================\n";
    for (int i = 0; i <= n; i++){
      if (nim[i] == cari){
        cout <<"\t"<< nim[i] << "\t\t";
        cout << nama[i] << "\t\t";
        cout << prodi[i] << "\t\t";
        cout << no_telp[i]<<endl<<endl;
      }
    } 
  }

int main(){
  Sorting x;
  x.input();
  x.input_data();
  x.cek_data();
  x.proses_urut();
  x.proses_cari();
}