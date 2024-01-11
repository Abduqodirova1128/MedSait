#include <iostream>
#include <string>

using namespace std;

/*class  Medsait {
public:
	string Doctor;
	
	void inputMedsait(){
	cout << " Здраствуйте, чем могу помочь? Вы хотите записаться на прием к врачу?\n";
	cin >> Doctor;
   }
};
class Patient {
public:
    double age;
    string disease ;
    string name;
    

    void  inputPatient() {
    	cout << "пациент : ";
        cin >> name;
        cout << "возраст: ";
        cin >> age;
        cout << "болезнь: ";
        cin >> disease;
        
         
    }
};

class City {
public:
    string cityName;

    void inputCity() {
        cout << "Введите город : ";
        cin >> cityName;
    }
};

class Clinic {
public:
    string hospitalName;

    void inputClinic() {
        cout << "название больницы: ";
        cin >> hospitalName;
    }
};
class Number {
public:
    string clientNumber;

    void inputNumber() {
        cout << "номер телефона: ";
        cin >> clientNumber;
    }
};
class DoctorSpecialization {
public:
    string specialization;

    void inputDoctorSpecialization () {
        cout << "Специальность врача: ";
        cin >>  specialization;
    }
};
class DayBooking {
public:
    public:
	string Date;
	int Sunday;
	
	void inputDayBooking(){
		cout << "Хорошо, в какой день вы хотите записатся?"<<endl;
		cin >> Date;
	}
};*/
class DoctorAppointment {
public:
    string  doctorName;
    double appointmentTime;
     
    void inputDoctorAppointment () {
        cout << "имя врача: ";
        cin >> doctorName;
        cout << " А в какое время вас записать?  :";
		cin >> appointmentTime;
        if(7<appointmentTime<17){
        cout<<"хорошо";
		}
		else{
			cout<<"Извините,врачи в это время не работают!\n";
		}
    }
};/*
  class OnlinePharmacy{
  	public:
  		string pharmacyName;
  		string medicineName;
  		void inputOnlinePharmacy(){
  			cout<<"\nВведите название аптеки:";
  			cin>>pharmacyName;
  			cout<<"Введите название препарата:";
  			cin>>medicineName;
		  }
  };

  class PrescriptionInfo  {
  	public:
 	string prescriptionNumber;
 	string prescribingDoctor;
 	
 	void inputPrescriptionInfo(){
 		cout<<"номер рецепта:";
 		cin>>prescriptionNumber;
 		cout<<"врач,выписывающий рецепт:";
 		cin>>prescribingDoctor;
	 }
 };


*/
int main() {
	setlocale(LC_ALL, "Russian");
     /*Medsait myMed;
    myMed.inputMedsait();

   Patient patient;
    patient.inputPatient();
    
    City city;
    city.inputCity();

    Clinic clinic;
    clinic.inputClinic();
    
    Number number;
    number.inputNumber();
    
    DoctorSpecialization specialization ;
    specialization.inputDoctorSpecialization ();
    
    DayBooking  Day;
    Day.inputDayBooking();
	
*/	DoctorAppointment doctor;
    doctor.inputDoctorAppointment ();

cout << "\nВы зарегистрировались!Если хотите, можете воспользоваться нашей интернет-аптекой" << endl;

 /* OnlinePharmacy pharmacy;
  pharmacy.inputOnlinePharmacy();
  
   PrescriptionInfo prescription;
  prescription.inputPrescriptionInfo();*/
  
  cout<<"Большое спасибо за использование нашего сайта!";
    return 0;
}
