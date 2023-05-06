#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <string>
using namespace std;
class Animal{
    private:
        string Name;
        int16_t Age;
        int16_t Weight;
        double Height;
    public:
        string get_Name();
        int16_t get_Age();
        int16_t get_Weight();
        double get_Height();
        void Set_Animal(string Name, int16_t Age = 0, int16_t Weight = 0, double Height = 0);
};

void Animal::Set_Animal(string Name, int16_t Age, int16_t Weight, double Height){
    this->Name = Name;
    this->Age = Age;
    this->Weight = Weight;
    this->Height = Height;
}

string Animal::get_Name(){
    return this->Name;
}

int16_t Animal::get_Age(){
    return this->Age;
}

int16_t Animal::get_Weight(){
    return this->Weight;
}

double Animal::get_Height(){
    return this->Height;
}

class Animal_Cal{
    private:
        Animal A;
        Animal B;
    public:
        Animal_Cal(Animal A, Animal B);
        void Get_BMI(Animal A, Animal B);
        void Compare(Animal A, Animal B);
};

Animal_Cal::Animal_Cal(Animal A, Animal B){
    this->A = A;
    this->B = B;
}

void Animal_Cal::Get_BMI(Animal A, Animal B){
     double result = A.get_Weight() / pow(A.get_Height(), 2);
     printf("The BMI of the %s is %lf\n",(A.get_Name()).c_str(), result) ;
      result = B.get_Weight() / pow(B.get_Height(), 2);
     printf("The BMI of the %s is %lf\n",(B.get_Name()).c_str(),result) ;
}

void Animal_Cal::Compare(Animal A, Animal B){
     if(A.get_Age() > B.get_Age()) printf("%s is older than %s\n",(A.get_Name()).c_str(),(B.get_Name()).c_str());
     else if(A.get_Age() < B.get_Age()) printf("%s is older than %s\n",(B.get_Name()).c_str(),(A.get_Name()).c_str());
     else printf("Both are the same age\n");

     if(A.get_Weight() > B.get_Weight()) printf("%s is Hevier than %s\n",(A.get_Name()).c_str(),(B.get_Name()).c_str());
     else if(A.get_Weight() < B.get_Weight()) printf("%s is Hevier than %s\n",(B.get_Name()).c_str(),(A.get_Name()).c_str());
     else printf("Both are the same Weight\n");

}

int main(int argc, char const *argv[])
{
    Animal A,B;
    A.Set_Animal("Voi",100,400,1.5);
    B.Set_Animal("Huou cao co",40,400,2.3); 
    Animal_Cal Cal(A,B);
    Cal.Get_BMI(A,B);
    Cal.Compare(A,B);
    return 0;
}
