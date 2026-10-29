
#include <iostream>
#include <iomanip>


using namespace std;
int main() {
string mokiniuVardai[100];
int pazymiai[100][10];
int veiksmas, pazymiuSkaicius;
 while (veiksmas != 7) {
     cout<<"1. ivesti mokini ir jo pazymius"<<endl;
     cout<<"2. Perziureti visu mokiniu pazymius"<<endl;
     cout<<"3. Perziureti konkretaus mokinio pazymius"<<endl;
     cout<<"4. Atnaujinti pazymi"<<endl;
     cout<<"5. Apskaiciuoti mokinio vidurki"<<endl;
     cout<<"6. Pasalinti mokini"<<endl;
     cout<<"7. Iseiti"<<endl;
     cout<<" iveskite skaiciu nuo 1 iki 7"<<endl;
     cin>>veiksmas;

     if(veiksmas == 1) {
cout<<"iveskite mokini: "<<endl;
         cin>>mokiniuVardai[0];
         cout<<"iveskite kiek bus pazymiu: "<<endl;
         cin>>pazymiuSkaicius;
         for(int i=0;i<pazymiuSkaicius;i++) {
             cout<<"iveskite mokinio pazymius: "<<endl;
             cin>>pazymiai[i][0];
         }
         cout<<pazymiai;
     }
     else if(veiksmas == 2) {}
     else if(veiksmas == 3) {}
     else if(veiksmas == 4) {}
     else if(veiksmas == 5) {}
     else if(veiksmas == 6) {}
     else if(veiksmas == 7) {}
     else cout<<"Tokio veiksmo nėra"<<endl;
 }
    return 0;
}