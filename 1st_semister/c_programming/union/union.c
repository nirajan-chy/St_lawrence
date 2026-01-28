#include<stdio.h>
union studentId{
  int passwordId;
  int citizenId;
  int drivingId;
};

int main(){
  union studentId id;
  id.citizenId = 1234;
  printf("citizenId ; %d  \n" , id.citizenId);
  id.drivingId = 1234567;
  printf("drivingId : %d \n " , id.drivingId);
  id.passwordId = 9876543;
  printf("passwordId : %d  " , id.passwordId);

  printf("citizenId ; %d  \n" , id.citizenId);
  return 0;
}