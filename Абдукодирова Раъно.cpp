#include <iostream>
#include <string>

using namespace std;

/*class  Medsait {
public:
	string Doctor;
	
	void inputMedsait(){
	cout << " �����������, ��� ���� ������? �� ������ ���������� �� ����� � �����?\n";
	cin >> Doctor;
   }
};
class Patient {
public:
    double age;
    string disease ;
    string name;
    

    void  inputPatient() {
    	cout << "������� : ";
        cin >> name;
        cout << "�������: ";
        cin >> age;
        cout << "�������: ";
        cin >> disease;
        
         
    }
};

class City {
public:
    string cityName;

    void inputCity() {
        cout << "������� ����� : ";
        cin >> cityName;
    }
};

class Clinic {
public:
    string hospitalName;

    void inputClinic() {
        cout << "�������� ��������: ";
        cin >> hospitalName;
    }
};
class Number {
public:
    string clientNumber;

    void inputNumber() {
        cout << "����� ��������: ";
        cin >> clientNumber;
    }
};
class DoctorSpecialization {
public:
    string specialization;

    void inputDoctorSpecialization () {
        cout << "������������� �����: ";
        cin >>  specialization;
    }
};
class DayBooking {
public:
    public:
	string Date;
	int Sunday;
	
	void inputDayBooking(){
		cout << "������, � ����� ���� �� ������ ���������?"<<endl;
		cin >> Date;
	}
};*/
class DoctorAppointment {
public:
    string  doctorName;
    double appointmentTime;
     
    void inputDoctorAppointment () {
        cout << "��� �����: ";
        cin >> doctorName;
        cout << " � � ����� ����� ��� ��������?  :";
		cin >> appointmentTime;
        if(7<appointmentTime<17){
        cout<<"������";
		}
		else{
			cout<<"��������,����� � ��� ����� �� ��������!\n";
		}
    }
};/*
  class OnlinePharmacy{
  	public:
  		string pharmacyName;
  		string medicineName;
  		void inputOnlinePharmacy(){
  			cout<<"\n������� �������� ������:";
  			cin>>pharmacyName;
  			cout<<"������� �������� ���������:";
  			cin>>medicineName;
		  }
  };

  class PrescriptionInfo  {
  	public:
 	string prescriptionNumber;
 	string prescribingDoctor;
 	
 	void inputPrescriptionInfo(){
 		cout<<"����� �������:";
 		cin>>prescriptionNumber;
 		cout<<"����,������������ ������:";
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

cout << "\n�� ������������������!���� ������, ������ ��������������� ����� ��������-�������" << endl;

 /* OnlinePharmacy pharmacy;
  pharmacy.inputOnlinePharmacy();
  
   PrescriptionInfo prescription;
  prescription.inputPrescriptionInfo();*/
  
  cout<<"������� ������� �� ������������� ������ �����!";
    return 0;
}
