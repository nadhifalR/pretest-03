/*
 * Author : Nadhifal
 * NPM : 140810180048
 * Kelas : B
 * Deskripsi :
 * Tanggal : 13 Maret 2019
 */

 #include <iostream>
 using namespace std;

 struct r_mhs{
    char npm[14];
    char Nama[40];
    float ipk;
 };

 typedef r_mhs larikMhs[30];

 void banyakData(int& n);
 void inputMhs(larikMhs& mhs, int n);
 void cetakMhs(larikMhs mhs, int n);
 void sortNama(larikMhs mhs, int n);

 main(){
    int n;
    larikMhs Mahasiswa;

    banyakData(n);
    inputMhs(Mahasiswa,n);
    cetakMhs(Mahasiswa, n);
 }

void banyakData(int& n){
    cout<<"Banyak Data : ";cin>>n;
}

void inputMhs(larikMhs& mhs, int n){
    cout<<"Input Data Mahasiswa : "<<endl;

    for(int i=0;i<n;i++){
        cout<<"------Mahasiswa "<<i+1<<"------ "<<endl;
        cout<<"Nama : ";cin>>mhs[i].Nama;
        cout<<"NPM : ";cin>>mhs[i].npm;
        cout<<"IPK : ";cin>>mhs[i].ipk;
    }
}

void cetakMhs(larikMhs mhs, int n){
    cout<<"             Data Mahasiswa              "<<endl;
    cout<<"========================================="<<endl;

     for(int i=0;i<n;i++){
        cout<<mhs[i].npm<<" "<<mhs[i].Nama<<"       "<<mhs[i].ipk<<endl;
     }
}

 void sortNama(larikMhs mhs, int n){
    int i, val, index;

    for(i=1; i<n; i++){
        val = a[i];
        index = i;
        while(index>0 && a[index-1]<val){
            a[index] = a[index-1];
            index = index-1;
        }
        a[index] = val;
    }
    cout<<"Sorting Data Menggunakan Insertion : "<<endl;
    for(i=0; i<n; i++){
        cout<<"Ranking "<<i+1<<" : "<<b[i]<<" Dengan nilai "<<a[i]<<endl;
    }
 }
